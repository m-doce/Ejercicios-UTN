/*Desarrollar el procedimiento
string Tendencia(int A, int B)
que dados dos valores A y B, retorne una cadena de acuerdo al siguiente cuadro:
B - A < 0 Decreciente
B - A < 2% de A Estable
B - A < 5% de A Leve ascenso
Resto En ascenso*/

#include <iostream>
using namespace std;

string Tendencia(int, int);
void PedirValores(int &, int &);


int main()
{
    string tendencia = "";
    int num1, num2;

    PedirValores(num1, num2);
    tendencia = Tendencia(num1, num2);

    cout<<tendencia;

    return 0;
}


string Tendencia(int numA, int numB)
{
    if((numB - numA) < 0)
    return "Decreciente";
    else if((numB - numA) < (0.02 * numA))
    return "Estable";
    else if((numB - numA) < (0.05 * numA))
    return "Leve ascenso";
    else
    return "En ascenso";
}

void PedirValores(int &num1, int &num2)
{
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    return;
}
