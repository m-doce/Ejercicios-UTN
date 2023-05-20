/*Ingresar un valor entero N (< 30). A continuación ingresar un conjunto UNO y luego otro
conjunto DOS, ambos de N componentes. Generar e imprimir otro conjunto TRES intercalando los
valores de posición impar de DOS y los valores de posición par de UNO.*/

#include <iostream>
using namespace std;

void CargarDatosVector(int array[], int posiciones)
{
    for(int i=0; i<posiciones; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>array[i];
    }

    return;
}

void MostrarVectores(int array[], int posiciones)
{
    for(int i=0; i<posiciones; i++)
    {
        cout<<" -Posicion "<<i<<": "<<array[i];
    }
    cout<<endl;

    return;
}

int main()
{
    int cantidadElementos;
    cout<<"Ingrese la cantidad de posiciones del vector: "<<endl;
    cin>>cantidadElementos;
    int vectorUno[cantidadElementos],  vectorDos[cantidadElementos], vectorTres[cantidadElementos];

    CargarDatosVector(vectorUno, cantidadElementos);
    CargarDatosVector(vectorDos, cantidadElementos);

    for(int i=0; i<cantidadElementos; i++)
    {
        if((i % 2) == 0)
        {
            vectorTres[i] = vectorUno[i];
        }
        else
        {
            vectorTres[i] = vectorDos[i];
        }
    }

    MostrarVectores(vectorUno, cantidadElementos);
    MostrarVectores(vectorDos, cantidadElementos);
    MostrarVectores(vectorTres, cantidadElementos);

    return 0;
}
