#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QPixmap>
#include <QString>
#include <QImageReader>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QColor>
#include <QImage>
#include <QRgb>
#include <math.h>

QString Ecsurl;
QString ipath;
int height;
int width;


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

char mass[13] = "@#S%?*+;;,..";

 void MainWindow::on_loadbutton_clicked()
 {
   ipath = QFileDialog::getOpenFileName();
   qDebug() << ipath << "1";
 }


void MainWindow::on_ecsport_clicked()
{
    QString Ecsurl = QFileDialog::getSaveFileName();
    QFile fileecs(Ecsurl);
    if (!fileecs.open(QIODevice::ReadWrite | QIODevice::Text))
     return;
     qDebug() << Ecsurl;

     QPixmap img(QString ipath);
     ui->label->setText(ipath);
     QImageReader reader(ipath);
     QSize sizeOfImage = reader.size();
     int height = sizeOfImage.height();
     QString y_max = QString::number(height);
     ui->qwe->setText(y_max);
     int width = sizeOfImage.width();
     QString x_max = QString::number(width);
     ui->qwer->setText(x_max);

     for(int y=0; y< height; y++)
     {
         qDebug() << y << Qt::endl;
         for(int x=0; x<width; x++)
         {
             QImage img(ipath);
             int pixIdx = img.pixelIndex(x,y);
             QRgb pixColor = img.color(pixIdx);
                int R   = qRed(pixColor);
                int G = qGreen(pixColor);
                int B  = qBlue(pixColor);

     float br = round((0.375 * R + 0.5 * G + 0.16 * B)*100)/100;
     int pos = (br/255) * 11;

     QTextStream out(&fileecs);
     out << mass[pos];
     };
         QTextStream out(&fileecs);
         out << Qt::endl;
     };
     qDebug() << "end" << Qt::endl;
}

void MainWindow::on_progressBar_valueChanged(int value)
{

}

