/*Informar los primeros 100 números naturales y su sumatoria*/

#include <iostream>
using namespace std;

int main()
{
    int sumaTotal = 0;
    int numero = 1;

    while (numero < 101)
    {
        sumaTotal += numero;
        cout<<numero<<endl;
        numero++;
    }

    cout<<"La suma de los primeros 100 numeros naturales da como resultado: "<<sumaTotal;        

    return 0;
}
