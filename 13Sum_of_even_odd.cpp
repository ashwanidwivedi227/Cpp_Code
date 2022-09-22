#include<iostream>
using namespace std;

int main()
{
int n,c;
int even=0;
int odd=0;
cin>>n;
while(n>0)
    {
        c=n%10;
        n=n/10;
        
        if(c%2==0)
            {
                even=even+c;
            }
        else
            {
                odd=odd+c;
            }
    }
    
    
    cout<<even<<" "<<odd;
}
