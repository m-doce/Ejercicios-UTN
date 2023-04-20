/*Se realiza una inspección en una fábrica de pinturas, y se detectaron 20 infracciones. De cada infracción se
tomó nota de los siguientes datos:
- Tipo de Infracción (1, 2, 3, ó 4)
- Motivo de la infracción
- Valor de la multa
- Gravedad de la infracción (‘L’,‘M’, ‘G’)
Se pide informar al final del proceso:
• Los valores totales de la multa a pagar de acuerdo al tipo de gravedad.
• La leyenda “Clausurar fábrica” si la cantidad de infracciones 3 y 4 con gravedad “G” sean mayor a 3.*/

#include <iostream>
using namespace std;

int main()
{
    int tipoInfraccion;
    int cantidadInfraccionesTipo3 = 0;
    int cantidadInfraccionesTipo4 = 0;
    float valorMulta;
    float valorTotalMultas = 0;
    string motivoInfraccion;
    char gravedadInfraccion;

    for(int i=0; i < 20; i++)
    {
        cout<<"Ingrese el tipo de infraccion(1, 2, 3 o 4): "<<endl;
        cin>>tipoInfraccion;
        cout<<"Ingrese el motivo de la infraccion: "<<endl;
        cin>>motivoInfraccion; //No funciona si se usan espacios
        cout<<"Ingrese el monto a pagar de multa: "<<endl;
        cin>>valorMulta;
        valorTotalMultas += valorMulta;
        cout<<"Indique la gravedad de la infraccion('L', 'M' o 'G')"<<endl;
        cin>>gravedadInfraccion;
        switch (tipoInfraccion)
        {
        case 3:
            if(gravedadInfraccion == 'G')
            {
                cantidadInfraccionesTipo3++;
            }
            break;
        
        case 4:
            if(gravedadInfraccion == 'G')
            {
                cantidadInfraccionesTipo4++;
            }
            break;
        
        default:
            break;
        }
    }

    cout<<"El valor total a pagar de multas es: $"<<valorTotalMultas<<"."<<endl;
    if((cantidadInfraccionesTipo3 + cantidadInfraccionesTipo4) > 3)
    {
        cout<<"Clausurar fabrica."<<endl;
    }

    return 0;
}
