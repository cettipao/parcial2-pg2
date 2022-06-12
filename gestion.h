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

Gestion::Gestion()
{
}

Gestion::~Gestion()
{
}

string Gestion::ask_for_name()
{
    string nombre;
    while (1)
    {
        cin >> nombre;
        if (nombre.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") ==
            std::string::npos)
        {
            return nombre;
        }
        cout << "Por favor ingrese un nombre sin numeros ni caracteres especiales: ";
    }
}

string Gestion::ask_for_dni()
{
    string dni;
    while (1)
    {
        cin >> dni;

        try
        {
            stoi(dni);
            if (dni.size() < 9 && dni.size() > 6)
            {
                return dni;
            }
            else{
                cout << "Por favor ingrese un dni valido: ";
            }
        }
        catch (const std::invalid_argument &e)
        {
            cout << "Por favor ingrese un dni valido: ";
        }
    }
}

template <class TParam>
TParam is_type(TParam & num) 
{ 
  while (!cin)
    {
        cout << "Por favor ingrese un numero: ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> num;
    }
    return num;
}


int Gestion::ask_for_int()
{
    int num;
    cin >> num;
    is_type(num);
    return num;
}

float Gestion::ask_for_float()
{
    float num;
    cin >> num;
    is_type(num);
    return num;
}

