#include <iostream>
using namespace std;
int main()
{
    cout << " enter a number n :";
    int n;
    cin >> n;
    if (n % 3 == 0 or n % 5 == 0)
    {
        cout << " the given number is divisible by 3 or 5 ";
    }
    else
    {
        cout << " the given number is not divisivle by 3 or 5 ";
    }
}