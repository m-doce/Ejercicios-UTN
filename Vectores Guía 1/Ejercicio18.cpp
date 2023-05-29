/*Ingresar un valor N (< 25) y luego por filas una matriz cuadrada CUADRADA de N filas y columnas.
Desarrollar un programa que determine e imprima:
a) Todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la sumatoria de elementos.
b) Los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor (considerando que N fuera par).
c) Los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria de elementos.*/

#include <iostream>
using namespace std;

int main()
{
    int posiciones;
    cout<<"Indique la cantiadad de filas y columnas para la matriz cuadrada: ";
    cin>>posiciones;
    int matriz[posiciones][posiciones] = {0};

    //Primero lleno cada lugar de la matriz
    for(int i=0; i<posiciones; i++)
    {
        for(int j=0; j<posiciones; j++)
        {
            cout<<"Ingrese un valor para la posicion ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }



    //Punto A: Imprimir todos los elementos de la diagonal principal o secundaria según de cual resulte mayor la sumatoria de elementos
   
    //Creo variables para acumular la sumatoria de las dos diagonales
    int diagonalPrincipal = 0;
    int diagonalSecundaria = 0;
    //Armo un ciclo para recorrer los valores de la diagonal principal (subindices iguales) y sumarlos
    for(int i=0; i<posiciones; i++)
    {
        diagonalPrincipal += matriz[i][i];
    }
    //Hago un ciclo para recorrer y sumar los valores de la digaonal secundaria (desde abajo a la izquierda hacia arriba a la derecha)
    for(int i=0; i<posiciones; i++)
    {
        diagonalSecundaria += matriz[posiciones - (i+1)][i];
    }
    //Muestro la sumatoria de ambas
    cout<<"Los valores de la diagonal principal suman un total de: "<<diagonalPrincipal<<endl;
    cout<<"Los valores de la diagonal secundaria suman un total de: "<<diagonalSecundaria<<endl;
    //Comparo ambas sumatorias para determinar que diagonal debo imprimir
    if(diagonalPrincipal > diagonalSecundaria)
    {
        //Si la principal es mayor muestro todas sus posiciones
        cout<<"Los valores dentro de la diagonal principal son: "<<endl;
        for(int i=0; i<posiciones; i++)
        {
            cout<<"Posicion ["<<i<<"]["<<i<<"]: "<<matriz[i][i]<<endl;
        }
    }
    else
    {
        //Si la secundaria es mayor o son iguales, muestro sus valores
        cout<<"Los valores dentro de la diagonal secundaria son: "<<endl;
        for(int i=0; i<posiciones; i++)
        {
            cout<<"Posicion ["<<(posiciones - (i + 1))<<"]["<<i<<"]: "<<matriz[posiciones - (i + 1)][i]<<endl;
        }
    }



    //Punto B: Imprimir los elementos del cuarto (N/2 filas y N/2 columnas) cuya sumatoria resulte mayor (considerando que N fuera par)
/*  Si N=4:
            1122
            1122
            3344
            3344
*/

    //Creo variables para la sumatoria de cada cuadrante
    int cuadranteUno = 0;
    int cuadranteDos = 0;
    int cuadranteTres = 0;
    int cuadranteCuatro = 0;
    //Recorro la matriz y voy acumulando los valores de cada cuadrante
    for (int y = 0; y < posiciones; y++)
    {
        for (int x = 0; x < posiciones; x++)
        {
            // Primer cuadrante
            if ((x < posiciones / 2) && (y < posiciones / 2)) {
                cuadranteUno += matriz[x][y];
            }
            // Segundo cuadrante
            if ((x >= posiciones / 2) && (y < posiciones / 2)) {
                cuadranteDos += matriz[x][y];
            }
            // Tercer cuadrante
            if ((x < posiciones / 2) && (y >= posiciones / 2)) {
                cuadranteTres += matriz[x][y];
            }
            // Cuarto cuadrante
            if ((x >= posiciones / 2) && (y >= posiciones / 2)) {
                cuadranteCuatro += matriz[x][y];
            }
        }
    }
    
    //Muestro la sumatoria de cada cuadrante
    cout<<"La sumatoria de los valores del primer cuadrante es: "<<cuadranteUno<<endl;
    cout<<"La sumatoria de los valores del segundo cuadrante es: "<<cuadranteDos<<endl;
    cout<<"La sumatoria de los valores del tercer cuadrante es: "<<cuadranteTres<<endl;
    cout<<"La sumatoria de los valores del cuarto cuadrante es: "<<cuadranteCuatro<<endl;




    //Punto C: Imprimir los elementos de la triangular superior o inferior dependiendo de cual tenga mayor sumatoria de elementos

    //Creo variables para guardar la sumatoria de las triangulares
    int triangularSuperior = 0;
    int triangularInferior = 0;
    //Recorro todas las posiciones de la matriz y voy acumulando los valores de la triangular superior (cuando j>i)
    for(int i=0; i<posiciones; i++)
    {
        for(int j=0; j<posiciones; j++)
        {
            if(j > i)
            {
                triangularSuperior += matriz[i][j];
            }
        }
    }
    //Recorro todas las posiciones de la matriz y voy acumulando los valores de la triangular inferior (cuando i>j)
    for(int i=0; i<posiciones; i++)
    {
        for(int j=0; j<posiciones; j++)
        {
            if(i > j)
            {
                triangularInferior += matriz[i][j];
            }
        }
    }
    //Muestro la sumatpria de ambas
    cout<<"La sumatoria de los valores de la triangular superior es: "<<triangularSuperior<<endl;
    cout<<"La sumatoria de los valores de la triangular inferior es: "<<triangularInferior<<endl;
    //Comparo las dos sumatorias para determinar que triangular imprimir
    if(triangularSuperior > triangularInferior)
    {
        //Si la superior es mayor, muestro los valores de todas sus posiciones
        cout<<"Los valores de la triangular superior son: "<<endl;
        for(int i=0; i<posiciones; i++)
        {
            for(int j=0; j<posiciones; j++)
            {
                if(j > i)
                {
                    cout<<"Posicion ["<<i<<"]["<<j<<"]: "<<matriz[i][j]<<endl;
                }
            }
        }
    }
    else
    {
        //Si la inferior es mayor o son iguales, muestro los valores de todas sus posiciones
        cout<<"Los valores de la triangular inferior son: "<<endl;
        for(int i=0; i<posiciones; i++)
        {
            for(int j=0; j<posiciones; j++)
            {
                if(i > j)
                {
                    cout<<"Posicion ["<<i<<"]["<<j<<"]: "<<matriz[i][j]<<endl;
                }
            }
        }
    }


    return 0;
}
