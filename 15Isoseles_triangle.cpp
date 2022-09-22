/*#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;

while(i<=n)
    {
        int k=1;
        while(k<=n-i)
            {
                cout<<" ";
                k++;
            }
         int j=1;
        
        while(j<=i)
            
            {
                cout<<j;
                j++;
               
            }
        j=i-1;    
        while(j>=1)    //this loop for second part which is in decreasing order
            {
                cout<<j;
                j--;
            }
            i++;
             
            cout<<endl;
    }
    
    
    
    
    
}*/


#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1;


while(i<=n)
    {
        int k=1;
        while(k<=n-i)
            {
                cout<<" ";
                k++;
            }
         int j=1;
         
        while(j<=i)
            
            {
                cout<<j+i-1;
                j++;
                
            }
        j=i*2-2;    
        while(j>=i)
            {
              cout<<j;
              j--;
             }  
        
            i++;
            cout<<endl;
    }
}