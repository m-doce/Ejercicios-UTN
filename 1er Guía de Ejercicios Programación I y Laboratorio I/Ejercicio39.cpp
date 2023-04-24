/*Desarrollar un procedimiento tal que dada una hora (HHMMSS) y un tiempo también en formato HHMMSS
devuelva la nueva hora que surge de sumar el tiempo a la hora inicial, considere también si cambió el día.*/

#include <iostream>
using namespace std;

void SumaDeTiempos(int, int, int &);
void PedirTiempos(int &, int &);

int main()
{
    int horaInicial, tiempoParaSumar, horaResultante;

    PedirTiempos(horaInicial, tiempoParaSumar);
    SumaDeTiempos(horaInicial, tiempoParaSumar, horaResultante);
    cout<<"El horario resultante es: "<<horaResultante;

    return 0;
}

void SumaDeTiempos(int horarioBase, int horarioASumar, int &horarioFinal)
{
    int hhBase = horarioBase / 10000;
    int mmBase = (horarioBase / 100) % 100;
    int ssBase = horarioBase % 100;

    int hhSuma = horarioASumar / 10000;
    int mmSuma = (horarioASumar / 100) % 100;
    int ssSuma = horarioASumar % 100;

    int totalSegundosBase = ((hhBase * 60) * 60) + (mmBase * 60) + ssBase;
    int totalSegundosSuma = ((hhSuma * 60) * 60) + (mmSuma * 60) + ssSuma;

    int segundosTotales = totalSegundosBase + totalSegundosSuma;

    int hhResultado = segundosTotales / 3600;
    int mmResultado = (segundosTotales / 60) - (hhResultado * 60);
    int ssResultado = segundosTotales - (hhResultado * 3600) - (mmResultado * 60);

    if(hhResultado > 23)
    hhResultado = hhResultado % 24;
    
    horarioFinal = (hhResultado * 10000) + (mmResultado * 100) + ssResultado;

    return;
}

void PedirTiempos(int &horaBase, int &tiempo)
{
    cout << "Ingrese la hora (HHMMSS): " << endl;
    cin >> horaBase;
    cout << "Ingrese el tiempo (HHMMSS) que desee sumar: " << endl;
    cin >> tiempo;
    return;
}
