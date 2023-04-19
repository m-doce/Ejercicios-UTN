/*Dados 50 números enteros, informar el promedio de los mayores que 100 y la suma de los menores que –10.*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadMayoresQueCien = 0;
    float promedioMayoresQueCien = 0;
    float sumaMayoresQueCien = 0;
    float sumaMenoresQueMenosDiez = 0;
    float numero;

    for(int i=0; i < 51; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;

        if(numero < -10)
        {
            sumaMenoresQueMenosDiez += numero;
        }
        else if(numero > 100)
        {
            cantidadMayoresQueCien++;
            sumaMayoresQueCien += numero;
        }
    }

    promedioMayoresQueCien = sumaMayoresQueCien / cantidadMayoresQueCien;

    cout<<"La suma de los numeros menores que -10 es: "<<sumaMenoresQueMenosDiez<<endl;
    cout<<"El promedio de la suma de los numeros mayores que 100 es: "<<promedioMayoresQueCien<<endl;

    return 0;
}
