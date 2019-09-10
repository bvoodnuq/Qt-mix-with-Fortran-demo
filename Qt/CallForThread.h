#pragma once

#include <QThread>
#include "CallFor.h"

class CallForThread : public QThread{
  Q_OBJECT

public:
  int iResultCode;

signals:
  void subFinished(int);
  void callBacked(int, int);

private:
  int     m_a;
  double *m_b;
  pCallBack_Sub_Progress_ptr m_callBack;

protected:
  void run();

public:
  CallForThread( int , double * , QObject *parent = 0 );
  ~CallForThread();
};
