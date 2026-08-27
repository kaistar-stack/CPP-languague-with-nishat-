#include <iostream>
using namespace std;
void startriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{

    int a;
    cout << "  enter  a number :";
    cin >> a;
    startriangle(a);

    int b;
    cout << "  enter  b number :";
    cin >> b;
    startriangle(b);

    int c;
    cout << "  enter  c number :";
    cin >> c;
    startriangle(c);
}