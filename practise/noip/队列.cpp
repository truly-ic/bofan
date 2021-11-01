#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<ctime>
using namespace std;
long long a[100000];
int f(int n){
	long long ans=0;
	if(a[n]==0){
		ans=f(n-1);
		if(n>1) ans+=f(n-2);
		ans%=1000000007;
		if(n>2) ans+=f(n-3);
		ans%=1000000007;
		a[n]=ans;
		return ans;
	} else {
		return a[n];
	}
}
int main()
{
	int n;
	a[1]=1;
	a[2]=2;
	a[3]=4;
	cin>>n;
	cout<<f(n);

	return 0;
}