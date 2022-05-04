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
#include <string>

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

char mass[13] = "@#S%?*+;;,..";

MainWindow::~MainWindow()
{
    delete ui;
}


 void MainWindow::on_loadbutton_clicked()
 {
   int depthh;
   ipath = QFileDialog::getOpenFileName();
   QImage img(ipath);
   depthh = img.depth();
   qDebug() << ipath << "||" << depthh;
   ui->finish->setText("Import");
 }


void MainWindow::on_ecsport_clicked()
{
    QString Ecsurl = QFileDialog::getSaveFileName(this, "title", "text", "Text Files(*.txt)");
    QFile fileecs(Ecsurl);
    if (!fileecs.open(QIODevice::ReadWrite | QIODevice::Text))
     return;
     qDebug() << Ecsurl;

     QPixmap img(QString ipath);
     ui->label->setText(ipath);
     QImageReader reader(ipath);
     QSize sizeOfImage = reader.size();
     int height = sizeOfImage.height();
     int width = sizeOfImage.width();

    QImage imgG(ipath);
     for(int y=0; y< height; y++)
     {
         qDebug() << y << Qt::endl;
         for(int x=0; x<width; x++)
         {
             QRgb pixColor  = imgG.pixel(x,y);
                int R = qRed(pixColor);
                int G = qGreen(pixColor);
                int B = qBlue(pixColor);

     float br =(0.375 * R + 0.5 * G + 0.16 * B);
     int pos = (br/255) * 11;

     QTextStream out(&fileecs);
     out << mass[pos];
     };
         QTextStream out(&fileecs);
         out << Qt::endl;
     };
     qDebug() << "end" << Qt::endl;
     ui->finish->setText("Success");
}

void MainWindow::on_pushButton_2_clicked()
{
    QString alphabet=ui->lineEdit->text();
    std::string alpabett = alphabet.toStdString();
    for (int i = 0; i < 13; i++) {
            mass[i] = alpabett[i];
        }
    qDebug() << alphabet ;
}


void MainWindow::on_pushButton_clicked()
{
    std::string s = "";
    char masss[13] = "@#S%?*+;;,..";
    for(int i=0; i<13; i++){
        s = s + masss[i];
    };
    QString ss = QString::fromStdString(s);
    ui->lineEdit->setText(ss);
}

