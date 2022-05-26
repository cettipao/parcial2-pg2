#ifndef _EMPLEADO_
#define _EMPLEADO_


#include<iostream>
using namespace std;

class Empleado
{
protected:
    string nombre;
    int numero;
    float salario;
public:
    Empleado(/* args */);
    virtual ~Empleado();

    string getNombre();
    void setNombre(string);

    int getNumero();
    void setNumero(int);

    float getSalario();
    void setSalario(float);
};

#endif