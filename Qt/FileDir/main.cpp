#include <QCoreApplication>
#include <QDebug>
#include <QDir> //for file systems
#include <QFileInfo> //for files
#include <QString>  //for strings

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Is the Directory Exists???
    QDir myDir("/home/stajer/Desktop/stajer/");
    // qDebug() << myDir.exists();

    //QDir myDir;
    //QString myPath = "/home/stajer/Desktop/test";


    // Find all drives
    // foreach (QFileInfo myItem, myDir.drives()) {
    //     qDebug() << myItem.absoluteFilePath();
    // }

    //Is the path exists or not? if not create.
    // if (!myDir.exists(myPath)) {
    //     myDir.mkpath(myPath);
    //     qDebug() << "Created.";
    // } else {
    //     qDebug() << "Already exists.";
    // }


    foreach (QFileInfo myItem, myDir.entryInfoList()) {
        if (myItem.isDir()) {
            qDebug() << "Dir: " << myItem.absoluteFilePath();
        }

        if (myItem.isFile()) {
            qDebug() << "File: " << myItem.absoluteFilePath();
        }

    }

    return a.exec();
}
