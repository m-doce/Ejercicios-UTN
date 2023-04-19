/*Dados dos valores enteros A y B, informar la suma, la resta y el producto.*/

#include <iostream>
using namespace std;

int Suma(int num1, int num2)
{
    return num1 + num2;
}

int Resta(int num1, int num2)
{
    return num1 - num2;
}

int Producto(int num1, int num2)
{
    return num1 * num2;
}

void OperacionesBasicas(int num1, int num2, int &suma, int &resta, int &producto)
{
    suma = Suma(num1, num2);
    resta = Resta(num1, num2);
    producto = Producto(num1, num2);
    return;
}

void ImprimirResultados(int suma, int resta, int producto)
{
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "El producto es: " << producto << endl;
    return;
}

void PedirNumeros(int &num1, int &num2)
{
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    return;
}




int main()
{
    int numA, numB, suma, resta, producto;

    PedirNumeros(numA, numB);
    OperacionesBasicas(numA, numB, suma, resta, producto);
    ImprimirResultados(suma, resta, producto);    

    return 0;
}
