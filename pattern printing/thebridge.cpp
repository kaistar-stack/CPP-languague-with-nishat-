#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter  a number :";
    cin >> n;
    int nsp = 1;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "* ";
        for (int j = 1; j <= nsp; j++)
            cout << "  ";
        nsp += 2;
        for (int j = 1; j <= n - i; j++)
            cout << "* ";
        cout << endl;
    }
}
