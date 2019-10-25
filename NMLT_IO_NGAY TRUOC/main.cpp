#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    cin >> day >> month >> year;

    if (day == 1 && month == 1)
        cout << "31 12 " << --year;
    else if (day == 1) {
        if (month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11)
            cout << 31 << " " << --month << " " << year;
        else if (month == 5 || month == 7 || month == 10 || month == 12)
            cout << 30 << " " << --month << " " << year;
        else {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                cout << 29 << " " << --month << " " << year;
            else
                cout << 28 << " " << --month << " " << year;
        }
    }
    else
        cout << --day << " " << month << " " << year;
}