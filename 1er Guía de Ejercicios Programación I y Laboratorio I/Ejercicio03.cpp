/*Dada un número entero de la forma (AAAAMMDD), que representa una fecha valida mostrar el dia, mes y
año que representa.*/

#include <iostream>
using namespace std;

void PedirFecha(int &date)
{
    cout<<"Ingrese una fecha en el formato AAAAMMDD: "<<endl;
    cin>>date;
    return;
}

void SepararFecha(int date, int &day, int &month, int &year)
{
    day = date % 100;
    month = (date % 10000) / 100;
    year = date / 10000;
    return;    
}

void MostrarFechaSeparada(int &day, int &month, int &year)
{
    cout<<"El dia es: "<<day<<endl<<"El mes es: "<<month<<endl<<"El anio es: "<<year<<endl;
}

int main()
{
    int date, day, month, year;

    PedirFecha(date);
    SepararFecha(date, day, month, year);
    MostrarFechaSeparada(day, month, year);

    return 0;
}
