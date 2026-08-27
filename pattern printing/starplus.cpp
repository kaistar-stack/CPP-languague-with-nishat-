#include<iostream>
using namespace std ;      // we will take n = odd number.
int main (){
    int n ;
    cout<<" enter a number :";
    cin>>n ;
    int mid = n/2 + 1 ;  // mid = 3 for n = 5, mid = 4 for n = 7, mid = 5 for n = 9.
    for(int i = 1 ; i<=n ; i++){
        for(int j =1 ; j<= n ; j++){

            if(i==mid || j==mid ){
                cout<<"*"<<" ";

            }
            else{
                cout<<" "<<" ";
            }
         
        }
        cout<<endl;
    }

}
