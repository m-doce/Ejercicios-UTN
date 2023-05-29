/*Dado un arreglo de enteros (Max = 1000) se pide desarrollar:
a) Una rutina que devuelva la posición del elemento mayor en el arreglo. Si el mayor aparece
varias veces devolver la posición de la primera aparición del mismo.
b) Una rutina que devuelva todas las posiciones en que aparece el elemento que es el mayor del
arreglo (no olvide considerar el caso en que todos los elementos sean iguales)*/

#include <iostream>
using namespace std;

void PrimerPosicionMayorElemento(int array[], int size)
{
    int mayor = array[size-1];
    int posicion;
    for(int i=(size-1); i>=0; i--)
    {
        if(array[i] >= mayor)
        {
            mayor = array[i];
            posicion = i;
        }
    }
    cout<<"El mayor elemento es "<<mayor<<" y aparece por primera vez en la posicion "<<posicion<<endl;
    return;
}

void PosicionesMayorElemento(int array[], int size)
{
    int mayor = array[0];
    for(int i=0; i<size; i++)
    {
        if(array[i] > mayor)
        mayor = array[i];
    }
    for(int i=0; i<size; i++)
    {
        if(mayor == array[i])
        cout<<"Posicion: "<<i<<endl;
    }
    return;
}

int main()
{
    int size;
    cout<<"Indique las posiciones totales del vector: ";
    cin>>size;
    int arrayEnteros[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un valor para la posicion ["<<i<<"]: ";
        cin>>arrayEnteros[i];
    }

    PrimerPosicionMayorElemento(arrayEnteros, size);
    PosicionesMayorElemento(arrayEnteros, size);

    return 0;
}
