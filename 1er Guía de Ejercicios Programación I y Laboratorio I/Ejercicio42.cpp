/*De un censo realizado en una población se conocen los siguientes datos:
- Día de nacimiento (2 dig.)
- Mes (2 dig.)
- Año (4 dig.)
- Sexo ('M'=masc. 'F'=fem.)
Con estos datos de cada habitante se forma un lote finalizado con un día cero.
Desarrollar el programa que determine e imprima:
1) Cuántos nacimientos hubo en el mes de octubre de todos los años.
2) Cuántos nacimientos hubo antes del 9 de julio de 1990.
3) Cuántos nacimientos de mujeres hubo en la primavera del 1982.
4) Sexo de la persona más vieja (solo existe una).*/

#include <iostream>
using namespace std;


int ArmarFecha(int dia, int mes, int anio);
bool NacioEnOctubre(int mes);
bool NacioAntesDel9deJulioDel90(int fecha);
bool MujerNacioEnPrimaveraDel82(string sexo, int fecha);
void SexoDeLaPersonaMayor(int fecha, float &mayor, string sexo, string &sexoMayor);
void InformarResultados(int resultado1, int resultado2, int resultado3, string resultado4);


int main()
{
    int dia, mes, anio, fecha;
    float pesonaMayor = INT64_MAX;
    string sexo, sexoMayor;
    int nacidosEnOctubre = 0, nacidosAntes9Julio90 = 0, mujeresNacidasPrimavera82;


    cout<<"Ingrese el dia de nacimiento (ingrese 0 para finalizar): "<<endl;
    cin>>dia;

    while(dia != 0)
    {
        cout<<"Ingrese el mes de nacimiento: "<<endl;
        cin>>mes;
        cout<<"Ingrese el anio de nacimiento: "<<endl;
        cin>>anio;
        cout<<"Ingrese el sexo (M, F): "<<endl;
        cin>>sexo;

        fecha = ArmarFecha(dia, mes, anio);

        if(NacioEnOctubre(mes))
        nacidosEnOctubre++;

        if(NacioAntesDel9deJulioDel90(fecha))
        nacidosAntes9Julio90++;

        if(MujerNacioEnPrimaveraDel82(sexo, fecha))
        mujeresNacidasPrimavera82++;

        SexoDeLaPersonaMayor(fecha, pesonaMayor, sexo, sexoMayor);

        cout<<"Ingrese el dia de nacimiento (ingrese 0 para finalizar): "<<endl;
        cin>>dia;
    }

    InformarResultados(nacidosEnOctubre, nacidosAntes9Julio90, mujeresNacidasPrimavera82, sexoMayor);

    return 0;
}


int ArmarFecha(int dia, int mes, int anio)
{
    int fecha = dia + (mes * 100) + (anio * 10000);
    return fecha;
}

bool NacioEnOctubre(int mes)
{
    if(mes == 10)
    return true;
    else
    return false;
}

bool NacioAntesDel9deJulioDel90(int fecha)
{
    if(fecha < 19900709)
    return true;
    else
    return false;
}

bool MujerNacioEnPrimaveraDel82(string sexo, int fecha)
{
    if((sexo == "F") and (fecha >= 19820921) and (fecha <= 19821220))
    return true;
    else
    return false;
}

void SexoDeLaPersonaMayor(int fecha, float &mayor, string sexo, string &sexoMayor)
{
    if(fecha <= mayor)
    {
        mayor = fecha;
        sexoMayor = sexo;
    }
    return;
}

void InformarResultados(int resultado1, int resultado2, int resultado3, string resultado4)
{
    cout<<"Durante todos los anios nacieron "<<resultado1<<" personas en Octubre."<<endl;
    cout<<"Antes del 9 de Julio de 1990 nacieron "<<resultado2<<" personas."<<endl;
    cout<<"Durante la primavera de 1982 nacieron "<<resultado3<<" mujeres."<<endl;
    cout<<"El sexo de la persona de mayor edad es: "<<resultado4<<"."<<endl;
    return;
}
