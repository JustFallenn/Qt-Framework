#include <QApplication>
#include <QtGui>
#include <QtCore>
#include <QtWidgets>

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("MinimalWindow");

    QGridLayout *layout = new QGridLayout;
    QLabel *label = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;

    layout->addWidget(label, 0,0);
    layout->addWidget(txtName, 0,1);

    layout->addWidget(label2, 1,0);
    layout->addWidget(txtName2, 1,1);

    QPushButton *button = new QPushButton("Ok");

    layout->addWidget(button, 2, 0, 5, 8);


    window->setLayout(layout);
    window->show();
    return app.exec();
}
