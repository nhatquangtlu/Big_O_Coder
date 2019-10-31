#include <iostream>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    int tong = 0;
    while(n > 0){
        tmp = n % 10;
        tong = tong * 10 + temp;
        n = n / 10;
    }
    cout << tong;
}