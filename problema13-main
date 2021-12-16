#include <iostream>

using namespace std;

int main()
{
    int num,sum,rest;
    cout << "Ingrese un numero impar" << endl;cin>>num;
    cout<<"Es una espiral "<<num<<"x"<<num<<", la suma es: ";
    int numm=num*num;
    sum=numm;
    rest=num-1;
    for (;rest>0;rest=rest-2){
        for(int i=1;i<=4;i++){
            numm=numm-rest;
            sum=sum+numm;
        }
    }
    cout<<sum<<endl;
    return 0;
}
