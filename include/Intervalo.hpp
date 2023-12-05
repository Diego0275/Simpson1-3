#pragma once

#include<iostream>

using namespace std;

class Intervalo
{
private:
    int i, y;
    double h;
public:
    Intervalo() {
        y=0;
        h=0;
    }

    ~Intervalo() {}

    void calcularX(float a, float b)
    {
        h = (b - a) / 2;
        y = (b - a) / h;
        double x[y];
        x[0] = a;
        for (i = 1; i <= y; i++)
        {
            x[i] = a + h * i;
        }
    }

    void imprimirX()
    {
        double x[y];
        for (i = 0; i <= y; i++)
        {
            cout << "X" << i << " = " << x[i] << endl;
        }
    }
};