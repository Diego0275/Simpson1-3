#pragma once

#include <tinyexpr.h>
#include <iostream>
#include <Intervalo.hpp>
#include <vector>
#include <string>

using namespace std;

class Function
{
private:
    int err, i;
    string funcion;
    double xN, x;
    te_expr *expr;
    Intervalo inter;
    vector<double> *xL;

protected:
    vector<double> resultados;

public:
    Function(vector<double> *intervalos) {
        this->xL = intervalos;
    }
    
    ~Function() {}


    void leerFuncion()
    {
        // Almacenar el nombre de la variable y el puntero
        te_variable vars[] = {"x", &x};

        // Declaramos funcion con variables
        cout << "Ingresa tu formula: " << endl;
        cin >> funcion;
        expr = te_compile(funcion.c_str(), vars, 1, &err);
        if (!expr)
        {
            cout << "Error en la formula ingresada en caracter " << err << endl;
        }

    }

    void prueba(){
        cout << xL.size() << endl;
    }

    void evaluarFuncion(float a, float b)
    {
        //cout << "X" << i + 1 << "=" << xL[i] << endl;
        // if (expr)
        // {
            for (i = 0; i < xL.size(); i++)
            {
                x=xL[i];
                //Evaluar la funcion
                const double resultado = te_eval(expr);
                cout << "x "<< x << "r" <<resultado << endl;

                resultados.push_back(resultado);
                te_free(expr);
            }
        // }
        // else
        // {
        //     cout << "Error en la formula ingresada en caracter " << err;
        // }

        // for(i = 0; i < xL.size(); i++){
        //     x=xL[i];
        //     resultado = te_eval(expr);
        //     resultados.push_back(resultado);
        // }
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