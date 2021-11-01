#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,s=1;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
		{
			n/=2;
			s++;
		} else {
			n=3*n+1;
			s++;
		}
	}
	cout<<s;
}

