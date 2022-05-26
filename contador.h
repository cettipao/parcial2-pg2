#include "empleado.h"
#include <iostream>
using namespace std;

class Contador: virtual Empleado
{
private:
    /* data */
public:
    Contador(/* args */);
    ~Contador();
};

Contador::Contador(/* args */)
{
}

Contador::~Contador()
{
}
