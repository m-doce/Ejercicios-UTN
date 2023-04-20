/*Se ingresa un conjunto de valores float, cada uno de los cuales representan el sueldo de un empleado,
excepto el último valor que es cero e indica el fin del conjunto.
Se pide desarrollar un programa que determine e informe:
a) Cuántos empleados ganan menos $1.520.
b) Cuántos ganan $1.520 o más pero menos de $2.780.
c) Cuántos ganan $2.780 o más pero menos de $5.999.
d) Cuántos ganan $5.999 o más.*/

#include <iostream>
using namespace std;

int main()
{
    int menorQue1520 = 0;
    int entre1520y2779 = 0;
    int entre2780y5998 = 0;
    int mayorQue5999 = 0;
    float sueldo = 0;

    cout<<"Ingrese el sueldo correspondiente (ingrese 0 para finalizar): "<<endl;
    cin>>sueldo;

    while(sueldo != 0)
    {
        if(sueldo < 0)
        {
            cout<<"Ingresaste un valor negativo."<<endl;
        }
        else if((sueldo > 0) && (sueldo < 1520))
        {
            menorQue1520++;
        }
        else if(sueldo < 2780)
        {
            entre1520y2779++;
        }
        else if(sueldo < 5999)
        {
            entre2780y5998++;
        }
        else if(sueldo >= 5999)
        {
            mayorQue5999++;
        }

        cout<<"Ingrese el sueldo correspondiente: "<<endl;
        cin>>sueldo;
    }

    cout<<"La cantidad de empleados que cobran menos de 1520 es de: "<<menorQue1520<<"."<<endl;
    cout<<"La cantidad de empleados que cobran entre 1520 y 2779 es de: "<<entre1520y2779<<"."<<endl;
    cout<<"La cantidad de empleados que cobran entre 2780 y 5998 es de: "<<entre2780y5998<<"."<<endl;
    cout<<"La cantidad de empleados que cobran mas de 5998 es de: "<<mayorQue5999<<"."<<endl;
    
    return 0;
}
