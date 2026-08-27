#include<iostream>
using namespace std ;
int main ( ){
    int n , m ;
    cout<<" enter number of rows  : ";
    cin>>n;
    
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){        // for j--> (1 to n sq banega, 1 to i triangle  banega )

            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}
//for inverted star triangle j ki limit n+1-i hoga 
// like j<=n+1-i.
