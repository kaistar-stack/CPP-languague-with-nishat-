#include<iostream>
using namespace std ;
int main (){
    int x = 9;
    int*ptr1 = &x;
    int *ptr2 = &x ;
    cout<<ptr1<<" "<<ptr2<<endl;
    cout<<&ptr1<<" "<<&ptr2;
}
