#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myitem.h"


// All operations are performed in the constructor.
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // set up the ui
    ui->setupUi(this);
    // create the scene on graphicsview
    paintScene();
    // start timer, advance the objects according to it.
    counter();
    connect(&client, &Client::dataReady, this, &MainWindow::onDataReady);
}


//Destructor
MainWindow::~MainWindow()
{
    delete ui;
    // Delete the item objects that created dynamicaly to avoid memory leaks.
    clearScene(items);
}


// Make all Item Operations when data is ready to work.
void MainWindow::onDataReady()
{
    size_t size = items.size();

    client.itemTracker(items);

    // Create the items on the screen.
    if (size != items.size()) {
        addToScene(items);
    }
}


// Advance using the counter.
void MainWindow::counter()
{
    // Timer finish, finish advance.
    connect(&timer, SIGNAL(timeout()), &scene, SLOT(advance()));
    timer.start(100);
}


// Create the scene (box that traps the item objects).
void MainWindow::paintScene()
{
    ui->graphicsView->setScene(&scene);
    // ui->graphicsView->setBackgroundBrush(Qt::white);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    // Create rectangular scene.
    scene.setSceneRect(-675, -425, 1350, 850);
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
    scene.addItem(items.back());
    qDebug() << "New item is added to scene.";
}


// Clear items from the scene.
void MainWindow::clearScene(std::vector<MyItem*> &items) {
    for (size_t i = 0; i < items.size(); ++i) {
        delete items[i];
    }
}

