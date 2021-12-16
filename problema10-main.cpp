#include <iostream>

using namespace std;

int main()
{

    int num=0;cout<<"Ingrese un numero ";
    cin>>num;

    int num2=num,p=0;


    for (int i=2;num>1;i++){
        while (num%i==0){
            num/=i;
            p=i;

        }

    }
    cout<<"El mayor factor primo de "<<num2<<" es "<<p<<endl;
    return 0;
}
