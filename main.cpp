#include "aisimulatorview.h"
#include <QApplication>

#include "easyrandomai.h"

int main( int argc, char* argv[] ) {
    QApplication a( argc, argv );

    MainWidget w;
    w.registerAI( "EasyRandomAI", new EasyRandomAI );
    w.show();

    return a.exec();
}
