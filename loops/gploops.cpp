#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<" enter a number:";  //to print 1,2,4,8,16..
    cin>>n;
    int a= 1 ;
    for(int i = 1 ; i<=n ; i ++)
   { cout<<a<<endl;
    a*=2;
   }
   
}