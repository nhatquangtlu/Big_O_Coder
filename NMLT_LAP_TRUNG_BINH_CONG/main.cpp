

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x, a[1000];
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            sum += a[i];
            count++;
        }
    }

    if (count == 0) {
        cout << "0.00";
    }
    else {
        cout << fixed << setprecision(2) << (double)sum / double(count);
    }
    return 0;
}