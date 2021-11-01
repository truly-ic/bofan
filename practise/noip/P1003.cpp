#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,a,b,c,d,x,y,result=0;
	cin>>n;
	int r[n+1][4];
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&r[i][0],&r[i][1],&r[i][2],&r[i][3]);
	}
	cin>>x>>y;
	for(int i=n;i>=1;i--)
	{
		
		if(x>=r[i][0]&&r[i][0]+r[i][2]>x)
			if(r[i][1]<=y&&y<r[i][1]+r[i][3])
				{
					cout<<i;
					return 0;
				}
	}
	cout<<-1;
	return 0;
	
}