#include<iostream>
using namespace std ;
int main (){
    int a,b;
    cout<<" enter a and its power b number :";
    cin>>a>>b;
    int x = 1 ;
    if(a==0) cout<<1;
    for(int i = 1; i<=b ; i++){              //1:25 hrs 
            x*=a ;
    }
    
    if(a==0 and b ==0) cout<<" indeterminate form ";
    cout<<x;
}