#include <QApplication>
#include <QObject.h>
#include "QtMain.h"

int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  QApplication::addLibraryPath(qApp->applicationDirPath() + "/plugins");  
  QtMain d;
  return d.exec();
}