#include<iostream>
using namespace std ;
int main (){

//     int a = 0 ;
//     if (a=0) cout<<" me " ; // you is the answer , a= 0 is assignment ;
//     else cout<<" you ";
// // 
 int x = 6 ;
// int y = (x>12) ? x-4 : x+4;
// cout<<y; // 10 ans ayega ;
int y = (x<=23 )? ((x>12)? x - 4 : x*4 ): (( x < 12 )? x/4 : x + 4 ); 
cout<<y ;

}