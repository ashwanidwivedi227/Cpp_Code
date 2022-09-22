#include <bits/stdc++.h>

using namespace std;


/*Decimal to Binary Representation


int main()
{
    int n;
    cin>>n;
    int ans=0;
    int pow=1;
    
    //First Apporoch
    
    
    while(n!=0)
    {
        int rem=n%2;
        ans=(pow*rem)+ans;
        pow=pow*10;
        n=n/2;
        
    }
    //optimal solution
    
    
    while(n!=0)
    {
        int rem=n&1;
        ans=(pow*rem)+ans;
        pow=pow*10;
        n=n>>1;
        
    }
    cout<<ans;
}*/

//Binary to Decimal

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        int bin=n%10;
        if(bin==1)
        {
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;
    
    
    
    
}


