/*Ingresar un valor entero N (< 20). A continuación ingresar un conjunto VEC de N componentes.
A partir de este conjunto generar otro FACT en el que cada elemento sea el factorial del elemento
homólogo de VEC. Finalmente imprimir ambos vectores a razón de un valor de cada uno por renglón*/

#include <iostream>
using namespace std;

int Factorial(int numero)
{//Función para calcular el factorial de un numero
    if(numero < 0)
    {
        return 0;
    }

    int resultado = 1;
    int ciclos = numero;

    for(int i=0; i<ciclos; i++)
    {
        resultado *= numero;
        numero--;
    }

    if(resultado == 0)
    {
        return 1;
    }

    return resultado;
}

void AsignarValores(int array[], int cantidadValores)
{//Función para tomar valores ingresados por el usuario para cada posición de un array
    for(int i=0; i<cantidadValores; i++)
    {
        cout<<"Ingrese un valor: "<<endl;
        cin>>array[i];
    }

    return;
}

void FactorialDeUnVector(int array[], int factorialArray[], int cantidadValores)
{//Función para guardar el factorial de un numero según su posición dentro del array
    for(int i=0; i<cantidadValores; i++)
    {
        factorialArray[i] = Factorial(array[i]);
    }

    return;
}

void MostrarValoresPorConsola(int array[], int factorialArray[], int cantidadValores)
{//Función para mostrar por consola cada valor del array
    for(int i=0; i<cantidadValores; i++)
    {
        cout<<"El factorial de "<<array[i]<<" es: "<<factorialArray[i]<<endl;
    }

    return;
}

int main()
{
    int cantidadValores;
    cout<<"Indique la cantidad de elementos del vector: "<<endl;
    cin>>cantidadValores;
    int numeros[cantidadValores];
    int numerosFactorial[cantidadValores];

    AsignarValores(numeros, cantidadValores);
    FactorialDeUnVector(numeros, numerosFactorial, cantidadValores);
    MostrarValoresPorConsola(numeros, numerosFactorial, cantidadValores);

    return 0;
}
