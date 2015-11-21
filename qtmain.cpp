#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include <QApplication>
#include "richelbilderbeekgallerymenudialog.h"
#include "qtrichelbilderbeekgallerymenudialog.h"
#include "trace.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  START_TRACE();
  //ribi::GalleryMenuDialog::Test();
  ribi::QtRichelBilderbeekGalleryMenuDialog w;
  w.show();
  return a.exec();
}

