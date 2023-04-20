/*El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de familia. De cada familia conoce:
domicilio, tipo de vivienda (‘C’:casa, ‘D’:departamento), y cantidad de integrantes.
De cada integrante de la familia se conoce: nombre y apellido, edad, sexo (‘F’, ‘M’), nivel de estudios
alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario), y un indicador (‘I’:
incompleto, ‘C’: completo) que se refiere al ítem anterior.
Los datos finalizan cuando la cantidad de integrantes sea igual a cero.
Se pide emitir un listado con los resultados:
a) los datos de los encuestados que hayan completado los estudios primarios
b) el porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean
estudios)
c) el domicilio de la familia con mayor cantidad de integrantes que viven en departamento
d) edad promedio de cada familia y de la ciudad
e) cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.
f) porcentaje de encuestados de sexo femenino y masculino.*/

#include <iostream>
using namespace std;

int main()
{
    int integrantes, edad, porcentajeAnalfabetismo, promedioEdadesFlia, promedioEdadesCiudad, porcentajeMasculino, porcentajeFemenino;
    int cantidadTotalPersonas = 0, primarioCompleto = 0, mayoresDe10 = 0, analfabetos = 0, maxIntegrantesDepto = 0;
    int sumaEdadesFlia = 0, sumaEdadesCiudad = 0, totalMasculino = 0, totalFemenino = 0;
    int primarioInc = 0, secundarioInc = 0, terciarioInc = 0, universitarioInc = 0;
    string tipoDomicilio, sexo, nivelEstudios, indicadorEstudios;
    string nombre, apellido, domicilio, domicilioMasIntegrantes;

    cout<<"Indique la cantidad de integrantes de la familia: "<<endl;
    cin>>integrantes;

    while(integrantes > 0)
    {
        cout<<"Indique el domicilio: "<<endl;
        cin>>domicilio; //No funciona si se ingresan espacios (válido para todos los ingresos de strings)
        cout<<"Indique el tipo de domicilio (C para casa, D para departamento): "<<endl;
        cin>>tipoDomicilio;

        for(int i=0; i<integrantes; i++)
        {
            cantidadTotalPersonas++;

            cout<<"Ingrese el nombre: "<<endl;
            cin>>nombre;
            cout<<"Ingrese el apellido: "<<endl;
            cin>>apellido;
            cout<<"Ingrese la edad: "<<endl;
            cin>>edad;
            cout<<"Ingrese el sexo (M, F): "<<endl;
            cin>>sexo;
            cout<<"Ingrese el nivel de estudios (N, P, S, T, U): "<<endl;
            cin>>nivelEstudios;
            if(nivelEstudios != "N")
            {
                cout<<"Indique si el nivel de estudios esta o no completo (C, I): "<<endl;
                cin>>indicadorEstudios;
            }


            if(nivelEstudios != "N" and (nivelEstudios != "P" or indicadorEstudios == "C"))
            {
                primarioCompleto++;
            }

            if(edad >= 10)
            {
                mayoresDe10++;
                if(nivelEstudios == "N")
                {
                    analfabetos++;
                }
            }

            if((tipoDomicilio == "D") and (maxIntegrantesDepto < integrantes))
            {
                maxIntegrantesDepto = integrantes;
                domicilioMasIntegrantes = domicilio;
            }

            if(sexo == "M")
            {
                totalMasculino++;
            }
            else
            {
                totalFemenino++;
            }

            if(indicadorEstudios == "I")
            {
                if(nivelEstudios == "P")
                    primarioInc++;

                if(nivelEstudios == "S")
                    secundarioInc++;
                
                if(nivelEstudios == "T")
                    terciarioInc++;

                if(nivelEstudios == "U")
                    universitarioInc++;
            }
            

            sumaEdadesCiudad += edad;
            sumaEdadesFlia += edad;
            promedioEdadesFlia = sumaEdadesFlia / integrantes;
        }

        cout<<"El promedio de edad de la familia es: "<<promedioEdadesFlia<<"."<<endl<<endl;
        sumaEdadesFlia = 0;
        

        cout<<"Indique la cantidad de integrantes de la familia: "<<endl;
        cin>>integrantes;
    }

    porcentajeAnalfabetismo = (analfabetos * 100) / cantidadTotalPersonas;
    promedioEdadesCiudad = sumaEdadesCiudad / cantidadTotalPersonas;
    porcentajeFemenino = (totalFemenino * 100) / cantidadTotalPersonas;
    porcentajeMasculino = (totalMasculino * 100) / cantidadTotalPersonas;

    cout<<"La cantidad de encuestados con el primario completo es de: "<<primarioCompleto<<"."<<endl;
    cout<<"El porcentaje de analfabetismo de la ciudad es de: "<<porcentajeAnalfabetismo<<"%."<<endl;
    cout<<"El promedio de edades de la ciudad es de: "<<promedioEdadesCiudad<<"."<<endl;
    cout<<"El porcentaje de mujeres de la ciudad es de: "<<porcentajeFemenino<<"%."<<endl;
    cout<<"El porcentaje de hombres de la ciudad es de: "<<porcentajeMasculino<<"%."<<endl;

    cout<<"La cantidad de encuestados con estudios primarios incompletos es de: "<<primarioInc<<"."<<endl;
    cout<<"La cantidad de encuestados con estudios secundarios incompletos es de: "<<secundarioInc<<"."<<endl;
    cout<<"La cantidad de encuestados con estudios terciarios incompletos es de: "<<terciarioInc<<"."<<endl;
    cout<<"La cantidad de encuestados con estudios universitarios incompletos es de: "<<universitarioInc<<"."<<endl;
    

    if(maxIntegrantesDepto > 0)
    {
        cout<<"La familia con mas integrantes que viven en departamento se ubica en el domicilio: "<<domicilioMasIntegrantes<<"."<<endl;
    }

    return 0;
}
