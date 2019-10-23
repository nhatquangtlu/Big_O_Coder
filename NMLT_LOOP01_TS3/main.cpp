#include <iostream>
using namespace std;
int main() {
    int n;
    int temp;
    long long sum =0;
    cin >>n;
    for(int i= 0;i < n;i++)
    {
        cin>>temp;
        if(temp%3==0)
            sum+=temp;
    }
    cout<<""<<sum;
    return 0;
}