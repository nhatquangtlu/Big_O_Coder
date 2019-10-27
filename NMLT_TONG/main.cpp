#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,n;
    double sum;
    cin>>n>>x;
    while(1>x || x>10)
    {
        cin>>n>>x;
        while(1>n || n>18) {
            for (int i = 1; i <= n; i++)
                sum= sum+ pow(x,n);
            cin >> x >> n;
        }
    }
    cout<<sum;
    return 0;
}
