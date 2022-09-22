#include<iostream>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    cin>>c;
    int count1=0;
    int count2=1;
    for(int i=1;i<=n;i++)
    {
        if(c==1)
        {
            count1=count1+i;
            
        }
        else if(c==2)
        {
            count2=count2*i;
            
        }
        
        
    }
    if(c==1)
    {
        cout<<count1;
    }
    else if(c==2){
        cout<<count2;
    }
    else{
       cout<<"-1" ;
    }
}
    