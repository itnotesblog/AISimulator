#include "aisimulatorview.h"
#include <QApplication>

#include "easyrandomai.h"
#include "smartrandomai.h"

int main( int argc, char* argv[] ) {
    QApplication a( argc, argv );

    MainWidget w;
    w.registerAI( "EasyRandomAI", new EasyRandomAI );
    w.registerAI( "SmartRandomAI", new SmartRandomAI );
    w.show();

    return a.exec();
}
