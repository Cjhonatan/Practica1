#include <iostream>

using namespace std;

int main()
{

    int n1=0,n2=0,n3=0,mult=0,suma=0;

    cout<<"Ingrese el numero 1"<<endl;
    cin>>n1;
    cout<<"Ingrese el numero 2"<<endl;
    cin>>n2;
    cout<<"Ingrese el numero 3"<<endl;
    cin>>n3;


    mult=n1;
    for(int i=n1;i<n3;){
        if (n1<n3)
            suma=suma+i;
            n1=n1+mult;
            i=n1;
            cout<<n1<<"+";
    }
    mult=n2;
    for(int t=n2;t<n3;){
        if (n2<n3)
            suma=suma+t;
            n2=n2+mult;
            t=n2;
            cout<<n2<<"+";

    }
    cout<<"="<<suma<<endl;



    return 0;
}
