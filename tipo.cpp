#include "tipo.h"

Tipo::Tipo(/* args */)
{
}

Tipo::~Tipo()
{
}

string Tipo::getNombre(){
    return nombre;
}

void Tipo::setNombre(string n){
    nombre = n;
}

float Tipo::getIngresosMinimos(){
    return ingresos_minimos;
}

void Tipo::setIngresosMinimos(float i){
    ingresos_minimos = i;
}