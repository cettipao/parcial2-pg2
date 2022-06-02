#include "profesional.h"
#include "tipo.h"

class Tarjeta
{
private:
    Profesional profesional;
    int numero;
    float limite_de_compra;
    Tipo tipo;

public:
    Tarjeta(/* args */);
    ~Tarjeta();

    Profesional getProfesional();
    void setProfesional(Profesional);

    int getNumero();
    void setNumero(int);

    float getLimiteDeCompra();
    void setLimiteDeCompra(float);

    Tipo getTipo();
    void setTipo(Tipo);

};