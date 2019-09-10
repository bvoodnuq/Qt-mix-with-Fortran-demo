#pragma once

#include <QDialog>
namespace Ui { class QtMain; };

class QtMain : public QDialog{
  Q_OBJECT

private slots:
  void on_Thread_finished(int);
  void on_okBtn_clicked();
  void on_callBack(int x, int y);

public:
  QtMain(QWidget *parent = Q_NULLPTR);
  ~QtMain();

private:
  Ui::QtMain *ui;
  double m_b;
};
