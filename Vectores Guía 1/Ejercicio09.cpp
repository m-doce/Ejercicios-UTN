/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto A
y luego otro conjunto B ambos de N elementos.
Generar un arreglo C donde cada elemento se forme de la siguiente forma:
C[1] = A[1]+B[N] C[2] = A[2]+B[N-1]   */

#include <iostream>
using namespace std;

void CompletarArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>array[i];
    }
    return;
}

int main()
{
    int size;
    cout<<"Ingrese la cantidad de posiciones del vector: "<<endl;
    cin>>size;
    int vectorA[size], vectorB[size], vectorC[size];
    
    CompletarArray(vectorA, size);
    CompletarArray(vectorB, size);

    for(int i=0; i<size; i++)//Asigno valores a las posiciones del vector C
    {
        vectorC[i] = vectorA[i] + vectorB[size - (i+1)];
    }

    for(int i=0; i<size; i++)//Muestro los resultados por consola
    {
        cout<<"Posicion "<<i<<": "<<vectorA[i]<<" + "<<vectorB[size - (i+1)]<<" = "<<vectorC[i]<<endl;
    }

    return 0;
}
