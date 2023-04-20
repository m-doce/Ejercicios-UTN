/*En un torneo de fútbol participan K equipos. El torneo se juega con el sistema de todos contra todos.
Por cada partido disputado por un equipo se dispone de la siguiente información:
a) Nro. de equipo,
b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
Desarrollar el programa que imprima:
Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si empata).*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadEquipos, numeroEquipo;
    string resultado;

    cout<<"Indique la cantidad de equipos que participan: "<<endl;
    cin>>cantidadEquipos;

    for(int i=0; i<cantidadEquipos; i++)
    {
        cout<<"Indique el numero del equipo: "<<endl;
        cin>>numeroEquipo;

        int puntajeEquipo = 0;

        for(int j=1; j<cantidadEquipos; j++)
        {
            cout<<"Ingrese el resultado (G, E, P) del equipo en el partido numero "<<j<<":"<<endl;
            cin>>resultado;
            if(resultado == "G")
            {
                puntajeEquipo += 3;
            }
            if(resultado == "E")
            {
                puntajeEquipo += 1;
            }
        }

        cout<<"El equipo numero "<<numeroEquipo<<" obtuvo un total de "<<puntajeEquipo<<" puntos."<<endl;
    }

    return 0;
}
