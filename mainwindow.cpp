#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calcular_clicked()
{
    const double n1 = ui->numero1->value();
    const double n2 = ui->numero2->value();
    double res = 0.0;
    switch(ui->operacion->currentIndex()){
        case 0://SUMA
            res = n1+n2;
            break;
        case 1://RESTA
            res = n1-n2;
            break;
        case 2://MULTIPLICACION
            res = n1*n2;
            break;
        case 3://DIVISION
            res = n1/n2;
            break;

    }
    QMessageBox::information(this, tr("Resultado"),tr("El resultado es: %1").arg(res));
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}
