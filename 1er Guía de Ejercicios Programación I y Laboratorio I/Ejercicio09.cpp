/*Dados un mes y el año correspondiente informar cuántos días tiene el mes.*/

#include <iostream>
using namespace std;

void PedirDatos(int &mes, int &anio);
int ChequearCantidadDeDias(int mes, int anio);
void InformarResultado(int mes, int anio, int dias);


int main()
{
    int dias, mes, anio;

    PedirDatos(mes, anio);
    dias = ChequearCantidadDeDias(mes, anio);
    InformarResultado(mes, anio, dias);

    return 0;
}


void PedirDatos(int &mes, int &anio)
{
    cout<<"Ingrese el mes (MM): "<<endl;
    cin>>mes;
    cout<<"Ingrese el anio (AAAA): "<<endl;
    cin>>anio;
    return;
}

int ChequearCantidadDeDias(int mes, int anio)
{
    if(((anio % 4) == 0) and (mes == 2))
    return 29;

    switch(mes)
    {
        case 1:
        return 31;
        break;

        case 2:
        return 28;
        break;

        case 3:
        return 31;
        break;

        case 4:
        return 30;
        break;

        case 5:
        return 31;
        break;

        case 6:
        return 30;
        break;

        case 7:
        return 31;
        break;

        case 8:
        return 31;
        break;

        case 9:
        return 30;
        break;

        case 10:
        return 31;
        break;

        case 11:
        return 30;
        break;

        case 12:
        return 31;
        break;
    }
}

void InformarResultado(int mes, int anio, int dias)
{
    cout<<"El mes "<<mes<<" del anio "<<anio<<" tiene "<<dias<<" dias."<<endl;
}
