#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int Sum[1000];
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>Sum[i];
    }
    
    for(int i=0;i<n;i++)
    {
        total=total+Sum[i];
    }
    cout<<total;    
}
