#include <QCoreApplication>
//#include "neurona.h"
#include "administrar_objeto.h"
#include <iostream>
using namespace  std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Neurona aux(216097349,89,5,6,1,0,2);
    Administrar_objeto cerebro;
    cerebro.agregar_final(aux);
    cerebro.mostrar();
    return a.exec();
}
