/*Ingresar un valor entero N (< 30) y a continuación un conjunto de N elementos. Si el último elemento
del conjunto tiene un valor menor que 10 imprimir los negativos y en caso contrario los demás.*/

#include <iostream>
using namespace std;

void AsignarValores(int array[], int cantidadValores)
{
    for(int i=0; i<cantidadValores; i++)
    {
        cout<<"Ingrese un valor: "<<endl;
        cin>>array[i];
    }

    return;
}

void MostrarValoresPorConsola(int array[], int cantidadValores)
{
    if(array[cantidadValores-1] < 10)
    {
        for(int i=0; i<cantidadValores; i++)
        {
            if(array[i] < 0)
            {
                cout<<"Posicion "<<i+1<<": "<<array[i]<<endl;
            }
        }
    }
    else
    {
        for(int i=0; i<cantidadValores; i++)
        {
            if(array[i] >= 0)
            {
                cout<<"Posicion "<<i+1<<": "<<array[i]<<endl;
            }
        }
    }

    return;
}

int main()
{
    int cantidadElementos;
    cout<<"Indique la cantidad de componentes para el vector: "<<endl;
    cin>>cantidadElementos;
    int numeros[cantidadElementos];

    AsignarValores(numeros, cantidadElementos);
    MostrarValoresPorConsola(numeros, cantidadElementos);

    return 0;
}
