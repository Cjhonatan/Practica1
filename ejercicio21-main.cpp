#include <iostream>

using namespace std;

int main()
{

    char a;

    cout << "Ingrese un caracter: "<<endl;
    cin>>a;

    if (a<=90){

        a=a+32;

        cout<< "La letra covertida: "<<a<<endl;

    }



     else if(a>=91){


            a=a-32;

            cout<< "La letra covertida: "<<a<<endl;
        }


    return 0;
}
