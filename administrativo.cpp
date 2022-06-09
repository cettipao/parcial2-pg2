#include "administrativo.h"

Administrativo::Administrativo(string n, int d, string m, string p)
{
    nombre = n;
    dni = d;
    mail = m;
    puesto = p;
    alta = 1;
}

Administrativo::~Administrativo()
{
}

string Administrativo::getPuesto(){
    return puesto;
}

void Administrativo::setPuesto(string p){
    puesto = p;
}