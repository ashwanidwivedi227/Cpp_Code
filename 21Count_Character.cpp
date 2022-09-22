#include<iostream>
using namespace std;

int main(){
    char c;
   c=cin.get();
    int character=0;
    int numeric=0;
    int special=0;
    while(c!='$'){
       
    
    if(c>='a' && c<='z'){
        character++;
        
    }
    else if(c>='0' && c<='9'){
        numeric++;
    }
    else if(c=='\t'||c=='\n'||' '){
        special++;
       
    }
    
    c=cin.get();  
    }
    cout<<character<<" "<<numeric<<" "<<special;
}