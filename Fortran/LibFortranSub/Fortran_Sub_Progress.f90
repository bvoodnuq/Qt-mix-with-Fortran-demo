Module Fortran_Sub_Progress_Mod
  use , intrinsic :: ISO_C_Binding
  Implicit None

  Interface
    Subroutine callBack_Sub_Progress( x , y ) Bind(C)
      integer , value :: x , y
    End Subroutine callBack_Sub_Progress
  End Interface
  
contains

  Integer Function Fortran_Sub_Progress(a,b,callBack) result( iResultCode ) Bind(C,Name="Fortran_Sub_Progress")
  !DEC$ ATTRIBUTES  DLLEXPORT :: Fortran_Sub_Progress
    use kernel32 , only : sleep
    integer( C_INT ) , value :: a
    Real( C_DOUBLE)          :: b
    type(C_FUNPTR)   , value :: callBack
    Procedure(callBack_Sub_Progress) , pointer :: pCallBack
    integer :: i , fU , k
    iResultCode = 0
    call c_f_procpointer( callBack , pCallBack )
    Open( NewUnit = fU , File="Qt-mix-Fortran.debug.txt" , ioStat = k )
    if( k/=0 ) return
    write( fU , * ) a , b
    Close( fU )
    Do i = 1 , 100
      call sleep(100)
      call pCallBack( i , 100 )
    End Do
    iResultCode = 1
  End Function 
  
End Module Fortran_Sub_Progress_Mod