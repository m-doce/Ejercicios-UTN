/*Ingresar un valor entero N (< 40). A continuación ingresar un conjunto VALOR de N elementos.
Determinar e imprimir el valor máximo y la posición del mismo dentro del conjunto.
Si el máximo no es único, imprimir todas las posiciones en que se encuentra.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    int maximo = -999999;
    cout<<"Indique el tamaño del vector: "<<endl;
    cin>>size;
    int vector[size];
    std::vector<int> posicionesMaximas; //Declaro un vector sin inicializar la cantidad de posiciones

    for(int i=0; i<size; i++)
    {
        cout<<"Ingrese un numero: "<<endl;
        cin>>vector[i];

        if(vector[i] > maximo)
        {
            maximo = vector[i];
            posicionesMaximas.clear(); // Limpio las posiciones anteriores
            posicionesMaximas.push_back(i); // Agrego la nueva posición máxima
        }
        else if(vector[i] == maximo)
        {
            posicionesMaximas.push_back(i); // Agrego la nueva posición del valor máximo repetido
        }
    }

    cout<<"El valor maximo es "<<maximo<<" y se encuentra en la/s posicion/es: ";
    for(int i=0; i<posicionesMaximas.size(); i++)
    {
        cout<<posicionesMaximas[i]<<"; ";
    }

    return 0;
}
