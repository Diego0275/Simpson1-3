#pragma once

#include <iostream>
#include <Intervalo.hpp>
#include <Function.hpp>

using namespace std;

class Simpson : public Function
{
private:
    int i, j;
    double sum;

public:
    Simpson()
    {
        sum = 0;
    }

    ~Simpson() {}

    double reslutadoSimpson(int n)
    {
        for (i = 1; i <= n / 2; i++)
        {
            for (j = 0; j < resultados.size(); j++)
            {
                sum += resultados[2 * i - 2] + (4 * resultados[2 * i - 1]) + resultados[2 * i];
            }
        }

        return sum * (h / 3);
    }
};