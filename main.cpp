#include "aisimulatorview.h"
#include <QApplication>

#include "easyrandomai.h"
#include "smartrandomai.h"
#include "singlememrandomai.h"

int main( int argc, char* argv[] ) {
    QApplication a( argc, argv );

    MainWidget w;
    w.registerAI( "EasyRandomAI", new EasyRandomAI );
    w.registerAI( "SmartRandomAI", new SmartRandomAI );
    w.registerAI( "SingleMemRandomAI", new SingleMemRandomAI );
    w.show();

    return a.exec();
}
