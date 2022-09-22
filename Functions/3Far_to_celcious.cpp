#include<iostream>
using namespace std;
void Far_to_cel_table(int s,int e,int w)
{
    int ans;
    for(int i=s;i<=e;i=i+w)
    {
        int ans=(5.0/9)*(i-32);
        cout<<i<<" "<<ans<<endl;
    }
    
}

int main()
{
    int s,e,w;
    cin>>s>>e>>w;
    Far_to_cel_table(s,e,w);
   
}