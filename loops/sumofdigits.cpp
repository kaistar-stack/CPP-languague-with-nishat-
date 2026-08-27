#include<iostream>
using namespace std ;
int main () {
   int n;
    cout << " enter the number :";              
    cin >> n;
    int sum = 0 ;
    while(n>0){
        int x = n%10 ;
        sum= sum + x ;
        n/=10;
    }

  cout<<sum;
}