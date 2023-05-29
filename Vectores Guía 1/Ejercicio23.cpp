/*Dado un arreglo de enteros (Max = 1000) y otro entero (DATO) se pide desarrollar:
a) Una rutina que indique si DATO es o no un elemento del arreglo.
b) Una rutina que indique si DATO es o no un elemento del arreglo y si lo es devuelva la posición
de la primera aparición del mismo (Búsqueda Secuencial).
c) Una rutina que devuelva todas las posiciones en las cuales aparece DATO en el arreglo.
d) Una rutina que devuelva la posición de la primera y de la última aparición de DATO en el arreglo.*/

#include <iostream>
using namespace std;


void LlenarArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un numero para la posicion ["<<i<<"]: ";
        cin>>array[i];
    }
    return;
}

void PuntoA(int array[], int size, int dato)
{
    bool check = false;
    for(int i=0; i<size; i++)
    {
        if(array[i] == dato)
        {
            check = true;
        }
    }

    if(check)
    {
        cout<<"El numero "<<dato<<" es un elemento del array."<<endl;
    }
    else
    {
        cout<<"El numero "<<dato<<" no es un elemento del array."<<endl;
    }
    return;
}

void PuntoB(int array[], int size, int dato)
{
    bool check = false;
    int posicion = 0;
    for(int i=(size-1); i>=0; i--)
    {
        if(array[i] == dato)
        {
            check = true;
            posicion = i;
        }
    }

    if(check)
    {
        cout<<"El numero "<<dato<<" es un elemento del array, y se encuentra en la posicion: "<<posicion<<endl;
    }
    else
    {
        cout<<"El numero "<<dato<<" no es un elemento del array."<<endl;
    }
    return;
}


void PuntoC(int array[], int size, int dato)
{
    bool check = false;
    for(int i=0; i<size; i++)
    {
        if(array[i] == dato)
        {
            check = true;
            cout<<"Posicion: "<<i<<endl;
        }
    }
    if(check)
    return;
    else
    {
        cout<<dato<<" no forma parte del array."<<endl;
        return;
    }
}


void PuntoD(int array[], int size, int dato)
{
    bool check = false;
    int primerPosicion, ultimaPosicion;

    for(int i=0; i<size; i++)
    {
        if(array[i] == dato)
        {
            check = true;
            ultimaPosicion = i;
        }
    }

    for(int i=(size-1); i>=0; i--)
    {
        if(array[i] == dato)
        {
            check = true;
            primerPosicion = i;
        }
    }

    if(check)
    cout<<"El numero "<<dato<<" aparece por primera vez en la posicion "<<primerPosicion<<" y por ultima vez en la posicion "<<ultimaPosicion<<endl;
    else
    cout<<dato<<" no forma parte del array."<<endl;

    return;
}


int main()
{
    int size, dato = 12; //Le asigno un valor a dato, podría pedirselo al usuario
    cout<<"Indique la cantidad de elementos del vector: ";
    cin>>size;
    int array[size];

    LlenarArray(array, size);
    PuntoA(array, size, dato);
    PuntoB(array, size, dato);
    PuntoC(array, size, dato);
    PuntoD(array, size, dato);

    return 0;
}