void Gestion::iniciar()
{
    Administrativo admin1("Admin1", "1", "admin1@gmail.com", "puesto");
    personas.push_back(admin1);
    Profesional pro1("pro1", "44111000", "pro1@gmail.com", "Ingeniero", "Gestion", "05/06/2017");
    personas.push_back(pro1);
    Cuenta cuenta1(admin1, 100000, 80000);
    Cuenta cuenta2(pro1, 100000, 80000);
    Tarjeta tarjeta1(cuenta2);
    cuentas.push_back(cuenta1);
    cuentas.push_back(cuenta2);
    tarjetas.push_back(tarjeta1);
    int opcion = 0;
    do
    {
        // system("clear");
        cout << "Funciones disponibles" << endl;
        cout << "1) Listar Clientes" << endl;
        cout << "2) Crear Profesional" << endl;
        cout << "3) Crear Administrativo" << endl;
        cout << "4) Dar cliente de alta/baja" << endl;
        cout << "5) Generar un ingreso" << endl;
        cout << "6) Generar un egreso" << endl;
        cout << "7) Salir" << endl;
        cout << "Ingrese opcion a ejecutar: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            for (size_t i = 0; i < personas.size(); i++)
            {
                cout << i + 1 << ". " << personas[i].getNombre() << " (" << personas[i].getDni() << ")" << endl;
            }

            break;
        }
        case 2:
        {
            cout << "Crear Profesional" << endl;
            cout << "Ingrese Nombre: " << endl;
            string nombre;
            nombre = ask_for_name();
            cout << "Ingrese dni: " << endl;
            string dni;
            dni = ask_for_dni();
            cout << "Ingrese Mail: " << endl;
            string mail;
            cin >> mail;
            cout << "Ingrese saldo inicial: " << endl;
            float saldo;
            saldo = ask_for_float();
            cout << "Ingrese sueldo inicial: " << endl;
            float sueldo;
            sueldo = ask_for_float();
            cout << "Ingrese Titulo del Profesional: " << endl;
            string titulo;
            cin >> titulo;
            cout << "Ingrese Actividad del Profesional: " << endl;
            string actividad;
            cin >> actividad;
            cout << "Ingrese fecha de inicio: (Formato dd/mm/yyyy)" << endl;
            string fecha;
            cin >> fecha;

            Profesional pro(nombre, dni, mail, titulo, actividad, fecha);
            Cuenta cuenta(pro, sueldo, saldo);
            Tarjeta tarjeta(cuenta);
            personas.push_back(pro);
            cuentas.push_back(cuenta);
            tarjetas.push_back(tarjeta);
            break;
        }
        case 3:
        {
            cout << "Crear Administrativo" << endl;
            cout << "Ingrese Nombre: " << endl;
            string nombre;
            cin >> nombre;
            cout << "Ingrese dni: " << endl;
            string dni;
            dni = ask_for_dni();
            cout << "Ingrese Mail: " << endl;
            string mail;
            cin >> mail;
            cout << "Ingrese saldo inicial: " << endl;
            float saldo;
            saldo = ask_for_float();
            cout << "Ingrese sueldo inicial: " << endl;
            float sueldo;
            sueldo = ask_for_float();
            cout << "Ingrese Puesto del Administrativo: " << endl;
            string puesto;
            cin >> puesto;

            Administrativo admin(nombre, dni, mail, puesto);
            Cuenta cuenta(admin, sueldo, saldo);
            personas.push_back(admin);
            cuentas.push_back(cuenta);
            break;
        }
        case 4:
        {
            cout << "Ingrese DNI del cliente: ";
            string dni;
            int num_cliente;
            bool not_null = 1;
            dni = ask_for_dni();
            for (size_t i = 0; i < personas.size(); i++)
            {
                if (personas[i].getDni() == dni)
                {
                    num_cliente = i;
                    break;
                }
                if (i + 1 == personas.size())
                {
                    cout << " Cliente no encontrado" << endl;
                    not_null = 0;
                }
            }

            if (not_null)
            {
                if (personas[num_cliente].getAlta() == 1)
                {
                    cout << "El cliente " << personas[num_cliente].getNombre() << " esta de alta, ¿Quiere darlo de baja? (s/n)" << endl;
                    char confirmar;
                    do
                    {
                        cin >> confirmar;
                        if (confirmar == 's')
                        {
                            personas[num_cliente].setAlta(0);
                            cout << "Dado de baja con exito" << endl;
                            break;
                        }
                        else if (confirmar == 'n')
                        {
                            cout << "Operacion cancelada" << endl;
                            break;
                        }
                        else
                        {
                            cout << "Seleccione una opcion valida (s/n): ";
                        }

                    } while (confirmar != 's' || confirmar != 'n');
                }
                else
                {
                    {
                        cout << "El cliente " << personas[num_cliente].getNombre() << " esta de baja, ¿Quiere darlo de alta? (s/n)" << endl;
                        char confirmar;
                        do
                        {
                            cin >> confirmar;
                            if (confirmar == 's')
                            {
                                personas[num_cliente].setAlta(1);
                                cout << "Dado de alta con exito" << endl;
                                break;
                            }
                            else if (confirmar == 'n')
                            {
                                cout << "Operacion cancelada" << endl;
                                break;
                            }
                            else
                            {
                                cout << "Seleccione una opcion valida (s/n): ";
                            }

                        } while (confirmar != 's' || confirmar != 'n');
                    }
                }
            }
            break;
        }
        case 5:
        {
            cout << "Ingrese DNI del cliente: ";
            string dni;
            int num_cliente;
            bool not_null;
            not_null = 1;
            dni = ask_for_dni();
            for (size_t i = 0; i < personas.size(); i++)
            {
                if (personas[i].getDni() == dni)
                {
                    num_cliente = i;
                    break;
                }
                if (i + 1 == personas.size())
                {
                    cout << " Cliente no encontrado" << endl;
                    not_null = 0;
                }
            }

            if (not_null)
            {
                cout << "Ingrese monto a sumar: ";
                float monto;
                cin >> monto;
                for (size_t i = 0; i < cuentas.size(); i++)
                {
                    //SOBRECARGA DE OPERADOR == PERSONA
                    if (cuentas[i].getPersona() == personas[num_cliente])
                    {
                        cuentas[i].ingreso(monto);
                        cout << "Ingreso realizado con exito!" << endl;
                        cout << "Saldo actual: " << cuentas[i].getSaldo() << endl;
                    }
                }
            }
        }
        case 6:
        {
            cout << "Ingrese DNI del cliente: ";
            string dni;
            int num_cliente;
            bool not_null;
            not_null = 1;
            dni = ask_for_dni();
            for (size_t i = 0; i < personas.size(); i++)
            {
                if (personas[i].getDni() == dni)
                {
                    num_cliente = i;
                    break;
                }
                if (i + 1 == personas.size())
                {
                    cout << " Cliente no encontrado" << endl;
                    not_null = 0;
                }
            }

            if (not_null)
            {
                cout << "Ingrese monto a restar: ";
                float monto;
                cin >> monto;
                for (size_t i = 0; i < cuentas.size(); i++)
                {
                    //SOBRECARGA DE OPERADOR == PERSONA
                    if (cuentas[i].getPersona() == personas[num_cliente])
                    {
                        //Verifico si tiene tarjeta para ver su limite de compra
                        for (size_t j = 0; j < tarjetas.size(); j++)
                        {
                            if (tarjetas[j].getCuenta().getPersona() == personas[num_cliente])
                            {
                                if (!tarjetas[j].compra(monto))
                                {
                                    cout << "Con el monto de esta compra se excede el limite de la tarjeta" << endl;
                                    break;
                                }
                            }
                        }

                        cuentas[i].egreso(monto);
                        cout << "Egreso realizado con exito!" << endl;
                        cout << "Saldo actual: " << cuentas[i].getSaldo() << endl;
                    }
                }
            }
        }
        case 7:
            break;
        default:
            cout << "Ingrese una opcion valida" << endl;
            break;
        }
        cout << endl;
    } while (opcion != 7);
}
