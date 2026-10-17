#include<iostream>
using namespace std ;
int main (){
    int x = 9;
    int* ptr1 = &x;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;      // 1star p ka matlb us addrr pe jo value hai usko print
                                //2 usko print kardo ...
cout<<x<<endl;
*ptr1= 10 ;         //* ptr jiska address hai uski value ko change kardo 
cout<<x;
}                                           