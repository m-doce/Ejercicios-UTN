/*Una empresa lo contrata para construir un sistema que le permita calcular las estadísticas de sus ventas mensuales.
Para ello, los empleados de la empresa ingresan por cada venta:
● Número de factura
● La fecha en formato AAAAMMDD
● Monto total facturado.
El ingreso de datos finaliza con un número de factura negativo.
Se desea obtener:
a. El día en que ocurrió la factura de mayor monto.
b. El número de factura de la factura de menor monto.
c. El promedio de facturación del mes.*/

#include <iostream>
using namespace std;

int main()
{
    int numeroDeFactura, fecha, totalFactura;
    int mayorImporte = 0, fechaMayor, idFacturaMenor;
    float facturacionEnTotal = 0, promedioMensual, cantidadFacturas = 0, menorImporte = INT32_MAX;

    cout<<"Ingrese el numero de factura: "<<endl;
    cin>>numeroDeFactura;

    while(numeroDeFactura >= 0)
    {
        cout<<"Ingrese la fecha (AAAAMMDD) de facturacion: "<<endl;
        cin>>fecha;
        cout<<"Ingrese el monto facturado: "<<endl;
        cin>>totalFactura;

        if(totalFactura > mayorImporte)
        {
            mayorImporte = totalFactura;
            fechaMayor = fecha;
        }

        if(totalFactura < menorImporte)
        {
            menorImporte = totalFactura;
            idFacturaMenor = numeroDeFactura;
        }

        facturacionEnTotal += totalFactura;
        cantidadFacturas++;

        cout<<"Ingrese el numero de factura: "<<endl;
        cin>>numeroDeFactura;
    }

    promedioMensual = facturacionEnTotal / cantidadFacturas;

    cout<<"La fecha en que ocurrio la factura de mayor monto fue: "<<fechaMayor<<endl;
    cout<<"El numero de factura de la factura de menor monto es: "<<idFacturaMenor<<endl;
    cout<<"El promedio de la facturacion mensual es: "<<promedioMensual<<endl;

    return 0;
}
