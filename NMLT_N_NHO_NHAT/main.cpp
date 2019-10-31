#include <iostream>
using namespace std;

int solve(int n) {
    int sum = 0;
    while (true) {
        sum += n;
        if (sum > 10000) {
            break;
        }
        n++;
    }
    return n;
}

int main() {
    int n = 1;
    cout << solve(n);
    return 0;
}