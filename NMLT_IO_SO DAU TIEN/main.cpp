#include <iostream>
using namespace std;

int main()
{
    int r1, r2, d;
    cin >> r1 >> r2 >> d;

    if (d == abs(r1 - r2))
        cout << 1;
    else if (d == r1 + r2)
        cout << 2;
    else if (abs(r1 - r2) < d && d < r1 + r2)
        cout << 3;
    else if (d < abs(r1 - r2))
        cout << 4;
    else
        cout << 5;
}