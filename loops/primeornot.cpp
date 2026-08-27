#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter a number :";
    cin >> n;
    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a++;
            break;
        }
        
    }
    if (a == 0)
    {
        cout << " prime " << endl;
    }
    else
    {
        cout << " not prime " << endl;
    } 
    if ( n = 1 ) cout<<" neither prime nor composite";
}
