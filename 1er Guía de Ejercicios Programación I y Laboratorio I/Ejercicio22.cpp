/*Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que finaliza con un Nombre = ‘FIN’,
informar el nombre de la persona con mayor edad y el de la más joven.*/

#include <iostream>
using namespace std;

int main()
{
    string nombre, nombreMayor, nombreMenor;
    int fecha, fechaMayor, fechaMenor;

    cout << "Ingrese un nombre (ingrese 'fin' para finalizar): " << endl;
    cin >> nombre;

    if (nombre != "fin")
    {
        cout << "Ingrese la fecha (en formato AAAAMMDD) de nacimiento de " << nombre << ":" << endl;
        cin >> fecha;
        fechaMayor = fecha;
        fechaMenor = fecha;
    }

    while (nombre != "fin")
    {
        if (fecha >= fechaMenor)
        {
            fechaMenor = fecha;
            nombreMenor = nombre;
        }

        if (fecha <= fechaMayor)
        {
            fechaMayor = fecha;
            nombreMayor = nombre;
        }

        cout << "Ingrese un nombre (ingrese 'fin' para finalizar): " << endl;
        cin >> nombre;

        if (nombre != "fin")
        {
            cout << "Ingrese la fecha de nacimiento de " << nombre << ":" << endl;
            cin >> fecha;
        }
    }

    cout << "La persona mas joven es: " << nombreMenor << endl;
    cout << "La persona mas mayor es: " << nombreMayor << endl;

    return 0;
}
