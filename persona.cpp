#include "persona.h"

int Persona::getDni(){
    return dni;
}

void Persona::setDni(int d){
    dni = d;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(string n){
    nombre = n;
}

string Persona::getMail(){
    return mail;
}

void Persona::setMail(string m){
    mail = m;
}

bool Persona::getAlta(){
    return alta;
}

void Persona::setAlta(bool a){
    alta = a;
}