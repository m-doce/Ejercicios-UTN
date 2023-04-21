/*Desarrollar:
a) Una función que reciba un número natural de 4 dígitos en formato de HHMM que corresponde a un tiempo
determinado en horas y minutos, retorne ese tiempo en minutos.*/

#include <iostream>
using namespace std;

int ConvertirHHMMaMinutos(int horario)
{
    int minutos, horas, totalMinutos;
    horas = horario / 100;
    minutos = horario % 100;
    totalMinutos = (horas * 60) + minutos;
    return totalMinutos;
}

int main()
{
    int horario;
    
    cout<<"Ingrese un tiempo en forato HHMM para convertirlo a minutos: "<<endl;
    cin>>horario;

    cout<<"El timpo ingresado equivale a: "<<ConvertirHHMMaMinutos(horario)<<" minutos."<<endl;

    return 0;
}
