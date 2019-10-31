#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int x, n;
    int s=0;
    do {
        cin >> x;
    } while (1>x || x>10);
    do{
        cin>>n;
    }
    while (1>n || n>18);
    for (int i=1;i<n;i++)
        s+=pow(x,n)
    cout<<int(s);
}
