//same variable in diff funcn are different 
// means x hi h dono ka naam but wo dbbe alag hai
#include<iostream>
using namespace std ;
int x = 7 ; // global variable .
void fun (){
 x = 29 ;
}
int main (){

    cout<<x<<endl;
    fun();
    cout<<x<<endl;

    

}