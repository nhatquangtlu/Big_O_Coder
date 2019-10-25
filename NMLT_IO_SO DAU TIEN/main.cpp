#include <iostream>
using namespace std;

int main() {
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_value = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max_value) {
            max_value = a[i];
        }
    }

    cout << max_value;
    return 0;

}