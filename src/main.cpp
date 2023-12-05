#include <iostream>
#include <MenuInicio.hpp>
#include <Function.hpp>
#include <Intervalo.hpp>
#include <Simpson.hpp>
#include <cmath>
#include <iomanip>
#include <string>
#include <tinyexpr.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b;
    int opc, fix, n;
    MenuInicio menu;
    int opcf;
    double f;
    Function funcion;
    Intervalo intervalo;
    Simpson simp;

    do
    {
        menu.mostrarMenu();
        opc = menu.leerOpcion();

        switch (opc)
        {
        case 1:
            cout << "-----SELECCION DE FUNCION-----" << endl;
            funcion.leerFuncion();
            funcion.evaluarFuncion();
            funcion.imprimirResultados();
            break;
        case 2:
            cout << "-----INGRESAR FIX-----" << endl;
            cout << "Ingresa el valor de fix con el que deseas obtener el resultado: ";
            cin >> fix;
            break;
        case 3:
            cout << "-----METODO SIMPSON-----" << endl;
            cout << "Ingresa el limite superior: ";
            cin >> b;
            cout << "Ingresa el limite inferior: ";
            cin >> a;
            cout << "Ingresa la longitud del intervalo(Tiene que ser numero par): ";
            cin >> n;
            break;
            intervalo.calcularX(a, b);
            intervalo.imprimirX();
            cout << "El resultado es: " << fixed << setprecision(fix) << simp.reslutadoSimpson(n) << endl;
        case 4:
            cout << "Gracias por usar el programa." << endl;
            break;
        default:
            cout << "Opcion invalida, por favor ingresa un dato que sea correcto" << endl;
            break;
        }
    } while (opc != 4);

    return 0;
}