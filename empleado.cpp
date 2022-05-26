#include "empleado.h"

Empleado::Empleado(/* args */)
{
}

Empleado::~Empleado()
{
}

string Empleado::getNombre(){
    return nombre;
}

void Empleado::setNombre(string n){
    nombre = n;
}

int Empleado::getNumero(){
    return numero;
}

void Empleado::setNumero(int n){
    numero = n;
}

float Empleado::getSalario(){
    return salario;
}

void Empleado::setSalario(float s){
    salario = s;
}