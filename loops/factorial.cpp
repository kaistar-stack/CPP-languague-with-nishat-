#include<iostream>
using namespace std ;
int main (){
    int n;
    int r = 1 ;
    
    cout<<" enter a number :";
    cin>>n ;
    for(int i = 1 ; i<=n ;i++ ){
        r = r * i ;
    }
    cout<<r;
    
}
    
