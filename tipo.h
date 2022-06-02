#include <iostream>
using namespace std;

class Tipo
{
private:
    string nombre;
    float ingresos_minimos;
public:
    Tipo(/* args */);
    ~Tipo();

    string getNombre();
    void setNombre(string);

    float getIngresosMinimos();
    void setIngresosMinimos(float);
};