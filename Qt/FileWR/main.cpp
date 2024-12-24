#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QString>

//Study Further!
#include <QTextStream>

// Write the File
void write(QString fileName) {
    QFile myFile(fileName);

    if (!myFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "file could not open for writing.";
    }

    // Important!!
    QTextStream out(&myFile);
    out << "Hello, World!!";

    myFile.close();
}


// Read the File
void read(QString fileName) {
    QFile myFile(fileName);

    if (!myFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "file could not open for reading.";
    }

    //Important!
    QTextStream  in(&myFile);
    QString context = in.readAll();

    qDebug() << context;

    myFile.close();
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString path = "/home/stajer/Desktop/deneme.txt";

    write(path);
    read(path);

    return a.exec();
}
