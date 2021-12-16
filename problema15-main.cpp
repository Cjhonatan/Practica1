#include <iostream>

using namespace std;

int main()
{
    int k,nd=0,n=1;
    cout << "Ingrese un numero" << endl; cin>>k;
    int j=(n*(n+1)/2);
    while (nd<=k){
        j=(n*(n+1))/2;
        nd=0;
        for (int i=1;i<=j;i++){
            if (j%i==0) nd++;
        }
        n++;
        //cout<<j<<endl<<n;
    }
    cout<<"El numero es: "<<j<<" que tiene "<<nd<<" divisores."<<endl;
    return 0;
}
