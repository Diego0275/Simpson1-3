#pragma once

#include <iostream>
#include <Intervalo.hpp>
#include <Function.hpp>
#include <tinyexpr.h>

using namespace std;

class Simpson : public Function
{
private:
    double x;
    te_expr *expr;
    double sum;

public:
    Simpson() {}

    ~Simpson() {}

    double reslutadoSimpson(int n)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 0; j < resultados.size(); j++)
            {
                sum += resultados[2 * i - 2] + (4 * resultados[2 * i - 1]) + resultados[2 * i];
            }
        }

        return sum * (h / 3);
    }
};