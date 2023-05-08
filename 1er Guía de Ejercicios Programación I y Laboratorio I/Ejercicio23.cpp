/*Dado un conjunto de valores, que finaliza con un valor nulo, determinar e imprimir (si hubo valores):
a) El valor máximo negativo
b) El valor mínimo positivo
c) El valor mínimo dentro del rango -17.3 y 26.9
d) El promedio de todos los valores.*/

#include <iostream>
using namespace std;

int main()
{

    float valor, promedio;
    float maxNegativo = 0, minPositivo = 0;
    float rangoC = 0, sumaTotalValores = 0;
    int cantidadValores = 0;

    cout<<"Ingrese un numero (ingrese 0 para finalizar): "<<endl;
    cin>>valor;

    while(valor != 0)
    {
        cantidadValores++;
        sumaTotalValores += valor;

        if((maxNegativo == 0) and (valor < 0))
        {
            maxNegativo = valor;
        }
        if((maxNegativo < valor) and (valor < 0))
        {
            maxNegativo = valor;
        }//Me guardo siempre el maximo valor negativo

        if((minPositivo == 0) and (valor > 0))
        {
            minPositivo = valor;
        }
        if((minPositivo > valor) and (valor > 0))
        {
            minPositivo = valor;
        }//Me guardo siempre menor valor positivo

        if((rangoC == 0) and (valor > -17.3) and (valor < 26.9))
        {
            rangoC = valor;
        }
        if((rangoC > valor) and (valor > -17.3) and (valor < 26.9))
        {
            rangoC = valor;
        }//Me guardo siempre el menor valor dentro del rango definido

        cout<<"Ingrese un numero (ingrese 0 para finalizar): "<<endl;
        cin>>valor;
    }

    promedio = sumaTotalValores / cantidadValores;

    cout<<"El valor máximo negativo es: "<<maxNegativo<<endl;
    cout<<"El valor mínimo positivo es: "<<minPositivo<<endl;
    cout<<"El valor mínimo dentro del rango -17.3 y 26.9 es: "<<rangoC<<endl;
    cout<<"El promedio de todos los valores es: "<<promedio<<endl;

    return 0;
}
