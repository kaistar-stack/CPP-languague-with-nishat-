#include<iostream>
using namespace std ;
    int main (){
        int x = 5 , y = 2 ;
        
        int* p1= &x;
        int* p2 = &y;
        cout<<p1<<" "<<p2<<endl;
        cout<<*p1<<" "<<*p2<<endl;
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp ;
        cout<<*p1<<" "<<*p2;

}