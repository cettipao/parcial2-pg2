#ifndef _ADMINISTRATIVO_
#define _ADMINISTRATIVO_

#include "persona.h"
#include "puesto.h"
#include <iostream>
using namespace std;

class Administrativo: public Persona
{
private:
    string puesto;
public:
    Administrativo(string, int, string, string);
    ~Administrativo();

    string getPuesto();
    void setPuesto(string);
};

#endif