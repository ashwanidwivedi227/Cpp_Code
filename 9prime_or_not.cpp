#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=2;
    bool divided=false;
    while(d<n)
        { if(n%d==0){
           
            divided=true;
        }
        d=d+1;
        
        }
        if (divided)
        {
            cout<<"It is not prime";
        }
        else{
            cout<<" prime";
        }
        
        }