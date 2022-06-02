#include "cuenta.h"

Cuenta::Cuenta(/* args */)
{
}

Cuenta::~Cuenta()
{
}

int Cuenta::getNumero(){
    return numero;
}

void Cuenta::setNumero(int n){
    numero = n;
}

float Cuenta::getSueldo(){
    return sueldo;
}

void Cuenta::setSueldo(float s){
    sueldo = s;
}
