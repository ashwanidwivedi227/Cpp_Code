#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int series=0;
    int count=1;
    
    for(int i=1;i<=n;i)
    {
        series=3*count+2; 
        if(series%4==0)
        {
            count++;
            continue;   
        }
        else
        {
            cout<<series<<" ";
            count++;
            i++;
        }
    }
    
    
    
    
}