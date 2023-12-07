#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Intervalo
{
private:
    int y;
    float *xI;

protected:
    double h;
    vector<double> xL;

public:
    Intervalo() {}

    ~Intervalo() {}

    void VIntervalo(float a, float b, int n)
    {
        h = (b - a) / n;
        y = (b - a) / h;
        xI = new float[y];
    }

    void calcularX(float a, float b)
    {
        for (int i = 0; i < y; i++)
        {
            xI[i] = (h * i) + a;
        }

        for (int i = 0; i < y; i++)
        {
            xL.push_back(xI[i]);
        }
    }

    void imprimirX()
    {
        cout << "VALOR DE X" << endl;
        for (int i = 0; i < xL.size(); i++)
        {
            cout << "X" << i + 1 << "=" << xL[i] << endl;
        }
    }
};