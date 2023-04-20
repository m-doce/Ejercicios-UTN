/*Dado tres valores determinar e imprimir una leyenda según sea: “Forman triangulo” o “No forman triángulo”.*/

#include <iostream>
using namespace std;

void PedirValores(int &valor1, int &valor2, int &valor3)
{
    cout<<"Ingrese la longitud del primer lado: "<<endl;
    cin>>valor1;
    cout<<"Ingrese la longitud del segundo lado: "<<endl;
    cin>>valor2;
    cout<<"Ingrese la longitud del tercer lado: "<<endl;
    cin>>valor3;
    return;
}

bool EsTriangulo(int lado1, int lado2, int lado3)
{
    if(((lado1 + lado2) > lado3) and ((lado1 + lado3) > lado2) and ((lado2 + lado3) > lado1))
    return true;
    else
    return false;
}

void MostrarMensaje(bool check)
{
    if(check)
    cout<<"Forman triangulo."<<endl;
    else
    cout<<"No forman triangulo."<<endl;
    return;
}

int main()
{
    int lado1, lado2, lado3;
    bool verificacion;

    PedirValores(lado1, lado2, lado3);
    verificacion = EsTriangulo(lado1, lado2, lado3);
    MostrarMensaje(verificacion);

    return 0;
}
