/*#include<iostream>
using namespace std;


int main()
{
    
int n;
cin>>n;
int i=1; 

    while(i<=n)
    {
        int j=1;
        
        while(j<=n)
        {   
            char ch='A'+i-1;
            cout<<ch;
            
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    
}*/

//Important question of character pattern

#include<iostream>
using namespace std;


int main()
{
    
int n;
cin>>n;
int i=1; 

    while(i<=n)
    {
        int j=1;
    
        
        while(j<=i)
        {   
          char ch='A'+n-i+j-1;
          cout<<ch;
           ch++;
            j++;
        }
        i++;
        cout<<endl;
        
    }
    
    
}

 /*int main()
{
    int n;
    cin>>n;
    int i=1;
    
    
    while(i<=n){
        int j=1;
        while(j<=(n-i)+1){
            cout<<j;
            j++;
        }
        int k=1;
        while(k<=(2*i)-2){
            cout<<"*";
            k++;
        }
        int m=(n-i)+1;
        while(m>=1){
            cout<<m;
            m--;
        }
        i++;
        cout<<endl;
    }

    
}/*
 

  