#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int L,R,dem=0;
    cin>>L>>R;
    for(int i=1; i<=R;i++)
        if(i%3==0 || i%5==0)
            dem++;
    cout<<""<<dem;
}