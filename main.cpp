#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator T;
    QStringList langs;
    langs <<"Español"<<"Português"<<"English";
    const QString lang = QInputDialog::getItem(NULL,"Language","Select a language", langs);

    if(lang=="Português"){
        T.load(":/portugues.qm");
    }else if(lang == "English"){
        T.load(":/ingles.qm");
    }
    if(lang != "Español"){
        a.installTranslator(&T);
    }

    a.setStyle("fusion");
    MainWindow w;
    w.show();
    return a.exec();
}
