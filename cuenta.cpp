#include "cuenta.h"

#ifndef _CUENTACPP_
#define _CUENTACPP_

Cuenta::Cuenta(Persona p, float su, float sa)
{
    persona = p;
    sueldo = su;
    saldo = sa;
}

Cuenta::Cuenta()
{
}

Cuenta::~Cuenta()
{
}


float Cuenta::getSueldo(){
    return sueldo;
}

void Cuenta::setSueldo(float s){
    sueldo = s;
}

float Cuenta::getSaldo(){
    return saldo;
}

void Cuenta::setSaldo(float s){
    saldo = s;
}

Persona Cuenta::getPersona(){
    return persona;
}

void Cuenta::setPersona(Persona p){
    persona = p;
}

void Cuenta::ingreso(float c){
    saldo += c;
}

void Cuenta::egreso(float c){
    saldo -= c;
}

#endif