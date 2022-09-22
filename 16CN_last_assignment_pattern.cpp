#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int n1=n-n/2;
    int n2=n/2;
    while(i<=n1)
        {
            int k=1;
            while(k<=n1-i)
                {
                    cout<<" ";
                    k++;
                }
            int j=1;
            while(j<=2*i-1)
                {
                    cout<<"*";
                    j++;
                }
                i++;
                cout<<endl;
        }
    int a=n2;    
    while(a>=1)
        {
         int k=1;   
        while(k<=n2-a+1)
            {
                cout<<" ";
                k++;
            }
        int j=1;    
        while(j<=2*a-1)
            {
                cout<<"*";
                j++;
                
            }
           
          a--;
        cout<<endl; 
        }
        
        
        
    
    
    
    
}