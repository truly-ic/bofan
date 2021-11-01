#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n],i=0,j=0,k=1;
	if(n==1) {cout<<setw(3)<<1;return 0;}
	for(int f=0;f<n;f++)
	{
		for(int k=0;k<n;k++) a[f][k]=0;
	}
	while(true)
	{
		if(a[i][j+1]!=0&&a[i][j-1]!=0&&a[i-1][j]!=0&&a[i+1][j]!=0)
		{
			break;
		}
		else if(i==0&&j<n-1)
		{
			a[i][j]=k;
			j++;
		} 
		 else if(i<n-1&&j==n-1)
		{
			a[i][j]=k;
			i++;
		}
		else if(i==n-1&&j>0)
		{
			a[i][j]=k;
			j--;
		} else if(i>1&&j==0)
		{
			a[i][j]=k;
			i--;
			if(i==1)
			{
				k++;
				a[i][j]=k;
				j++;
				k++;
				a[i][j]=k;
			
			}
		} else {
			bool d=0,e=0,f=0,h=0;
			if(a[i][j+1]!=0) d=1;
			if(a[i][j-1]!=0) e=1;
			if(a[i+1][j]!=0) h=1;
			if(a[i-1][j]!=0) f=1;
			if(d&&f&&e) {
                i++;
				a[i][j]=k;
			} else if(d&&f&&h){
				j--;
				a[i][j]=k;
			} else if(d&&h&&e)
			{
				i--;
				a[i][j]=k;
			} else if(f&&h&&e){
				j++;
				a[i][j]=k;
			} else if(h&&e)
			{
				i--;
				a[i][j]=k;
			} else if(f&&e)
			{
				j++;
				a[i][j]=k;
			} else if(f&&d)
			{
				i++;
				a[i][j]=k;
			} else if(h&&d)
			{
				j--;
				a[i][j]=k;
			} 

		}
		k++;

	}
	for(int y=0;y<n;y++)
	{
		for(int z=0;z<n;z++) cout<<setw(6)<<a[y][z];
		cout<<endl;
	}
	return 0;
}