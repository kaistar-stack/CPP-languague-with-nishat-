#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << " enter three numbers :";
    cin >> a >> b >> c;
    if (a < b and a < c)
    {
        cout << a << "  is lowest";
    }
    else if (b < c)
    {
        cout << b << " is lowest";
    }
    else
    {
        cout << c << " is lowest ";
    }
}