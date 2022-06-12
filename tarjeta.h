#include "cuenta.h"
#include "cuenta.cpp"

#ifndef _TARJETA_
#define _TARJETA_
class Tarjeta
{
private:
    Cuenta cuenta;
    string numero_tarjeta;
    float limite_de_compra;
    float compras_del_mes;
    string tipo;

public:
    Tarjeta(Cuenta);
    ~Tarjeta();

    Cuenta getCuenta();
    void setCuenta(Cuenta);

    string getNumeroTarjeta();
    void setNumeroTarjeta(string);

    float getLimiteDeCompra();
    void setLimiteDeCompra(float);

    float getComprasDelMes();
    void setComprasDelMes(float);

    bool compra(float);

};
#endif