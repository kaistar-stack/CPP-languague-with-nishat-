#include<iostream>
using namespace std ;
void change ( int* ptr ){
    *ptr = 9;           //ptr ke andr jiska addrr pda h uski value ko 9 krdo.
}
int main (){
    int x = 10 ;
    change(&x);
    cout<<x;
}
