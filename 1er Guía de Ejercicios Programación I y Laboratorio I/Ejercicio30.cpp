/*Dado un conjunto de valores enteros, calcular e informar 
a) cuántos valores cero hubo
b) promedio de valores positivos
c) sumatoria de valores negativos*/

#include <iostream>
using namespace std;


int CantidadDeCeros(int valor);
int SumarNegativos(int valor);
void IngresarValores(int cantidad);


int main()
{
    int cantidadValores;
    cout<<"Indique la cantidad de valores a ingresar: "<<endl;
    cin>>cantidadValores;

    IngresarValores(cantidadValores);

    return 0;
}


int CantidadDeCeros(int valor)
{
    int contadorCeros = 0;
    if(valor == 0)
    {
        contadorCeros++;
    }
    return contadorCeros;
}

int SumarNegativos(int valor)
{
    int sumaNegativos = 0;
    if(valor < 0)
    {
        sumaNegativos += valor;
    }
    return sumaNegativos;
}

void IngresarValores(int cantidad)
{
    int numero;
    int cantidadDeCeros = 0, sumatoriaNegativos = 0;
    float promedioPositivos = 0, contadorPositivos = 0, sumaPositivos = 0;

    for(int i=0; i<cantidad; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;

        cantidadDeCeros += CantidadDeCeros(numero);
        sumatoriaNegativos += SumarNegativos(numero);

        if(numero > 0)
        {
            contadorPositivos++;
            sumaPositivos += numero;
        }
    }
    promedioPositivos = sumaPositivos / contadorPositivos;

    cout<<"La cantidad de ceros ingresados fue: "<<cantidadDeCeros<<"."<<endl;
    cout<<"La suma de los valores negativos ingresados es: "<<sumatoriaNegativos<<"."<<endl;
    cout<<"El promedio de los valores positivos ingresados es: "<<promedioPositivos<<"."<<endl;
}
