/*Ingresar un valor N (< 25). Generar un arreglo de N componentes en el cual las mismas
contengan los primeros números naturales pares e imprimirlo.*/

#include <iostream>
using namespace std;

void AsignarValores(int array[], int cantidadValores)
{
    for(int i=1; i<=cantidadValores; i++)
    {
        array[i] = i*2;
    }

    return;
}

void MostrarValoresPorConsola(int array[], int cantidadValores)
{
    for(int i=1; i<=cantidadValores; i++)
    {
        cout<<"Posicion "<<i<<": "<<array[i]<<endl;
    }

    return;
}

int main()
{
    int cantidadElementos;
    cout<<"Indique la cantidad de componentes para el vector: "<<endl;
    cin>>cantidadElementos;
    int numerosPares[cantidadElementos];

    AsignarValores(numerosPares, cantidadElementos);
    MostrarValoresPorConsola(numerosPares, cantidadElementos);

    return 0;
}
