#pragma once

#include<iostream>

using namespace std;

class Simpson
{
private:
    int i;

public:
    // int *ptrX = new int x[0];
    double h;
    int a, b, y;

    Simpson() {
        
    }

    ~Simpson() {}

    void CalcularX()
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

    void ImprimirX()
    {
        double x[y];
        for (i = 0; i <= y; i++)
        {
            cout << "X" << i << " = " << x[i] << endl;
        }
    }

    double EvaluarFuncion()
    {
    }
};