#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c)
        cout << "perfect";
    else if ((a == b && a != c) || (a == c && a != b) || (b == c && a != b))
        cout << "ok";
    else
        cout << "normal";
}