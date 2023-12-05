#pragma once

#include<iostream>
#include<Intervalo.hpp>

using namespace std;

class Simpson : public Intervalo
{
private:
    int i;
    double sum;
public:
    Simpson() {
        sum=0;
    }

    ~Simpson() {}

    double evaluarFuncion(int n, double f){
        for(i=1; i<=n/2; i++)
        {
            sum += f(x[2*i - 2]) + 4*f(x[2*i - 1]) + f(x[2*i]);
        }

        return sum*(h/3);
    }
};