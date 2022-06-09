#ifndef _PROFESIONAL_
#define _PROFESIONAL_


#include "persona.h"
//#include "actividad.h"
#include <ctime>   
#include <iostream>
using namespace std;

class Profesional: public Persona
{
private:
    string titulo;
    string actividad;
    string fecha_inicio;

public:
    Profesional(string, int, string, string, string, string);
    ~Profesional();

    string getTitulo();
    void setTitulo(string);

    string getActividad();
    void setActividad(string);

    string getFechaInicio();
    void setFechaInicio(string);
};

#endif