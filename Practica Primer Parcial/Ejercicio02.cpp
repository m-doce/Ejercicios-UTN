/*Dados N números naturales de 3 dígitos ingresados, informar cuántos eran capicúa.
Realizar diagrama o codificación*/

#include <iostream>
using namespace std;

void PedirNumero(int &numero)
{
    cout<<"Ingrese un numero de tres cifras (entre 100 y 999) para saber si es capicua: "<<endl;
    cin>>numero;
}

void SepararNumero(int numero, int &unidad, int &centena)
{
    unidad = numero % 10;
    centena = numero / 100;
}

bool EsCapicua(int unidad, int centena)
{
    if(unidad == centena)
    return true;
    else
    return false;
}

void InformarResultado(bool validacion, int numero)
{
    if(validacion)
    cout<<"El numero "<<numero<<" es capicua."<<endl;
    else
    cout<<"El numero "<<numero<<" no es capicua."<<endl;
}

int main()
{
    int cantidadValores, numero, unidad, centena;
    int contador = 0;
    bool check = false;

    cout<<"Indique la cantidad de numeros a ingresar: "<<endl;
    cin>>cantidadValores;

    for(int i=0; i<cantidadValores; i++)
    {
        PedirNumero(numero);
        SepararNumero(numero, unidad, centena);
        check = EsCapicua(unidad, centena);
        InformarResultado(check, numero);
        if(check)
        contador++;
    }

    cout<<"Se ingresaron "<<contador<<" numeros capicuas."<<endl;

    return 0;
}
