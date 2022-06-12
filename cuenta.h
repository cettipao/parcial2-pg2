#include "persona.h"
#ifndef _CUENTA_
#define _CUENTA_

class Cuenta
{
private:
    Persona persona;
    float sueldo;
    float saldo;
public:
    Cuenta();
    Cuenta(Persona, float, float);
    ~Cuenta();

    Persona getPersona();
    void setPersona(Persona);

    float getSaldo();
    void setSaldo(float);

    float getSueldo();
    void setSueldo(float);

    void ingreso(float);
    void egreso(float);
};
#endif
