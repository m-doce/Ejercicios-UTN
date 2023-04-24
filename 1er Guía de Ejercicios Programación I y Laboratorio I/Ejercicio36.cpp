/*Dada la fracción P/Q, para P y Q naturales informar la mayor cantidad de simplificaciones.
Desarrolle y utilice una función que reciba dos números naturales y retorne el menor factor común.
Ej: 360/60 = 180/30 = 90/15 = 30/5 = 6/1  */

#include <iostream>
using namespace std;

void PedirValores(int &num1, int &num2)
{
    cout<<"Ingrese un numero: "<<endl;
    cin>>num1;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>num2;
    return;
}

int CantidadMaximaSimplificaciones(int num1, int num2)
{
    int i = 0;
    while(((num1 % 2) == 0) and ((num2 % 2) == 0))
    {
        i++;
        num1 = num1 / 2;
        num2 = num2 / 2;
    }
    while(((num1 % 3) == 0) and ((num2 % 3) == 0))
    {
        i++;
        num1 = num1 / 3;
        num2 = num2 / 3;
    }
    while(((num1 % 5) == 0) and ((num2 % 5) == 0))
    {
        i++;
        num1 = num1 / 5;
        num2 = num2 / 5;
    }
    while(((num1 % 7) == 0) and ((num2 % 7) == 0))
    {
        i++;
        num1 = num1 / 7;
        num2 = num2 / 7;
    }
    return i;
}

void RetornarExpresionSimplificada(int num1, int num2, int &resutado1, int &resultado2)
{
    while(((num1 % 2) == 0) and ((num2 % 2) == 0))
    {
        num1 = num1 / 2;
        num2 = num2 / 2;
    }
    while(((num1 % 3) == 0) and ((num2 % 3) == 0))
    {
        num1 = num1 / 3;
        num2 = num2 / 3;
    }
    while(((num1 % 5) == 0) and ((num2 % 5) == 0))
    {
        num1 = num1 / 5;
        num2 = num2 / 5;
    }
    while(((num1 % 7) == 0) and ((num2 % 7) == 0))
    {
        num1 = num1 / 7;
        num2 = num2 / 7;
    }

    resutado1 = num1;
    resultado2 = num2;
    return;
}

void MostrarResultados(int cantidad, int num1, int num2)
{
    cout<<"La cantidad maxima de simplificaciones es: "<<cantidad<<endl;
    cout<<"La expresion simplificada al minimo es: "<<num1<<"/"<<num2<<endl;
    return;
}

int main()
{
    int cantidadMaxSimplificaciones, num1, num2, num1Simplificado, num2Simplificado;

    PedirValores(num1, num2);
    cantidadMaxSimplificaciones = CantidadMaximaSimplificaciones(num1, num2);
    RetornarExpresionSimplificada(num1, num2, num1Simplificado, num2Simplificado);
    MostrarResultados(cantidadMaxSimplificaciones, num1Simplificado, num2Simplificado);

    return 0;
}
