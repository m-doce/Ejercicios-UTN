/*Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.*/

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

int DetrminarTipoDeTriangulo(int lado1, int lado2, int lado3)
{
    if((lado1 == lado2) and (lado1 == lado3)) //es equilátero
    return 1;
    else if((lado1 == lado2) or (lado1 == lado3) or (lado2 == lado3)) //es isóceles
    return 2;
    else //es escaleno
    return 3;
}

void MostrarMensaje(int valor)
{
    if(valor == 1)
    cout<<"Es un triangulo equilatero."<<endl;
    if(valor == 2)
    cout<<"Es un triangulo isoceles."<<endl;
    if(valor == 3)
    cout<<"Es un triangulo escaleno."<<endl;
    return;
}

int main()
{
    int lado1, lado2, lado3, resultado;
    bool check;

    PedirValores(lado1, lado2, lado3);
    check = EsTriangulo(lado1, lado2, lado3);
    if(check)
    {
        resultado = DetrminarTipoDeTriangulo(lado1, lado2, lado3);
        MostrarMensaje(resultado);
    }
    else
    cout<<"Los lados ingresados no forman un triangulo."<<endl;

    return 0;
}
