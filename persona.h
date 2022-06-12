#ifndef _PERSONA_
#define _PERSONA_

#include <iostream>
using namespace std;

class Persona
{
protected:
    string dni;
    string nombre;
    string mail;
    bool alta;

public:

    string getDni();
    void setDni(string);

    string getNombre();
    void setNombre(string);

    string getMail();
    void setMail(string);

    bool getAlta();
    void setAlta(bool);

    bool operator==(Persona);

    virtual string listar_atributos_principales(){return "";};
};

#endif