/*Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos.*/

#include <iostream>
using namespace std;

void PedirDatos(int &valor1, int &valor2)
{
    cout<<"Ingrese un numero: "<<endl;
    cin>>valor1;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>valor2;

    if(valor1 == valor2)
    {
        cout<<"Los numeros ingresados son iguales. Por favor repita el ingreso de datos."<<endl;
        PedirDatos(valor1, valor2);
    }
    return;
}

void ChequearMayor(int num1, int num2, int &mayor, int &menor)
{
    if(num1 < num2)
    {
        mayor = num2;
        menor = num1;
    }
    else
    {
        mayor = num1;
        menor = num2;
    }
    return;
}

void InformarResultado(int mayor, int menor)
{
    cout<<"El numero "<<mayor<<" es mayor que "<<menor<<"."<<endl;
}

int main()
{
    int num1, num2, mayor, menor;

    PedirDatos(num1, num2);
    ChequearMayor(num1, num2, mayor, menor);
    InformarResultado(mayor, menor);

    return 0;
}
