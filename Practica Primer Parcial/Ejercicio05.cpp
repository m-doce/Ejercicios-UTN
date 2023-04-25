/*Desarrollar una aplicación que dado un número aleatorio, obtenido mediante la invocación a la función
generaNumeroAleatorio (ya creada), permita al usuario adivinar cuál es dicho número. Para esto el usuario contará
con 3 oportunidades. La aplicación deberá proporcionar pistas al usuario por cada jugada. Estas pistas deberán
indicar si el número ingresado es mayor o menor que el número.
Si en alguno de esos intentos el usuario acierta el número, la aplicación mostrará un mensaje felicitando al usuario.
Si al finalizar los 3 intentos el usuario no acertó, la aplicación mostrará el siguiente mensaje
"Juego Finalizado. El número era: <número>"*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int GenerarNumeroAleatorio() //Devuelve un numero aleatorio entre 1 y 100
{
    srand(time(0));
    return ((rand() % 100) + 1);
}

int main()
{
    int numRandom, numUser, contador = 2;

    numRandom = GenerarNumeroAleatorio();

    cout<<"Ingrese un numero: "<<endl;
    cin>>numUser;

    while((numUser != numRandom) and (contador > 0))
    {
        if(numUser < numRandom)
        cout<<"El numero que ingresaste es menor!"<<endl;
        else
        cout<<"El numero que ingresaste es mayor!"<<endl;

        contador--;

        cout<<"Ingrese un numero: "<<endl;
        cin>>numUser;
    }

    if(numUser != numRandom)
    cout<<"Juego finalizado. El numero era: "<<numRandom<<"."<<endl;
    else
    cout<<"Felicidades, acertaste el numero!"<<endl;


    return 0;
}


/* VERSION USANDO FOR Y BREAK
int main()
{
    int numRandom, numUser;

    numRandom = GenerarNumeroAleatorio();

    for(int i=0; i<3; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>numUser;

        if(numUser == numRandom)
        {
            cout<<"Felicidades, acertaste el numero!"<<endl;
            break;
        }
        else if(numUser < numRandom)
        cout<<"El numero que ingresaste es menor!"<<endl;
        else
        cout<<"El numero que ingresaste es mayor!"<<endl;
    }

    if(numUser != numRandom)
    cout<<"Juego finalizado. El numero era: "<<numRandom<<"."<<endl;

    return 0;
}
*/
