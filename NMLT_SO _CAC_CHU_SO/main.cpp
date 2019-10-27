#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dem=0;
    while(n>=10){
        n/=10; // hay n = n /10;
        dem++;
    }
    cout<<""<<dem+1<<endl;

}