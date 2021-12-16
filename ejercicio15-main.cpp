#include <iostream>

using namespace std;

int main()
{

    int a, sum=0;

    cout << "Ingre un numero"<< endl;
    cin >> a;
    sum =a;

    while (a!=0) {

       cout << "Ingre un numero"<< endl;
       cin >> a;

        sum=a+sum;
    }

    cout<<"El resultado de la sumatoria es: "<<sum<<endl;





    return 0;
}
