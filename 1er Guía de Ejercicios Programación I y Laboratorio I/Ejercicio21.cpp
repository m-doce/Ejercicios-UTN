/*Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadValores = 0, posicionMayor = 0, posicionMenor = 0;
    float numero, elMayor = INT64_MIN, elMenor = INT64_MAX;
    
    cout<<"¿Cuantos valores desea ingresar?"<<endl;
    cin>>cantidadValores;

    for(int i=0; i<cantidadValores; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;

        if(numero < elMenor)
        {
            elMenor = numero;
            posicionMenor = i+1;
        }

        if(numero > elMayor)
        {
            elMayor = numero;
            posicionMayor = i+1;
        }
    }

    cout<<endl<<"El menor valor ingresado fue: "<<elMenor<<", en la posicion numero: "<<posicionMenor<<endl;
    cout<<endl<<"El mayor valor ingresado fue: "<<elMayor<<", en la posicion numero: "<<posicionMayor<<endl;

    return 0;
}
