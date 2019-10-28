#include<iostream>
using namespace std;
int main() {
    int temp,n;
    cin>>n;
    do {
        temp = n % 10;
        n /= 10;
    }
    while (n > 0);
    cout << "" << (n)<<endl;


}