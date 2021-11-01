#include<iostream>
using namespace std;
 int a[100],num;
int f(int n)
{
	if(n==0||n==1) a[n-1]=1;
	else{
		a[n-1]=f(n-1)+f(n-2);
	}
	return a[n-1];
} 


int main()
{
	cin>>num;
	for(int i=0;i<num;i++) a[i]=-1;
	f(num);
	for(int i=0;i<num;i++) cout<<a[i]<<' ';
}