#pragma once

#include <iostream>
#include <Intervalo.hpp>
#include <Function.hpp>
#include <tinyexpr.h>

using namespace std;

class Simpson : public Function
{
private:

public:
    Simpson() {}

    ~Simpson() {}

    

    // void evaluarFuncion()
    // {
    //     for (int i = 0; i < xL.size(); i++)
    //     {
    //         x=xL[i];
    //         //Evaluar la funcion
    //         const double resultado = te_eval(expr);
    //         cout << "x "<< x << "r" <<resultado << endl;

    //         resultados.push_back(resultado);
    //         te_free(expr);
    //     }
    // }
};