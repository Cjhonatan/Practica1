#include <iostream>

using namespace std;

int main()
{
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int mes,dia;

    cout<<"Ingrese el mes";
    cin>>mes;
    cout<<"Ingrese el dia";
    cin>>dia;


    if (mes>12 or mes<1) cout<<mes<<" es un mes invalido."<<endl;
    else {
        if (dia>0 and dia<=dias[mes-1])
            cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;

        else if (mes==2 and dia==29)
            cout<<dia<<"/"<<mes<<" es valida en bisiesto."<<endl;

        else
            cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;
    }
}
