#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;

    if (day == 31 && month == 12)
        cout << 1 << " " << 1 << " " << ++year;
    else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day == 31)
                cout << 1 << " " << ++month << " " << year;
            else
                cout << ++day << " " << month << " " << year;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day == 30)
                cout << 1 << " " << ++month << " " << year;
            else
                cout << ++day << " " << month << " " << year;
        }
        else {
            if (day == 28)
                cout << 1 << " " << ++month << " " << year;
            else
                cout << ++day << " " << month << " " << year;
        }
    }
}