#include <tinyexpr.h>
#include <iostream>
#include <string>
#include <Intervalo.hpp>

int main(int argc, char const *argv[])
{
    double x, y;
    /* Store variable names and pointers. */
    te_variable vars[] = {{"x", &x}, {"y", &y}};

    int err;
    /* Compile the expression with variables. */
    std::cout<<"Ingresa tu formula"<<std::endl;
    std::string funcion;
    std::cin >> funcion;
    te_expr *expr = te_compile(funcion.c_str(), vars, 2, &err);

    if (expr)
    {
        std::cout << "Ingresa valor de x:" << std::endl;
        std::cin >> x;
        std::cout << "Ingresa valor de y:" << std::endl;
        std::cin >> y;

        // Evaluar la funcion
        const double result = te_eval(expr);

        std::cout << "El resultado es:" << result <<std::endl;

        te_free(expr);
    }
    else
    {
        std::cout << "Error en la formula ingresada en caracter " << err;
    }
    return 0;
}
