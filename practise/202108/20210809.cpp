#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num=1,n,j;
	bool f=1;
	cin>>n;
	for(int i=3;i<n;i+=2)
	{
		f=1;
		int k=sqrt(n);
		for(int j=3;j<=k&&f;j+=2)
		{
			if(i%j==0) f=0;
		}
		if(f) cout<<i<<endl;num++;
	}
	cout<<n<<"   "<<num;
	return 0;
}