#include <iostream>
using namespace std;

int main()
{
    double grade;
    cin >> grade;

    if (grade >= 9)
        cout << "A";
    else if (grade >= 8 && grade < 9)
        cout << "B";
    else if (grade >= 7 && grade < 8)
        cout << "C";
    else if (grade >= 6 && grade < 7)
        cout << "D";
    else if (grade >= 5 && grade < 6)
        cout << "E";
    else
        cout << "failed";
}