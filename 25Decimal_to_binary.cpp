#include<iostream>
using namespace std;


int main() {
	    int n;
       cin>>n;
       
    long sum=0;
    long pow=1;
        
    while(n!=0)
    {
       int rem=n%2;
        n=n/2;
        sum=sum+(rem*pow);
        pow=pow*10;
    }
    cout<<sum;
   
}
	

