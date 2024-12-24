#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

int main(int argc, char* argv[]) {

    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QHBoxLayout *hLayout = new QHBoxLayout;

    hLayout->addWidget(button1);
    hLayout->addWidget(button2);
    hLayout->addWidget(button3);
    hLayout->addWidget(button4);


    window->setLayout(hLayout);
    window->show();
    return app.exec();
}
