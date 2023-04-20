/*Desarrollar una función que calcule el máximo común divisor de dos números enteros A, B con el siguiente
algoritmo:
1) Dividir A por B, y calcular el resto (0 < R < B)
2) Si R = 0, el MCD es B, si no seguir en 3)
3) Reemplazar A por B, B por R, y volver al paso 1)*/

#include <iostream>
using namespace std;

void IngresarValores(int &num1, int &num2)
{
    cout << "Ingrese el primer numero:" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero:" << endl;
    cin >> num2;
}

int maximoComunDivisor(int nroA, int nroB)
{
    int resto = nroA % nroB;
    while (resto != 0)
    {
        nroA = nroB;
        nroB = resto;
        resto = nroA % nroB;
    }
    return nroB;
}

int main()
{
    int num1, num2;
    
    IngresarValores(num1, num2);
    int maxComDiv = maximoComunDivisor(num1, num2);
    cout << "El maximo comun divisor es: " << maxComDiv << endl;

    return 0;
}
