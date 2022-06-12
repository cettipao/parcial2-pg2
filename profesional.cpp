#include "profesional.h"

Profesional::Profesional(string n, string d, string m, string t, string a, string f)
{
    nombre = n;
    dni = d;
    mail = m;
    titulo = t;
    actividad = a;
    fecha_inicio = f;
    alta = 1;
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

string Profesional::getActividad()
{
    return actividad;
}

void Profesional::setActividad(string actividad)
{
    actividad = actividad;
}

string Profesional::getFechaInicio()
{
    return fecha_inicio;
}

void Profesional::setFechaInicio(string fecha_inicio)
{
    fecha_inicio = fecha_inicio;
}

string Profesional::listar_atributos_principales(){
    return nombre + " (" + dni + ")" + "[Profesional]";
}