#pragma once

#include<iostream>
#include<cmath>

using namespace std;

class Ecuacion
{
private:
    double f;
    int a, b, c;
    int aa, ab, ac;
    int ba, bb, bc;
    int ca, cb, cc;

public:
    Ecuacion() {}
    ~Ecuacion() {}

    void RecibirEcuacion(double x){
        do
        {
            cout<<"Ingresa la opcion correcta para poder resolver la integral mediante el metodo simpson"<< endl;
            cout<<"Que tipo de funcion utiliza tu integral?(1.x/y o 2.(x)(y))"<<endl;
            cin>>a;
            switch (a)
            {
            //Funcion como division-------------------------------------------------------------------------------
            case 1:
                do
                {
                    cout<<"Comienza ingresando la parte de arriba de tu funcion"<<endl;
                    cout<<"1.Trigonometrica \n2.Hiperbolica \n3.Exponencial o logaritmica \n4.Raiz o potencia \5.Regresar"<<endl;
                    cout<<"Selecciona el tipo de operacion que ralizara: ";
                    cin>>b;
                    switch (b)
                    {
                    //Funciones trigonometricas-------------------------------------------------------------------
                    case 1:
                        do{
                            cout<<"1.Coseno \n2.Seno \n3.Tangente \4.Regresar";
                            cout<<"Selecciona la funcion que realizara: ";
                            cin>>c;
                            switch (c)
                            {
                            //Coseno------------------------------------------------------------------------------
                            case 1:
                                f=cos(x);
                                do
                                {
                                    cout<<"Que tipo de funcion utiliza tu integral?(1.x/y o 2.(x)(y))"<<endl;
                                    cin>>aa;
                                    switch (aa)
                                    {
                                    //Funcion como division-------------------------------------------------------
                                    case 1:
                                        do
                                        {
                                            cout<<"Comienza ingresando la parte de arriba de tu funcion"<<endl;
                                            cout<<"1.Trigonometrica \n2.Hiperbolica \n3.Exponencial o logaritmica \n4.Raiz o potencia \5.Regresar"<<endl;
                                            cout<<"Selecciona el tipo de operacion que ralizara: ";
                                            cin>>ba;
                                            switch (ba)
                                            {
                                            //Funciones trigonometricas------------------------------------------
                                            case 1:
                                                do
                                                {
                                                    cout<<"1.Coseno \n2.Seno \n3.Tangente \4.Regresar";
                                                    cout<<"Selecciona la funcion que realizara: ";
                                                    cin>>ca;
                                                    switch (ca)
                                                    {
                                                    //Coseno------------------------------------------------------
                                                    case 1:
                                                        
                                                        break;
                                                    //Seno--------------------------------------------------------
                                                    case 2:

                                                        break;
                                                    //Tangente----------------------------------------------------
                                                    case 3:

                                                        break;
                                                    //Regresar----------------------------------------------------
                                                    default:
                                                        break;
                                                    }
                                                } while (ca!=4);
                                                break;
                                            //Funciones hiperbolicas---------------------------------------------
                                            case 2:

                                                break;
                                            //Funciones exponenciales y logaritmicas-----------------------------
                                            case 3:

                                                break;
                                            //Funciones con raiz o potencia-------------------------------------
                                            case 4:

                                                break;
                                            //Regresar-----------------------------------------------------------
                                            default:
                                                break;
                                            }
                                        } while (ba=!5);
                                        break;
                                    //Funcion como multiplicacion------------------------------------------------
                                    case 2:

                                        break;
                                    //Regresar-------------------------------------------------------------------
                                    default:
                                        break;
                                    }
                                }while(aa=!2);
                                break;
                            //Seno-------------------------------------------------------------------------------
                            case 2:

                                break;
                            //Tangente---------------------------------------------------------------------------
                            case 3:

                                break;
                            //Regresar---------------------------------------------------------------------------
                            default:

                                break;
                            }
                        }while(c!=4);
                        break;
                    //Funciones hiperbolicas---------------------------------------------------------------------
                    case 2:

                        break;
                    //Funciones exponenciales y logaritmicas-----------------------------------------------------
                    case 3:

                        break;
                    //Funciones con raiz o potencia--------------------------------------------------------------
                    case 4:

                        break;
                    //Regresar-----------------------------------------------------------------------------------
                    default:
                        break;
                    }
                } while (b != 5);
                
            //Funcion como multiplicacion-----------------------------------------------------------------------
            case 2:
                cout<<"Ingresa tu funcion";
                break;
            default:
                cout<<"Esta opcion no esta, por favor ingresa una valida."<<endl;
                break;
            }
        } while (a == 1&2);
        
    }
};

/*
Funciones trigonometricas
cos	Compute cosine (function)
sin	Compute sine (function)
tan	Compute tangent (function)

Funciones hiperbolicas
cosh	Compute hyperbolic cosine (function)
sinh	Compute hyperbolic sine (function)
tanh	Compute hyperbolic tangent (function)

Funciones exponenciales y logaritmicas
exp	Compute exponential function (function)
log	Compute natural logarithm (function)
log10	Compute common logarithm (function)

Funciones de potencia
pow	Raise to power (function)
sqrt	Compute square root (function)
*/