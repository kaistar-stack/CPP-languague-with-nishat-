#include<iostream>
using namespace std ;
int main (){
    int a = 0 ;
    if (a=0){   // this is assignment not coparison;
                //value is 0 means false so else will run insead of if .
        cout<<"me";
 
    }
    else {
        cout<<"you";
    }

}