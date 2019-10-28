#include <iostream>
using namespace std;

bool checkYear(int y) {
    return ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)));
}

int main() {
    int m, y, num_day;
    cin >> m >> y;
    if (m == 2) {
        if (checkYear(y)) {
            num_day = 29;
        }
        else {
            num_day = 28;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        num_day = 30;
    }
    else {
        num_day = 31;
    }

    cout << num_day;
    return 0;
}