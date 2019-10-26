#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

double average(double M, double L) {
    return (M + L) / 2.0;
}

int main() {
    char Name[26];
    double M, L;
    cin.getline(Name, 26);
    cin >> M >> L;
    cout << fixed << setprecision(2) << average(M, L);
    return 0;
}