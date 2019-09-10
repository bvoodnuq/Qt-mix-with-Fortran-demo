#include "CallForThread.h"

CallForThread::CallForThread( int a, double *b, QObject *parent) : QThread(parent){
  m_a = a;
  m_b = b;
}

extern "C" {
  CallForThread *pThis;
  static void callBack(int x, int y) {
    emit pThis->callBacked(x,y);
  }
}

void CallForThread::run() {
  pThis = this;
  iResultCode = Fortran_Sub_Progress( m_a , m_b , &callBack );
  emit subFinished(iResultCode);
}

CallForThread::~CallForThread(){
}