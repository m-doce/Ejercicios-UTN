/*Ingresar un valor entero N (< 15). A continuación ingresar un conjunto DATO de N elementos.
Generar otro conjunto de dos componentes MEJORDATO donde el primer elemento sea el mayor
valor de DATO y el segundo el siguiente mayor (puede ser el mismo si está repetido).
Imprimir el conjunto MEJORDATO con identificación.*/

//Tengo que ordenar el array de numeros de menor a mayor y asi copiar las últimas dos posiciones

#include <iostream>
using namespace std;

void LlenarArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>array[i];
    }
    return;
}

int main()
{
    int cantidadElementos;
    int vectorMejorDato[2];
    cout<<"Indique la cantidad de elementos del vector: "<<endl;
    cin>>cantidadElementos;
    int vectorDato[cantidadElementos];
    int aux;

    LlenarArray(vectorDato, cantidadElementos);

    for(int i=0; i<cantidadElementos; i++) //Ordenamiento por burbuja
    { //Acá estoy recorriendo el array y ordenando sus valores de menor a mayor
        for(int j=0; j<cantidadElementos; j++)
        {
            if(vectorDato[j] > vectorDato[j+1])
            { //Voy comparando posición actual vs posición siguiente en cada iteración
                aux = vectorDato[j]; //Guardo el valor de la posición j en una variable auxiliar
                vectorDato[j] = vectorDato[j+1]; //Piso el valor de la posición j con el de j+1
                vectorDato[j+1] = aux; //Le asigno a la posición j+1 el valor que tenía en j (usando el auxiliar)
            }
        }
    }



    vectorMejorDato[0] = vectorDato[cantidadElementos-1];
    vectorMejorDato[1] = vectorDato[cantidadElementos-2];

    cout<<"El mayor es: "<<vectorMejorDato[0]<<endl;
    cout<<"El segundo mayor es: "<<vectorMejorDato[1]<<endl;

    return 0;
}
