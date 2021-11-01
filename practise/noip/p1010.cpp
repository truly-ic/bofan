#include<iostream>
#include<cmath>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k=0,f[10000],ans=0;
	cin>>n;
	int ship[n+1][3000],t[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]>>ship[i][0];
		for(int j=1;j<=ship[i][0];j++)
		{
			cin>>ship[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans=0;
		int left,right=i;
		for(int j=i;j>=1;j--)
		{
			if(t[i]-t[j]>=86400) left=j;
			else break;
		}
		for(int z=left;z<=right;z++)
		{
			for(int y=1;y<=ship[z][0];y++)
			{
				f[k]=ship[z][y];
				k++;
			}
		}
		sort(f,f+k-1);
		for(int h=1;h<k;h++)
		{
			ans=1;
			if(f[h]!=f[h-1]) ans++;
		}
		cout<<ans<<endl;
	}
	

}