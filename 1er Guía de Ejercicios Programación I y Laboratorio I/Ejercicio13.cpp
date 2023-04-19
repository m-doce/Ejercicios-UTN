/*Dados N y M números naturales, informar su producto por sumas sucesivas.*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int producto = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>n;
    cout<<"Ingrese otro numero: "<<endl;
    cin>>m;

    for(int i = 0; i < m; i++)
    {
        producto += n;
    }

    cout<<n<<" * "<<m<<" = "<<producto;

    return 0;
}
