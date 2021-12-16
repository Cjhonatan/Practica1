#include <iostream>

using namespace std;

int main()
{
    int n1=1,n2=1,rest=0,num,n3;
    cout<<"Ingrese un numero"<<endl;
    cin>>num;

    while (n2<=num){
        //cout<<n3<<n2<<n1<<endl;
        if ((n2%2)==0){
            rest=rest+n2;
        }
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    cout<<"El resultado de la suma es "<<rest<<endl;
    return 0;
}
