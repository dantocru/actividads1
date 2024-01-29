#include "administrar_objeto.h"
void Administrar_objeto::agregar_final(Neurona &aux){
    mylist.insert(mylist.end(),aux);
}
void Administrar_objeto::agregar_inicio(Neurona &aux){
    mylist.insert(mylist.begin(),aux);
}
void Administrar_objeto::mostrar(){
    QList<Neurona>::iterator it;
    for (it=mylist.begin(); it!= mylist.end();it++){
        it->print();   }
}
