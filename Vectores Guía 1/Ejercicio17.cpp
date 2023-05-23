/*Ingresar dos valores, N (< 30) y M (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de N filas y M columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila.*/

#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;
    cout<<"Ingrese la cantidad de filas de la matriz: "<<endl;
    cin>>filas;
    cout<<"Ingrese la cantidad de columnas de la matriz: "<<endl;
    cin>>columnas;
    int matrizA[filas][columnas];


    //Toma de valores para la matriz
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            cout<<"Ingrese el valor ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>matrizA[i][j];
        }
    }


    //a)Imprimo la matriz por columnas
    for(int j=0; j<columnas; j++)
    {
        for(int i=0; i<filas; i++)
        {
            cout<<matrizA[i][j]<<"\t";
        }
        cout<<endl;
    }


    //b)Calculo el promedio de todos los valores
    float sumaTotal = 0;
    float promedio;
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            sumaTotal += matrizA[i][j];
        }
    }
    promedio = sumaTotal / (filas * columnas);
    cout<<"El promedio de los valores ingresados es: "<<promedio<<endl;


    //c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna homóloga
    int vectorSumaColumna[columnas];
    for(int j=0; j<columnas; j++)
    {
        int sumatoriaColumna = 0;
        for(int i=0; i<filas; i++)
        {
            sumatoriaColumna += matrizA[i][j];
        }
        vectorSumaColumna[j] = sumatoriaColumna;
        cout<<"Sumatoria columna "<<j<<": "<<vectorSumaColumna[j]<<endl;
    }


    //d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila
    int vectorMaximoFila[filas];
    for(int i=0; i<filas; i++)
    {
        int maximoFila = matrizA[i][0];
        for(int j=0; j<columnas; j++)
        {
            if(maximoFila < matrizA[i][j])
            {
                maximoFila = matrizA[i][j];
            }
        }
        vectorMaximoFila[i] = maximoFila;
        cout<<"Valor maximo de la fila "<<i<<": "<<vectorMaximoFila[i]<<endl;
    }


    return 0;
}
