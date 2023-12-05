#include <iostream>
#include <MenuInicio.hpp>
#include <Funcion.hpp>
#include <Intervalo.hpp>
#include <Simpson.hpp>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b;
    int opc, fix, n;
    MenuInicio menu;
    int opcf;
    double f;
    Funcion funcion;
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
            do
            {
                funcion.mostrarFunciones();
                opcf = funcion.leerOpcion();

                switch (opcf)
                {
                case 1:
                    //f=2/(pow(x, 2)-4);
                    break;
                case 2:
                    //f=sin(x)/x;
                    break;
                case 3:
                    //f=sqrt(pow(x, 3)+4);
                    break;
                case 4:
                    //f=pow(x, 3)/(1+sqrt(x));
                    break;
                case 5:
                    //f=sqrt(1+pow(x, 2));
                    break;
                case 6:
                    //f=(exp(sqrt(x))*sqrt(exp(sqrt(x))-1))/sqrt(x);
                    break;
                case 7:
                    //f=exp(pow(x, 2));
                    break;
                case 8:
                    //f=1/(1+x);
                    break;
                case 9:
                    //f=pow(x, 2)+8*x-12;
                    break;
                case 10:
                    //f=pow(x, 3)*log(x);
                    break;
                default:
                    break;
                }
            } while (opcf!=11);
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
            cout << "El resultado es: " << fixed << setprecision(fix) << simp.evaluarFuncion() << endl;
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