#include<iostream>
using namespace std ;
int main (){
    //we have to print 2, 5 , 8 , 11 ...
    int n ;
    cout<<" enter a number :";
    cin>>n;
    int a = 2 ;
    for(int i = 1 ; i <=n ; i++){
        cout<<a<<" ";
        a+=3;
    }


}