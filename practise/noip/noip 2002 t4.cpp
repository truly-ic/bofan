#include<iostream>
using namespace std;
int a[100][100];
int result[100][100];
int main()
{
	int h1,h2;
	
	int n,m;
	cin>>n>>m;
	cin>>h1>>h2;
	a[h1][h2]=1;
	a[h1-2][h2-1]=a[h1-1][h2-2]=a[h1+2][h2+1]=a[h1+1][h2+2]=a[h1+1][h2-2]=a[h1+2][h2-1]=a[h1-2][h2+1]=a[h1-1][h2+2]=1;
	result[0][0]=1;
	for(int i=0;i<=n&&a[i][0]==0;i++) result[i][0]=1;
	for(int i=0;i<=m&&a[0][i]==0;i++) result[0][i]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i][j]==1)
			{
				result[i][j]=0;
			} else {
				result[i][j]=result[i-1][j]+result[i][j-1];
			}
		}
	}
	cout<<result[n][m];
	return 0;
}