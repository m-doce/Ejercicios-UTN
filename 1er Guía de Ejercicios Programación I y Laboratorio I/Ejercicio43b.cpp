/*Desarrollar:
b) Un procedimiento que reciba el costo en pesos de un abono telefónico, la cantidad de minutos
libres que incluye el abono, el cargo en pesos por minuto excedente y la cantidad de minutos utilizados
por un abonado, retorne la cantidad de minutos excedidos y el monto en pesos a abonar (costo del abono
más minutos excedidos por el costo de minutos excedidos) más el 21% del valor del IVA*/

#include <iostream>
using namespace std;

void CostoServicio(int costoAbono, int minutosLibres, int costoMinutoExtra, int minutosTotales,
    int &minutosExcedidos, int &totalAPagar)
{
    minutosExcedidos = minutosTotales - minutosLibres;

    if(minutosExcedidos < 0)
    minutosExcedidos = 0;

    totalAPagar = (costoAbono + (minutosExcedidos * costoMinutoExtra)) * 1.21; // *1.21 = sumar IVA

    cout<<"La cantidad de minutos excedidos es de: "<<minutosExcedidos<<" minutos."<<endl;
    cout<<"El monto total a abonar es de $"<<totalAPagar<<"."<<endl;
}

int main()
{
    int costoAbono, minutosLibres, costoMinutoExtra, minutosTotales, minutosExcedidos, totalAPagar;

    cout<<"Indique el costo del abono: "<<endl;
    cin>>costoAbono;
    cout<<"Indique la cantidad de minutos libres incluidos: "<<endl;
    cin>>minutosLibres;
    cout<<"Indique el costo por minuto extra: "<<endl;
    cin>>costoMinutoExtra;
    cout<<"Indique la cantidad de minutos totales usados: "<<endl;
    cin>>minutosTotales;

    CostoServicio(costoAbono, minutosLibres, costoMinutoExtra, minutosTotales, minutosExcedidos, totalAPagar);

    return 0;
}
