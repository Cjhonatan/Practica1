#include <iostream>

using namespace std;

int main ()
{
    int k, mitad, mayor, menor;
    char signo;
    k=1;

    mitad=50;
    mayor=100;
    menor=0;

    cout<<"Piensa en un numero "<<endl;

    while(k){

        cout<<"Tu numero es: "<<mitad<< " ? "<<endl;

        cout<<"Escibre un signo si tu numero es igual(=), menor(<) o mayor(>): ";
        cin>>signo;

        if(signo=='='){
            cout<<"Tu numero es "<<mitad<<endl;
            k=0;
        }
        else if(signo=='<'){
            mayor=mitad;
            mitad=(mitad+menor)/2;
        }
        else if(signo=='>'){
            menor=mitad;
            mitad=(mitad+mayor)/2;
        }
        else
        cout<<endl;
    }
return 0;
}
