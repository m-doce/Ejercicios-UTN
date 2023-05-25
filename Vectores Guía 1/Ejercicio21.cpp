/*Ingresar las edades de los alumnos de un curso e informar cuántos alumnos tienen una edad
que supera la edad promedio. Se desconoce la cantidad de alumnos a procesar pero se sabe que
a lo sumo se inscriben 50 alumnos en un curso.*/

#include <iostream>
using namespace std;

int main()
{
    int cantidadAlumnos;
    cout<<"Indique la cantidad de alumnos del curso: ";
    cin>>cantidadAlumnos;
    int edadesAlumnos[cantidadAlumnos];
    float sumatoriaEdades = 0, promedioEdades;
    int mayoresAlPromedio = 0;

    for(int i=0; i<cantidadAlumnos; i++)
    {//Almaceno las edades y las voy acumulando para calcular el promedio
        cout<<"Ingrese la edad del alumno ["<<i<<"]: ";
        cin>>edadesAlumnos[i];
        sumatoriaEdades += edadesAlumnos[i];
    }
    promedioEdades = sumatoriaEdades / cantidadAlumnos;

    for(int i=0; i<cantidadAlumnos; i++)
    {//Comparo cada edad contra el promedio, y sumo por cada uno que la supere
        if(edadesAlumnos[i] > promedioEdades)
        {
            mayoresAlPromedio++;
        }
    }

    cout<<"La cantidad de alumnos que supera la edad promedio es de: "<<mayoresAlPromedio<<endl;

    return 0;
}
