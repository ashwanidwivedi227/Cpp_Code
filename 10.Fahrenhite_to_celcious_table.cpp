#include<iostream>
using namespace std;


int main()
{
    int S,E,W,c;
    cin>>S>>E>>W;
    int i=S;
    while(i<=E)
        {
        c=(i-32)*(5.0/9);
        cout<<i<<" "<<c<<endl;
            i=i+W;
        }
}