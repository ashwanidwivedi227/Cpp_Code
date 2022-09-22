#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[100];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<array[j]<<endl;
    }
    //Largest number in the array
    int lar=INT_MIN;
    for(int k=0;k<n;k++)
    {
        if(lar<array[k])
        {
            lar=array[k];
            
        }
    }
    cout<<"max:"<<lar;
    
}