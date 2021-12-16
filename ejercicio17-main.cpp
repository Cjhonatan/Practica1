#include <iostream>

using namespace std;

int main()

{

  int a, mayor=0;

  cout << "Ingre un numero"<< endl;
  cin >> a;
  mayor =a;

  while (a!=0) {

   cout << "Ingre un numero"<< endl;
   cin >> a;

    if (mayor<a){

       mayor=a;
    }


   }



   cout<<"El numero mayor fue : "<<mayor<<endl;






    return 0;
}
