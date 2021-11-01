#include<iostream>
using namespace std;
int s[100],n;
void f(int k);
int main()
{
	cin>>n;
	f(0);
	return 0;
}

void f(int k)
{
	if(k==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<s[i];
		}
		cout<<endl;
	} else {
		s[k]=0;
		f(k+1);
		s[k]=1;
		f(k+1);
	}
}