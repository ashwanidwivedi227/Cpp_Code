#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    for(int i=d;i<=n;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 1 ;
                break ;
               
            }
        }
        
        if(flag==0)
        {
            cout<<i<<endl;
        }
        
    }
    
}