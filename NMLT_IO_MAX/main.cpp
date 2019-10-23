#include<iostream>
using namespace std;
int solonnhat(int n);
int main()
{
	int n;
	cout<<"";
	cin>>n;
	cout<<""<<solonnhat(n);

}
int solonnhat(int n)
{
	int max=0;
	for(int i=n;i!=0;i/=10)
	{
		int temp=i%10;
		if(temp>max)
		{
			max=temp;
		}
	}
	return max;
}