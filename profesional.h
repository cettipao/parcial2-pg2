#include "persona.h"
#include "actividad.h"
#include <ctime>   
#include <iostream>
using namespace std;

class Profesional: virtual Persona
{
private:
    string titulo;
    Actividad actividad;
    time_t fecha_inicio;

public:
    Profesional(/* args */);
    ~Profesional();

    string getTitulo();
    void setTitulo(string);

    Actividad getActividad();
    void setActividad(Actividad);

    time_t getFechaInicio();
    void setFechaInicio(time_t);
};

