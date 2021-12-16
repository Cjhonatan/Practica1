#include <iostream>

using namespace std;

int main()
{
    int a, c;

    cout <<"Ingrese el un numero: "<<endl;
    cin >>a;

    for (int b=1; a>b; b++){

        c=a+b;
    }
    cout <<"La sumatoria de 0 hasta "<<a<< " es "<<c<<endl;
    return 0;
}
