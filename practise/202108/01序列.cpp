#include<iostream>
using namespace std;
void f01(int a);
int m,f[1000];
int main()
{
	cin>>m;
	f01(1);
	return 0;
}
void f01(int a)
{
	if(a>m)
	{
		for(int i=1;i<=m;i++) cout<<f[i];
		cout<<endl;
	} else {
		f[a]=0;
		f01(a+1);
		f[a]=1;
		f01(a+1);
	}

}
