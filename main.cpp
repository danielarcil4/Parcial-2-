#include <iostream>
#include "canon.h"
#include "funciones.h"

using namespace std;

int main()
{
    int Vo=0,angulo=0,Ntiros=0,opciones=0;
    float t=0.0;
    float distancia=0;

    cout<<"Ingrese la opcion que desea evaluar: "<<endl;
    cout<<endl;
    cout<<"(1) Generar 3 tiros del canion ofensivo hacia el defensivo(Letales)"<<endl;
    cout<<"(2) Generar 3 tiros del canion defensivo hacia el ofensivo(Letales)"<<endl;

    cin>>opciones;

    switch (opciones) {
    case 1:
        prueba1(Vo,angulo,Ntiros,t,distancia);
        break;
    case 2:
        prueba2(Vo,angulo,Ntiros,t,distancia);
        break;
    case 3:
        prueba3(Vo,angulo,Ntiros,t,distancia);
        break;
    }

    return 0;
}
