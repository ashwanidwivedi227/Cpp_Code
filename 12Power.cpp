#include<iostream>
using namespace std;

int main()
{
int x;
int n;
cin>>x>>n;
int power=1;

while(n)
    {
        power=power*x;
        n-=1;
        
    }
    cout<<power;
}
