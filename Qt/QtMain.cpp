#include <QMessageBox>
#include "QtMain.h"
#include "CallForThread.h"
#include "ui_QtMain.h"

QtMain::QtMain(QWidget *parent) : QDialog(parent){
  ui = new Ui::QtMain();
  ui->setupUi(this);
}

void QtMain::on_callBack(int x , int y) {
  ui->progressBar->setValue(x);
  ui->progressBar->setRange(0,y);
}

void QtMain::on_okBtn_clicked() {
  int a = ui->spinA->value();
  m_b   = ui->spinB->value();
  CallForThread *thread = new CallForThread( a , &m_b );
  QObject::connect( thread , SIGNAL(callBacked(int,int)) , this , SLOT(on_callBack(int,int)));
  QObject::connect( thread , SIGNAL(subFinished(int))    , this , SLOT(on_Thread_finished(int)) );
  QObject::connect( thread , SIGNAL(finished())        , thread , SLOT(deleteLater()));
  thread->start();
}

void QtMain::on_Thread_finished(int iResCode) {
  QMessageBox::information(this,"Fcode.cn","Thread finished , Result Code:"+QString::number(iResCode),QMessageBox::Ok);
}

QtMain::~QtMain(){
  delete ui;
}