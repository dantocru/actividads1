#ifndef ADMINISTRAR_OBJETO_H
#define ADMINISTRAR_OBJETO_H
#include<iostream>
#include<fstream>
#include <QList>
#include <list>
#include "neurona.h"
#endif // ADMINISTRAR_OBJETO_H
class Administrar_objeto{
private:
//    list <Neurona> mylist;
    QList <Neurona> mylist;
public:
    void agregar_inicio (Neurona &aux);
    void agregar_final (Neurona&  aux);
    void mostrar ();
};
