#include "neurona.h"
using namespace std;
Neurona::Neurona(int Id, float Voltaje, int posicionX, int posicionY, int Red, int Green, int Blue){
    id=Id;
    voltaje=Voltaje;
    posicion_x=posicionX;
    posicion_y=posicionY;
    red=Red;
    green=Green;
    blue=Blue;

}

void Neurona::print(){
    cout<<"id: "<<id<<"voltaje "<<voltaje<<"posicion X "<<posicion_x<<" posicion y"<< posicion_y<<" red "<<red<< " green "<<green<< " blue "<<blue<<endl;
}
