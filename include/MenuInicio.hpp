#pragma once

#include <iostream>
#include <vector>

using namespace std;

class MenuInicio
{
private:
    vector<string> opciones;
    int opcionSeleccionada;
    int i;

public:
    ~MenuInicio() {}

    MenuInicio()
    {
        opciones.push_back("Mostrar historial");
        opciones.push_back("Ingresar Fix");
        opciones.push_back("Iniciar");
        opciones.push_back("Salir");
        opcionSeleccionada = 0;
    }

    void mostrarMenu()
    {
        cout << "--------------------MENU DE INICIO--------------------" << endl;
        for (i = 0; i < opciones.size(); i++)
        {
            cout << i + 1 << ". " << opciones[i] << endl;
        }
    }

    int leerOpcion()
    {
        cout << "Ingrese la opción deseada: ";
        cin >> opcionSeleccionada;
        return opcionSeleccionada - 1;
    }
};