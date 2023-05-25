/*Dado un arreglo de enteros (Max = 1000) se pide escribir el algoritmo de una
rutina que permita mostrar sus elementos pero en orden inverso.*/

#include <iostream>
using namespace std;

void LeerVectorDesdeElFinal(int array[], int size)
{
    for(int i=(size-1); i>=0; i--)
    {
        cout<<"Posicion ["<<i<<"]: "<<array[i]<<endl;
    }
    return;
}

int main()
{
    int size;
    cout<<"Indique el tamaño del vector: ";
    cin>>size;
    int vectorEnteros[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>vectorEnteros[i];
    }

    LeerVectorDesdeElFinal(vectorEnteros, size);

    return 0;
}
