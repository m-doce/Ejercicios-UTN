/*Dada una serie de números enteros, informar:
a) su factorial
b) cuantos múltiplos de 3
c) cuantos múltiplos de 5
d) cuantos múltiplos de 3 y de 5*/

#include <iostream>
using namespace std;

int PedirNumeros(int valor);
int Factorial(int num);


int main()
{
    int cantidadValores;

    cout<<"Indique la cantidad de numeros a ingresar: "<<endl;
    cin>>cantidadValores;

    PedirNumeros(cantidadValores);

    return 0;
}


int PedirNumeros(int valor)
{
    int numero;
    int contadorMultiploDe3 = 0;
    int contadorMultiploDe5 = 0;
    int multiplo3y5 = 0;

    for(int i=0; i<valor; i++)
    {
        cout<<endl<<"Ingrese un numero: ";
        cin>>numero;

        if((numero % 3) == 0)
        {
            contadorMultiploDe3++;
        }

        if((numero % 5) == 0)
        {
            contadorMultiploDe5++;
        }

        if(((numero % 3) == 0) && ((numero % 5) == 0))
        {
            multiplo3y5++;
        }

        cout<<"El factorial de "<<numero<<" es: "<<Factorial(numero)<<"."<<endl;
    }

    cout<<endl<<"Se ingresaron "<<contadorMultiploDe3<<" multiplos de 3."<<endl;
    cout<<"Se ingresaron "<<contadorMultiploDe5<<" multiplos de 5."<<endl;
    cout<<"Se ingresaron "<<multiplo3y5<<" multiplos de 3 y 5."<<endl;

    return 0;
}

int Factorial(int num)
{
    int resultado = 1;
    for(int i = 1; i<=num; i++)
    {
        resultado *= i;
    }
    return resultado;
}
