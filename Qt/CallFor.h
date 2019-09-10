#pragma once

extern "C" {
  typedef void(*pCallBack_Sub_Progress_ptr)(int, int);
  int Fortran_Sub_Progress( int a , double * b , pCallBack_Sub_Progress_ptr callBack );
}