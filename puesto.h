#include <iostream>
using namespace std;

class Puesto
{
private:
    string nombre;
public:
    Puesto(/* args */);
    ~Puesto();

    string getNombre();
    void setNombre(string);
};