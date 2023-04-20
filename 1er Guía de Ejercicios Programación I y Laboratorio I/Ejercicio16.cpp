/*Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
Informar la cantidad de valores ingresados.*/

#include <iostream>
using namespace std;

int main()
{
    float valor;
    int cantidadIngresada = 0; //Para guardar solo los valores mayores a cero, si quiero guardar tambien el valor negativo(usado para cortar los ingresos) debo inicializar en 1

    cout<<"Ingrese un valor: "<<endl;
    cin>>valor;

    while(valor >= 0)
    {
        cantidadIngresada++;
        cout<<"Ingrese un valor: "<<endl;
        cin>>valor;
    }

    cout<<"Se ingresaron "<<cantidadIngresada<<" valores."<<endl;

    return 0;
}
