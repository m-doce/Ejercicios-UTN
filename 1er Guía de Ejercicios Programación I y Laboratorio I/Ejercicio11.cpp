/*Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
❖ ‘menor’ si la edad es menor o igual a 12
❖ ‘cadete’ si la edad está comprendida entre 13 y 18
❖ ‘juvenil’ si la edad es mayor que 18 y no supera los 26
❖ ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores*/

#include <iostream>
using namespace std;

void PedirDatos(int &valor)
{
    cout<<"Ingrese la edad: "<<endl;
    cin>>valor;
}

int EvaluarEdad(int valor)
{
    if(valor <= 12)
    return 1; //es menor
    else if(valor <= 17)
    return 2; //es cadete
    else if(valor <= 25)
    return 3; //es juvenil
    else
    return 4; //es mayor
}

void MostrarMensaje(int valor)
{
    switch(valor)
    {
        case 1:
        cout<<"Menor."<<endl;
        break;
        return;

        case 2:
        cout<<"Cadete."<<endl;
        break;
        return;
        
        case 3:
        cout<<"Juvenil."<<endl;
        break;
        return;

        case 4:
        cout<<"Mayor."<<endl;
        break;
        return;
    }
}

int main()
{
    int edad, check;

    PedirDatos(edad);
    check = EvaluarEdad(edad);
    MostrarMensaje(check);

    return 0;
}
