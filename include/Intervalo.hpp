#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Intervalo
{
private:
    int i, y;
    float *xI;

protected:
    double h;
    vector<double> xL;

public:
    Intervalo(){}
    
    void valorIntervalo(float a, float b, int n)
    {
        h = (b - a) / n;
        y = (b - a) / h;
        xI = new float[y];
    }

    ~Intervalo()
    {
    }

    void calcularX(float a, float b)
    {
        // cout << h << endl;
        // cout << y << endl;
        // cout << a << endl;
        // cout << b << endl;
        // cout << "-------------" << endl;
        for (int i = 0; i < y; i++)
        {
            xI[i] = (h * i) + a;
            // cout << xI[i] << endl;
        }

        //cout << "-------------" << endl;

        for (int i = 0; i < y; i++)
        {
            xL.push_back(xI[i]);
            //cout << "X" << i + 1 << "=" << xL[i] << endl;
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