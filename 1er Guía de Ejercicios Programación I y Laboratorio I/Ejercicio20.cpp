/*Dados 10 valores informar el mayor*/

#include <iostream>
using namespace std;

int main()
{
    float valor;
    float elMayor = INT64_MIN;

    for(int i=0; i<10; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>valor;

        if(valor > elMayor)
        {
            elMayor = valor;
        }
    }

    cout<<endl<<"El mayor numero ingresado es: "<<elMayor<<"."<<endl;

    return 0;
}
