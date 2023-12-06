#pragma once

#include <tinyexpr.h>
#include <iostream>
#include <Intervalo.hpp>
#include <vector>
#include <string>

using namespace std;

class Function : public Intervalo
{
private:
    int err, i;
    string funcion;
    double xN, resultado, x;
    te_expr *expr;

protected:
    vector<double> resultados;

public:
    Function() {}
    ~Function() {}

    void leerFuncion()
    {
        // Almacenar el nombre de la variable y el puntero
        te_variable vars[] = {{"x", &x}};

        // Declaramos funcion con variables
        cout << "Ingresa tu formula: " << endl;
        cin >> funcion;
        expr = te_compile(funcion.c_str(), vars, 1, &err);
    }

    void evaluarFuncion()
    {
        if (expr)
        {
            for (i = 0; i < xL.size(); i++)
            {
                // Evaluar la funcion
                resultado = te_eval(expr);
                resultados.push_back(resultado);
            }
            te_free(expr);
        }
        else
        {
            cout << "Error en la formula ingresada en caracter " << err;
        }
    }

    void imprimirResultados()
    {
        cout << "VALOR DE LA FUNCIONES EVALUADAS" << endl;
        for (i = 0; i < resultados.size(); i++)
        {
            cout << "Funcion evaluada en X" << i << "=" << resultados[i] << endl;
        }
    }
};