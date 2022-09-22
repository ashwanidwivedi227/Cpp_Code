#include<iostream>
using namespace std;
int main()
{
/*int a;
cout<<"Enter fah value"<<endl;
cin>>a;
int c=(a-32)*(5.0/9);
cout<<"Celcius value is:"<<c;*/


//how to use relational Operator
int a,b;
cin>>a>>b;
bool isequal= (a==b);
bool isgreaterA=(a>b);
bool islessA=(a<b);
cout<<isequal<<endl<<isgreaterA<<endl<<islessA<<endl;

//hwo to use logical operator

bool third=isequal&&isgreaterA;
bool fourth=isequal||isgreaterA;
bool fifth=!isequal;
cout<<third<<endl<<fourth<<endl<<fifth;

}
