/*Desarrollar una función tal que dado un número entero positivo calcule y retorne su factorial.*/

#include <iostream>
using namespace std;

int Factorial(int num);

int main()
{
    int numero, factorialDeNumero;
    cout << "Ingrese un valor: " << endl;
    cin >> numero;
    factorialDeNumero = Factorial(numero);
    cout << "El factorial de " << numero << " es: " << factorialDeNumero << endl;

    return 0;
}

int Factorial(int num)
{
    int resultado = 1;
    for (int i = 1; i <= num; i++)
    {
        resultado *= i;
    }
    return resultado;
}
