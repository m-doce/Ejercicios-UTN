/*A partir de un valor entero ingresado por teclado, se pide informar:
a) La quinta parte de dicho valor
b) El resto de la división por 5
c) La séptima parte del resultado del punto a)*/

#include <iostream>
using namespace std;


void PedirValor(int &numero);
float QuintaParte(int valor);
int RestoDividirPor5(int valor);
float SeptimaPartePuntoA(float valor);
void InformarResultados(int &numero, float &resultado1, int &resultado2, float &resultado3);


int main()
{
    int numero, restoDivisionPor5;
    float quintaParte, septimaParte;

    PedirValor(numero);
    quintaParte = QuintaParte(numero);
    restoDivisionPor5 = RestoDividirPor5(numero);
    septimaParte = SeptimaPartePuntoA(quintaParte);
    InformarResultados(numero, quintaParte, restoDivisionPor5, septimaParte);
    
    return 0;
}


void PedirValor(int &numero)
{
    cout<<"Ingrese un numero entero: "<<endl;
    cin>>numero;
    return;
}

float QuintaParte(int valor)
{
    return (float)valor / 5;
}

int RestoDividirPor5(int valor)
{
    return valor % 5;
}

float SeptimaPartePuntoA(float valor)
{
    return valor / 7;
}

void InformarResultados(int &numero, float &resultado1, int &resultado2, float &resultado3)
{
    cout<<"El numero ingresado fue: "<<numero<<"."<<endl;
    cout<<"Su quinta parte es: "<<resultado1<<"."<<endl;
    cout<<"El resto de la division por cinco es: "<<resultado2<<"."<<endl;
    cout<<"La septima parte del  primer resultado es: "<<resultado3<<"."<<endl;
    return;
}
