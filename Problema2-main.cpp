#include <iostream>

using namespace std;

int main()
{
    int din,b50=0,b20=0,b10=0,b5=0,b2=0,b1=0,m5=0,m2=0,m1=0,m50=0;
    cout<<"Ingrese el dinero";
    cin>>din;
    if (din/50000>=1){
        b50=din/50000;
        din=din%50000;
    }
    if (din/20000>=1){
        b20=din/20000;
        din=din%20000;
    }
    if (din/10000>=1){
        b10=din/10000;
        din=din%10000;
    }
    if (din/5000>=1){
        b5=din/5000;
        din=din%5000;
    }
    if (din/2000>=1){
        b2=din/2000;
        din=din%2000;
    }
    if (din/1000>=1){
        b1=din/1000;
        din=din%1000;
    }
    if (din/500>=1){
        m5=din/500;
        din=din%500;
    }
    if (din/200>=1){
        m2=din/200;
        din=din%200;
    }
    if (din/100>=1){
        m1=din/100;
        din=din%100;
    }
    if (din/50>=1){
        m50=din/50;
        din=din%50;
    }
    cout<<"50000:"<<b50<<endl;
    cout<<"20000:"<<b20<<endl;
    cout<<"10000:"<<b10<<endl;
    cout<<"5000:"<<b5<<endl;
    cout<<"2000:"<<b2<<endl;
    cout<<"1000:"<<b1<<endl;
    cout<<"500:"<<m5<<endl;
    cout<<"200:"<<m2<<endl;
    cout<<"100:"<<m1<<endl;
    cout<<"50:"<<m50<<endl;
    cout<<"Restante:"<<din<<endl;
}
