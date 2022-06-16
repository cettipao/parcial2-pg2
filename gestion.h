#include <iostream>
#include <vector>
#include "persona.h"
#include "persona.cpp"
#include "profesional.h"
#include "profesional.cpp"
#include "administrativo.h"
#include "administrativo.cpp"
#include "cuenta.h"
#include "cuenta.cpp"
#include "tarjeta.h"
#include "tarjeta.cpp"

using namespace std;

class Gestion
{
private:
    vector<Persona> personas;
    vector<Cuenta> cuentas;
    vector<Tarjeta> tarjetas;

public:
    Gestion();
    ~Gestion();

    void iniciar();
    void crearProfesional();
    void crearAdministrativo();
    void altas_bajas();
    void ingreso();
    void egreso();
    void listar();

    int get_num_cliente();
    string ask_for_name();
    string ask_for_dni();
    float ask_for_float();
    int ask_for_int();
};

