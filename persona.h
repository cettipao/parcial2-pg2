#ifndef _PERSONA_
#define _PERSONA_


#include<iostream>
using namespace std;

class Persona
{
protected:
    int dni;
    string nombre;
    string mail;
    bool alta;

public:

    int getDni();
    void setDni(int);

    string getNombre();
    void setNombre(string);

    string getMail();
    void setMail(string);

    bool getAlta();
    void setAlta(bool);
};

#endif