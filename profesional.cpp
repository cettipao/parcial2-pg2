#include "profesional.h"

Profesional::Profesional(/* args */)
{
}

Profesional::~Profesional()
{
}

string Profesional::getTitulo()
{
    return titulo;
}

void Profesional::setTitulo(string titulo)
{
    titulo = titulo;
}

Actividad Profesional::getActividad()
{
    return actividad;
}

void Profesional::setActividad(Actividad actividad)
{
    actividad = actividad;
}

time_t Profesional::getFechaInicio()
{
    return fecha_inicio;
}

void Profesional::setFechaInicio(time_t fecha_inicio)
{
    fecha_inicio = fecha_inicio;
}