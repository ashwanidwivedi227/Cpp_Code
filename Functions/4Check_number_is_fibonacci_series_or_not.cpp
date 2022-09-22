#include<iostream>
using namespace std;

bool fibo(int n)
{
    int a=0;
    int b=1;
    while(a<n)
    {
        int c=a+b;
        a=b;
        b=c;

    }
    if(n==a)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans;
}
