#include <iostream>
using namespace std;

class Gestion
{

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
};

Gestion::Gestion()
{
}

Gestion::~Gestion()
{
}

void Gestion::iniciar(){
    cout << "Funciones disponibles" << endl;
    cout << "1) Listar Clientes" << endl;
    cout << "2) Crear Profesional" << endl;
    cout << "3) Crear Administrativo" << endl;
    cout << "4) Dar cliente de alta/baja" << endl;
    cout << "5) Generar un ingreso" << endl;
    cout << "6) Generar un egreso" << endl;
    cout << "Ingrese opcion a ejecutar: ";
    int opcion;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }

    
}

