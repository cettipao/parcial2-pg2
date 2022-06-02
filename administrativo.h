#include "persona.h"
#include "puesto.h"
#include <iostream>
using namespace std;

class Administrativo: virtual Persona
{
private:
    Puesto puesto;
public:
    Administrativo(/* args */);
    ~Administrativo();

    Puesto getPuesto();
    void setPuesto(Puesto);
};


