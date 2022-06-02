#include "tarjeta.h"

Tarjeta::Tarjeta(/* args */)
{
}

Tarjeta::~Tarjeta()
{
}

Profesional Tarjeta::getProfesional()
{
    return profesional;
}

void Tarjeta::setProfesional(Profesional p)
{
    profesional = p;
}

int Tarjeta::getNumero()
{
    return numero;
}

void Tarjeta::setNumero(int n)
{
    numero = n;
}

float Tarjeta::getLimiteDeCompra()
{
    return limite_de_compra;
}

void Tarjeta::setLimiteDeCompra(float l)
{
    limite_de_compra = l;
}

Tipo Tarjeta::getTipo()
{
    return tipo;
}

void Tarjeta::setTipo(Tipo t)
{
    tipo = t;
}
