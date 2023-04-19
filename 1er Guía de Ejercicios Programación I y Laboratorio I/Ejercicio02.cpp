/*Dada una terna de números naturales que representan al día, al mes y al año de una determinada
fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).*/

#include <iostream>
using namespace std;

void PedirDatos(int &day, int &month, int &year)
{
    cout<<"Ingrese el dia: "<<endl;
    cin>>day;
    cout<<"Ingrese el mes: "<<endl;
    cin>>month;
    cout<<"Ingrese el anio: "<<endl;
    cin>>year;
    return;
}

void CalcularFecha(int day, int month, int year, int &date)
{
    date = (year * 10000) + (month * 100) + day;
    return;
}

void MostrarFecha(int date)
{
    cout<<"La fecha es: "<<date<<endl;
    return;
}



int main()
{
    int date, day, month, year;

    PedirDatos(day, month, year);
    CalcularFecha(day, month, year, date);
    MostrarFecha(date);

    return 0;
}
