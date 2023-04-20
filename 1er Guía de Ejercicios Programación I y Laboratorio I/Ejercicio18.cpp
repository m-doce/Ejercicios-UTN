/*Dado un valor M determinar y emitir un listado con los M primeros múltiplos de 3 que no lo sean de 5,
dentro del conjunto de los números naturales.*/

#include <iostream>
using namespace std;

int main()
{
    int m;
    int multiplo = 0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>m;
    cout<<endl;

    for(int i=0; i<m; i++)
    {
        multiplo += 3;
        if((multiplo % 5) != 0)
        {
            cout<<multiplo<<endl;
        }
        else
        {
            i--;
        }
    }

    return 0;
}
