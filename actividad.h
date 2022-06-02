#include <iostream>
using namespace std;

class Actividad
{
private:
    string nombre;
public:
    Actividad(/* args */);
    ~Actividad();

    string getNombre();
    void setNombre(string);
};