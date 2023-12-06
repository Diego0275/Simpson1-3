#pragma once

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Intervalo
{
private:
    int i, y;
    int *xI;

protected:
    double h;
    vector<double> xL;

public:
    Intervalo(){}
    
    Intervalo(float a, float b)
    {
        h = (b - a) / 2;
        y = (b - a) / h;
        xI = new int[y];
    }

    ~Intervalo()
    {
    }

    void calcularX(float a, float b)
    {
        for (int i = 0; i < y; i++)
        {
            xI[i] = a + h * i;
        }

        for (int i = 0; i < y; i++)
        {
            xL.push_back(xI[i]);
        }
    }

    void imprimirX()
    {
        cout << "VALOR DE X" << endl;
        for (i = 0; i < xL.size(); i++)
        {
            cout << "X" << i + 1 << "=" << xL[i] << endl;
        }
    }
};