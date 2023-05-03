/*Una agencia de robótica lo contrata para desarrollar una aplicación que permita controlar los movimientos de un
robot. Para esto la aplicación debe permitir ingresar la dirección ('F' - Adelante, 'B' - Atrás, 'L' - Izquierda, 'R' - Derecha)
y la cantidad de metros a avanzar en dicha dirección.
A su vez, la agencia quiere monitorear la autonomía del robot. El robot cuenta con una batería de 1000 unidades y
los consumos de la batería se establecen de la siguiente manera:
● Si la cantidad de metros es un número par, la batería se descuenta en (cantidad de metros / 4) unidades
● Si la cantidad de metros es un número impar, la batería se descuenta en (cantidad de metros / 3) unidades
El ingreso de datos finaliza cuando el robot agote su batería o el usuario ingrese la dirección ‘E’.

Se pide informar:
a. Cantidad total de metros recorridos.
b. Cantidad total de metros avanzados.
c. La dirección en la que se recorrió el trayecto más largo.
Aclaración para el punto b: considere que el robot inicia en el punto (0, 0) de un eje cartesiano, donde los pasos
hacia adelante y los pasos hacia la derecha se consideran positivos mientras que los pasos hacia atrás y los pasos
hacia la izquierda se consideran negativos.*/

#include <iostream>
using namespace std;

void MoverRobot(int metros, string direccion, int &totalMetrosRecorridos, int &totalMetrosAvanzados)
{ // Acumulo o descuento metros según se avance o retroceda
    totalMetrosRecorridos += metros;
    if ((direccion == "F") or (direccion == "R"))
        totalMetrosAvanzados += metros;
    else if ((direccion == "B") or (direccion == "L"))
        totalMetrosAvanzados -= metros;
    return;
}

void ActualizarBateria(int &bateria, int metros, int &consumo)
{ // Descuento unidades de batería según los metros avanzados
    if ((metros % 2) == 0)
    {
        consumo = metros / 4;
        if (metros == 2)
            consumo = 2;
    }
    else
    {
        consumo = metros / 3;
        if (metros == 3)
            consumo = 3;
        else if (metros == 1)
            consumo = 1;
    }

    bateria -= consumo;

    return;
}

bool HayBateriaSuficiente(int bateria)
{ // Devuelvo un bool cuando la batería es suficiente para mover el robot
    if (bateria >= 0)
        return true;
    else
        return false;
}

void TrayectoMasLargoDeUna(int metros, int &mayorMetros, string direccion, string &direccionMasLarga)
{ // Comparo y guardo la mayor distancia avanzada en un solo movimiento
    if (metros > mayorMetros)
    {
        mayorMetros = metros;
        direccionMasLarga = direccion;
    }
    return;
}

void AcumularMetrosEnLaMismaDireccion(string direccion, int metros, int &ultimaDistancia, int &metrosF, int &metrosB,
                                      int &metrosR, int &metrosL, int &maxMetrosF, int &maxMetrosB, int &maxMetrosR, int &maxMetrosL)
{ // Voy acumulando metros cuando coinciden las dir, y reseteo cuando no coinciden (pero sin perder el max obtenido)
    if (direccion == "F")
    {
        metrosF = metrosF + metros + ultimaDistancia;
        if (metrosF > maxMetrosF)
            maxMetrosF = metrosF;
    }
    else if (direccion == "B")
    {
        metrosB = metrosB + metros + ultimaDistancia;
        if (metrosB > maxMetrosB)
            maxMetrosB = metrosB;
    }
    else if (direccion == "R")
    {
        metrosR = metrosR + metros + ultimaDistancia;
        if (metrosR > maxMetrosR)
            maxMetrosR = metrosR;
    }
    else if (direccion == "L")
    {
        metrosL = metrosL + metros + ultimaDistancia;
        if (metrosL > maxMetrosL)
            maxMetrosL = metrosL;
    }

    ultimaDistancia = 0; // La reseteo para no volver a sumarla, ya q se suman directamente los metros
}

void ResetearValoresAcumulados(int metros, int &metrosF, int &metrosB, int &metrosR, int &metrosL, int &ultimaDistancia)
{ // Reseteo los valores cuando las dir no son consecutivas para volver a contar de 0
    metrosF = 0;
    metrosB = 0;
    metrosR = 0;
    metrosL = 0;

    ultimaDistancia = metros; // La guardo para sumar a la proxima que si coincidan las dir
}

