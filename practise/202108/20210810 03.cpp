#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,f=1;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				a[j][i]=f%10;
				f++;
			}
		} else{
			for(int j=n-1;j>=0;j--)
			{
				a[j][i]=f%10;
				f++;
			}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
}

