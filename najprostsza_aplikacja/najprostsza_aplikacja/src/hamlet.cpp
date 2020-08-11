#include <QApplication>
#include <QMessageBox>


int main( int argc, char * argv[] ) 
{
  QApplication app(argc,argv);

  QMessageBox::question(nullptr,"Wazne pytanie","Byc  albo  nie  byc ?",
                        QMessageBox::Yes,
                        QMessageBox::No);
  return 0;
}
