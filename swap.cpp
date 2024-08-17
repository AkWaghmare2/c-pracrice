#include<iostream>
using namespace std;
int main()
{
    /*
    int a=20,b=30,temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    */

    /*
    int a=20,b=30;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    */

    int a=20,b=30;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    return 0;
}