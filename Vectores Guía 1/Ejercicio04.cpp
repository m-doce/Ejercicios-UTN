/*Ingresar un valor entero N (< 25). A continuación ingresar un conjunto VEC de N componentes.
Si la suma de las componentes resulta mayor que cero imprimir las de índice impar, sino los otros elementos.*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadElementos;
    cout<<"Indique la cantidad de elementos a ingresar: "<<endl;
    cin>>cantidadElementos;
    int vectorNumeros[cantidadElementos];
    int sumatoria = 0;

    for(int i=0; i<cantidadElementos; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>vectorNumeros[i];
        sumatoria += vectorNumeros[i];
    }

    if(sumatoria > 0)
    {
        for(int i=0; i<cantidadElementos; i++)
        {
            if((i % 2) != 0)
            {
                cout<<"Posicion "<<i<<": "<<vectorNumeros[i]<<endl;
            }
        }
    }
    else
    {
        for(int i=0; i<cantidadElementos; i+=2)
        {
            if((i % 2) == 0)
            {
                cout<<"Posicion "<<i<<": "<<vectorNumeros[i]<<endl;
            }
        }
    }

    return 0;
}
