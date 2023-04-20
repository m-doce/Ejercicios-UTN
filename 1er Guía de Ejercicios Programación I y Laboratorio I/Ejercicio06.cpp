/*Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas
a informar de acuerdo al proceso solicitado.*/

#include <iostream>
using namespace std;

void PedirFechas(int &fecha1, int &fecha2)
{
    cout<<"Ingrese una fecha (con el formato AAAAMMDD): "<<endl;
    cin>>fecha1;
    cout<<"Ingrese otra fecha (con el formato AAAAMMDD): "<<endl;
    cin>>fecha2;
    return;
}

int CalcularFechaMasReciente(int fecha1, int fecha2)
{
    if(fecha1 > fecha2)
    return fecha1;
    else
    return fecha2;
}

void InformarResultado(int &resultado)
{
    cout<<"La fecha mas reciente entre las ingresadas es: "<<resultado<<"."<<endl;
    return;
}

int main()
{
    int fecha1, fecha2, fechaMasReciente;

    PedirFechas(fecha1, fecha2);
    fechaMasReciente = CalcularFechaMasReciente(fecha1, fecha2);
    InformarResultado(fechaMasReciente);

    return 0;
}
