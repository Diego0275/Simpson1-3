#include <iostream>
#include <MenuInicio.hpp>
#include <Function.hpp>
#include <Intervalo.hpp>
#include <Simpson.hpp>
#include <cmath>
#include <iomanip>
#include <cstdlib>

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

    system("cls");
    do
    {
        menu.mostrarMenu();
        opc = menu.leerOpcion();

        switch (opc)
        {
        case 1:
            cout << "-----INGRESAR FIX-----" << endl;
            cout << "Ingresa el valor de fix con el que deseas obtener el resultado: ";
            cin >> fix;
            system("cls");
            break;
        case 2:
            cout << "-----METODO SIMPSON-----" << endl;
            funcion.leerFuncion();
            cout << "Ingresa el limite superior: ";
            cin >> b;
            cout << "Ingresa el limite inferior: ";
            cin >> a;
            cout << "Ingresa la longitud del intervalo(Tiene que ser numero par): ";
            cin >> n;
            intervalo.VIntervalo(a, b, n);
            intervalo.calcularX(a, b);
            funcion.evaluarFuncion(a, b);
            intervalo.imprimirX();
            funcion.imprimirResultados();
            cout << "El resultado es: " << fixed << setprecision(fix) << simp.reslutadoSimpson(n) << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "Gracias por usar el programa." << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "Opcion invalida, por favor ingresa un dato que sea correcto" << endl;
            system("cls");
            break;
        }
    } while (opc != 3);

    return 0;
}