void DefinirTrayectoMasLargo(int maxMetrosF, int maxMetrosB, int maxMetrosR, int maxMetrosL, string &dirMasLargoAcumulado, 
                            int &trayectoMasLargoAcumulado, int trayectoMasLargo, string &dirMasLargo, string dirMasLargoDeUna)
{// Comparo la cantidad de metros, y asigno su valor y dir a las variables
    if ((maxMetrosF > maxMetrosB) && (maxMetrosF > maxMetrosR) && (maxMetrosF > maxMetrosL))
    {
        dirMasLargoAcumulado = "F";
        trayectoMasLargoAcumulado = maxMetrosF;
    }
    else if ((maxMetrosB > maxMetrosR) && (maxMetrosB > maxMetrosL))
    {
        dirMasLargoAcumulado = "B";
        trayectoMasLargoAcumulado = maxMetrosB;
    }
    else if (maxMetrosR > maxMetrosL)
    {
        dirMasLargoAcumulado = "R";
        trayectoMasLargoAcumulado = maxMetrosR;
    }
    else
    {
        dirMasLargoAcumulado = "L";
        trayectoMasLargoAcumulado = maxMetrosL;
    }

    if (trayectoMasLargoAcumulado > trayectoMasLargo)
    {
        dirMasLargo = dirMasLargoAcumulado;
    }
    else
    {
        dirMasLargo = dirMasLargoDeUna;
    }
}

int main()
{
    int metros, bateria = 1000, metrosRecorridos = 0, metrosAvanzados = 0, trayectoMasLargo = 0, trayectoMasLargoAcumulado = 0, consumo = 0;
    int metrosF = 0, metrosB = 0, metrosR = 0, metrosL = 0;
    int maxMetrosF = 0, maxMetrosB = 0, maxMetrosR = 0, maxMetrosL = 0, ultimaDistancia = 0;
    string direccion, dirMasLargo, dirMasLargoDeUna, dirMasLargoAcumulado, dirAnterior;
    bool bateriaCheck = true;

    cout << "Ingrese la cantidad de metros que desea moverse: " << endl;
    cin >> metros;
    cout << "Indique en que direccion (F, B, L, R) desea moverse: " << endl;
    cin >> direccion;

    while ((bateria > 0) and (direccion != "E"))
    {
        ActualizarBateria(bateria, metros, consumo);
        bateriaCheck = HayBateriaSuficiente(bateria);
        if (bateriaCheck)
        {
            MoverRobot(metros, direccion, metrosRecorridos, metrosAvanzados);
            TrayectoMasLargoDeUna(metros, trayectoMasLargo, direccion, dirMasLargoDeUna);

            if (dirAnterior == direccion)
                AcumularMetrosEnLaMismaDireccion(direccion, metros, ultimaDistancia, metrosF, metrosB, metrosR, metrosL, maxMetrosF, maxMetrosB, maxMetrosR, maxMetrosL);
            else
                ResetearValoresAcumulados(metros, metrosF, metrosB, metrosR, metrosL, ultimaDistancia);
        }
        else
        {
            cout << "No hay bateria suficiente para recorrer esa distancia." << endl;
            bateria += consumo;
        }

        dirAnterior = direccion;

        cout << "Ingrese la cantidad de metros que desea moverse: " << endl;
        cin >> metros;
        cout << "Indique en que direccion (F, B, L, R) desea moverse: " << endl;
        cin >> direccion;
    }
    
    DefinirTrayectoMasLargo(maxMetrosF, maxMetrosB, maxMetrosR, maxMetrosL, dirMasLargoAcumulado, trayectoMasLargoAcumulado, trayectoMasLargo, dirMasLargo, dirMasLargoDeUna);

    cout << "Fin del recorrido." << endl;
    cout << "La cantidad total de metros recorridos fue: " << metrosRecorridos << endl;
    cout << "La cantidad total de metros avanzados fue: " << metrosAvanzados << endl;
    cout << "La direccion en la que se recorrio el trayecto mas largo fue: " << dirMasLargo << endl;

    return 0;
}
