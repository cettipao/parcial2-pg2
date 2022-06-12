#include "tarjeta.h"
#include "cuenta.h"
#include "cuenta.cpp"


Tarjeta::Tarjeta(Cuenta c)
{
    cuenta = c;
    numero_tarjeta = "0000 0000 0000 0000";
    if (c.getSueldo() < 125000){
        tipo = "Bronce";
        limite_de_compra = 125000;
    }
    else if (c.getSueldo() >= 125000){
        tipo = "Plata";
        limite_de_compra = 250000;
    }
    else if (c.getSueldo() >= 250000){
        tipo = "Oro";
        limite_de_compra = 500000;
    }
}

Tarjeta::~Tarjeta()
{
}

Cuenta Tarjeta::getCuenta()
{
    return cuenta;
}

void Tarjeta::setCuenta(Cuenta c)
{
    cuenta = c;
}

string Tarjeta::getNumeroTarjeta()
{
    return numero_tarjeta;
}

void Tarjeta::setNumeroTarjeta(string n)
{
    numero_tarjeta = n;
}

float Tarjeta::getLimiteDeCompra()
{
    return limite_de_compra;
}

void Tarjeta::setLimiteDeCompra(float l)
{
    limite_de_compra = l;
}

bool Tarjeta::compra(float monto){
    if (compras_del_mes+monto >= limite_de_compra){
        return false;
    }
    else{
        compras_del_mes+=monto;
        return true;
    }
}