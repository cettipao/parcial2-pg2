#include <iostream>
#include <vector>
#include "persona.h"
#include "persona.cpp"
#include "profesional.h"
#include "profesional.cpp"
#include "administrativo.h"
#include "administrativo.cpp"

using namespace std;

class Gestion
{
private:
    // vector<Administrativo> administrativos;
    // vector<Profesional> profesionales;
    vector<Persona> personas;

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

void Gestion::iniciar()
{
    personas.push_back(Administrativo("Admin1", 1, "admin1@gmail.com", "puesto"));
    personas[0].setAlta(0);
    personas.push_back(Administrativo("Admin2", 2, "admin2@gmail.com", "puesto"));
    personas.push_back(Administrativo("Admin3", 44000113, "admin3@gmail.com", "puesto"));
    personas.push_back(Administrativo("Admin3", 44000113, "admin3@gmail.com", "puesto"));
    personas.push_back(Administrativo("Admin3", 44000113, "admin3@gmail.com", "puesto"));
    personas.push_back(Profesional("pro1", 44111000, "pro1@gmail.com", "Ingeniero", "Gestion", "05/06/2017"));
    personas.push_back(Profesional("pro2", 44111001, "pro2@gmail.com", "Ingeniero", "Gestion", "05/06/2017"));
    personas.push_back(Profesional("pro3", 44111002, "pro3@gmail.com", "Ingeniero", "Gestion", "05/06/2017"));
    personas.push_back(Profesional("pro3", 44111002, "pro3@gmail.com", "Ingeniero", "Gestion", "05/06/2017"));
    personas.push_back(Profesional("pro3", 44111002, "pro3@gmail.com", "Ingeniero", "Gestion", "05/06/2017"));

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
            for (int i = 0; i < personas.size(); i++)
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
            cin >> nombre;
            cout << "Ingrese dni: " << endl;
            int dni;
            cin >> dni;
            cout << "Ingrese Mail: " << endl;
            string mail;
            cin >> mail;
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
            personas.push_back(pro);
            break;
        }
        case 3:
        {
            cout << "Crear Administrativo" << endl;
            cout << "Ingrese Nombre: " << endl;
            string nombre;
            cin >> nombre;
            cout << "Ingrese dni: " << endl;
            int dni;
            cin >> dni;
            cout << "Ingrese Mail: " << endl;
            string mail;
            cin >> mail;
            cout << "Ingrese Puesto del Administrativo: " << endl;
            string puesto;
            cin >> puesto;

            Administrativo admin(nombre, dni, mail, puesto);
            personas.push_back(admin);
            break;
        }
        case 4:
        {
            cout << "Ingrese DNI del cliente: ";
            int dni;
            int num_cliente;
            bool not_null = 1;
            cin >> dni;
            for (int i = 0; i < personas.size(); i++)
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
        case 7:
            break;
        default:
            cout << "Ingrese una opcion valida" << endl;
            break;
        }
    } while (opcion != 7);
}
