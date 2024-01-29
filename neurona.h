#ifndef NEURONA_H
#define NEURONA_H
#include <iostream>
#include <fstream>
#endif // NEURONA_H
class Neurona {
    friend class administrar_objeto;
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
public:
    Neurona(int Id,float Voltaje,int posicionX,int posicionY,int Red,int Green, int Blue);
    void print ();


};
