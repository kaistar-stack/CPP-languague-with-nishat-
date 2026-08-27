#include<iostream>
using namespace std ;
int main () {
    int n ;
    int x ;
    cout<<" enter a number :";
    cin>>n;
    while(n>0){
        
        x = n%10;
        cout<<x;
        n/=10;
        


    }
    printf("\nthank you ");
    
}