#include "mainwindow.h"
#include "ui_dialog.h"
#include "ui_mainwindow.h"
#include "myitem.h"
#include "dbmanager.h"

// All operations are performed in the constructor.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // set up the ui
    ui->setupUi(this);
    // set operation dialogs' title
    dialog.setWindowTitle("Operation");

    // create the scene on graphicsview
    paintScene();
    // start timer, advance the objects according to it.
    counter();

    // create database connection
    dbManager.createDbConnection(db);
    // create item objects and fill the items vector from database to use.
    dbManager.selectItems(items);
    // create the items on the screen.
    addToScene(items);
}

//Destructor
MainWindow::~MainWindow()
{
    delete ui;
    // Delete the item objects that created dynamicaly to avoid memory leaks.
    clearScene(items);
    // close the database connection.
    db.close();
}

// Advance using the counter
void MainWindow::counter()
{
    // timer finish, finish advance
    connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(100);
}

// Create the scene (box that traps the item objects)
void MainWindow::paintScene()
{
    ui->graphicsView->setScene(&scene);
    // ui->graphicsView->setBackgroundBrush(Qt::white);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    // create rectangular scene.
    scene.setSceneRect(-200, -200, 1700, 750);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);

    // Add border to enhance visibility of the scene.
    QPen myPen = QPen(Qt::white);
    QLineF top(scene.sceneRect().topLeft(), scene.sceneRect().topRight());
    QLineF bottom(scene.sceneRect().bottomLeft(), scene.sceneRect().bottomRight());
    QLineF left(scene.sceneRect().topLeft(), scene.sceneRect().bottomLeft());
    QLineF right(scene.sceneRect().topRight(), scene.sceneRect().bottomRight());

    scene.addLine(top, myPen);
    scene.addLine(bottom, myPen);
    scene.addLine(left, myPen);
    scene.addLine(right, myPen);
}

// Add items to scene.
void MainWindow::addToScene(std::vector<MyItem*> &items) {
    for (size_t i = 0; i < items.size(); ++i) {
        scene.addItem(items[i]);
    }
}

// Clear items from the scene.
void MainWindow::clearScene(std::vector<MyItem*> &items) {
    for (size_t i = 0; i < items.size(); ++i) {
        delete items[i];
    }
}

// If you clicked Insert Button on the mainWindow, then pop-up dialog and fill the form to create new item to visiualize on scene.
void MainWindow::on_insertButton_clicked()
{
    dialog.setWindowTitle("Insert Operation");
    dialog.setModal(true);
    if (dialog.exec() == QDialog::Accepted) { // if you accept the form in the dialog...
        // take the item properties info from dialog to create new item.
        // create item in database then on vector.
        dbManager.insertItem(items, dialog.itemIdInfo(), dialog.itemAngleInfo(), dialog.itemSpeedInfo(), dialog.itemPosXInfo(), dialog.itemPosYInfo());
        scene.addItem(items.back());
    }
}

// If you clicked Delete Button on the mainWindow, then pop-up dialog and fill the only id form to delete the id-matched object from scene and items vector.
void MainWindow::on_deleteButton_clicked()
{
    dialog.setWindowTitle("Delete Operation");
    dialog.setModal(true);
    if (dialog.exec() == QDialog::Accepted) { // if you accept the form in the dialog...
        // delete the item from database, then from vector.
        dbManager.deleteItem(items, dialog.itemIdInfo());
        int i = 0;
        while (items[i]->isId() != dialog.itemIdInfo()) {
            i++;
        }
        scene.removeItem(items[i]);
        delete items[i];
    }
}

