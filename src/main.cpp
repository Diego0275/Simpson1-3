#include <iostream>
#include <MenuInicio.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    float a, b;
    int opc, fix, n;
    MenuInicio menu;

    do
    {
        menu.mostrarMenu();
        opc = menu.leerOpcion();

        switch (opc)
        {
        case 1:
            cout << "-----HISTORIAL-----" << endl;
            // if ()
            // {
            // }
            // else
            // {
            // }

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