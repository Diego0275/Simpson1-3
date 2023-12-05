#pragma once

#include<iostream>
#include<vector>

using namespace std;

class Intervalo
{
private:
    int i, y;
    int *x;
protected:
    double h;
    vector<double> xL;
public:
    Intervalo(float a, float b) {
        h = (b - a) / 2;
        y = (b - a) / h;
        x = new int[y];
    }

    ~Intervalo() {
        delete[] x;
    }

    void calcularX(float a, float b)
    {
        for (int i = 0; i < y; i++) {
            x[i] = a + h * i;
        }

        for (int i = 0; i < y; i++) {
            xL.push_back(x[i]);
        }
        
        // x[0] = a;
        // for (i = 1; i <= y; i++)
        // {
        //     x[i] = a + h * i;
        // }
    }

    void imprimirX()
    {
        for (i = 0; i < xL.size(); i++)
        {
            cout << "X" << i+1 << "=" << xL[i] << endl;
        }
        // double x[y];
        // for (i = 0; i <= y; i++)
        // {
        //     cout << "X" << i << " = " << x[i] << endl;
        // }
    }
};