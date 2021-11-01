#include<iostream>
using namespace std;
int a[100][100];
int main()
{
	int n;
	cin>>n;
	int r,c;
	int m=n-1;
	m/=2;
	a[m][0]=1;
	c=m;
	r=0;
	m=n*n;
	
	for(int i=2;i<=m;i++)
	{
		if(r==0&&c!=n-1)
		{
			r=n-1;
			c++;
			a[c][r]=i;
		} else if(c==n-1&&r!=0)
		{
			c=0;
			r--;
			a[c][r]=i;
		} else if(c==n-1&&r==0) {
			r++;
			a[c][r]=i;
		} else if(a[c+1][r-1]==0) {
			r--;
			c++;
			a[c][r]=i;
		}else{
			a[c][r+1]=i;
			r+=1;
		}

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[j][i]<<' ';
		}
		cout<<endl;
	}

}