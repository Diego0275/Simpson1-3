#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Resultado
{
private:
    double sum;
    vector<double> xIntervalo;
    vector<double> resultados;
public:
    Resultado() {}
    ~Resultado() {}
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