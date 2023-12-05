#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Funcion
{
private:
    vector<string> opciones;
    int opcionSeleccionada;
    int i;
public:
    Funcion() {
        opciones.push_back("2/(x^2-4)");
        opciones.push_back("sen(x)/x");
        opciones.push_back("raiz(x^3+4)");
        opciones.push_back("x^3/(1+raiz(x))");
        opciones.push_back("raiz(1+x^2)");
        opciones.push_back("(e^(raiz(x))*raiz(e^(raiz(x))-1))/raiz(x)");
        opciones.push_back("e^(x^2)");
        opciones.push_back("1/(1+x)");
        opciones.push_back("x^2+8*x-12");
        opciones.push_back("x^3*ln(x)");
        opciones.push_back("Regresar");
        opcionSeleccionada = 0;
    }

    ~Funcion() {}

    void mostrarFunciones()
    {
        cout << "--------------------MENU DE FUNCIONES--------------------" << endl;
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