#include<iostream>
using namespace std ;

int x = 10 ;

void change  (){
    x = 9;

}
int main (){

int x = 11 ;
cout<<x<<endl;
change();
cout<<x;
}