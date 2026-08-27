#include <iostream>
#include <cmath> // for using sqrt function...
using namespace std;
int main()
{
    int n;
    cout << " enter a number :";
    cin >> n;
    // for( int i = 1 ; i<=n ; i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";   
        }
         if(i!=n/i ) cout<<n/i<<" ";  // to avoid printing the same
                                    // factor twice when n is a perfect 
    }                               // square number 
}