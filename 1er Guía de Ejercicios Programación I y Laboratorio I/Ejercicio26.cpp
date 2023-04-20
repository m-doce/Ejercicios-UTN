/*Un buque de carga traslada 100 contenedores a tres diferentes puertos del país.
Los puertos se identifican con los números 1, 2 y 3.
De cada contenedor que el buque traslade se registran los siguientes datos:
- Identificación del contenedor
- Peso del contenedor en kg
- Puerto de arribo (un valor de 1 a 3).
Se pide calcular e informar:
1) El peso total que el buque debe trasladar
2) La identificación del contenedor de mayor peso
3) La cantidad de contenedores que debe trasladar a cada puerto*/

#include <iostream>
using namespace std;

int main()

{
    int puertoDeArribo, puerto1 = 0, puerto2 = 0, puerto3 = 0;
    int identificador, idPesoMax = 0;
    int peso = 0;

    int pesoMax = 0, pesoTotal = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese la identificacion del contenedor: " << endl;
        cin >> identificador;

        cout << "Ingrese el peso del contenedor en kg: " << endl;
        cin >> peso;

        cout << "Ingrese el puerto de arribo (1, 2, 3): " << endl;
        cin >> puertoDeArribo;

        pesoTotal += peso;

        if (pesoMax < peso)
        {
            pesoMax = peso;

            idPesoMax = identificador;
        }

        switch (puertoDeArribo)
        {
        case 1:
            puerto1++;
            break;

        case 2:
            puerto2++;
            break;

        case 3:
            puerto3++;
            break;
        }
    }

    cout << "La identificacion del contenedor de mayor peso es " << idPesoMax << ", con un peso de " << pesoMax << "kg. " << endl;
    cout << "El peso total que el buque debe trasladar es de: " << pesoTotal << "kg." << endl;
    cout << "La cantidad de contenedores que debe trasladar al:" << endl
         << "puerto 1 es de: " << puerto1 << "." << endl
         << "puerto 2 es de: " << puerto2 << "." << endl
         << "puerto 3 es de: " << puerto3 << "." << endl;

    return 0;
}
