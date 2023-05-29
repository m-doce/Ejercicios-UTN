/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto.
Si el máximo no es único, imprimir todas las posiciones en que se encuentra.*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadElementos;
    cout<<"Ingrese la cantidad de elementos para el vector: ";
    cin>>cantidadElementos;
    int vector[cantidadElementos];

    //Lleno el vector con valores que le pido al usuario
    for(int i=0; i<cantidadElementos; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>vector[i];
    }

    //Creo una variable para guardar el valor más alto del conjunto, y otra para guardar su posición
    int elMayor = vector[0];
    int posicion;
    //Comparo cada posición y reemplazo siempre con el valor más alto
    for(int i=0; i<cantidadElementos; i++)
    {
        if(vector[i] > elMayor)
        {
            elMayor = vector[i];
            posicion = i;
        }
    }
    
    //Imprimo el valor máximo, y luego su/s posición/es
    cout<<"El valor maximo del conjunto es "<<elMayor<<" y se encuentra en la/s posicion/es: ";
    for(int i=0; i<cantidadElementos; i++)
    {
        if(elMayor == vector[i])
        {
            cout<<i<<"; ";
        }
    }

    return 0;
}
