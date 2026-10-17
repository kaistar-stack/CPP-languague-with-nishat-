#include<iostream>
using namespace std ;
void counting(int n ){
int cout = 0;
while(n!=0){
    n/=10;
    cout++;
}
int* ptr = &cout;
*ptr = cout;
int *ptr2 = &*ptr;



}
    int main (){
        int n ;
        cin>>n;
        counting(n);
        cout<<*ptr2;

        
       

}