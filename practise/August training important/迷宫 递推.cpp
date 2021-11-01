#include<iostream>
using namespace std;
int connect[5][5]
{
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}
};
int a[5][5];
int main()
{
	a[0][0]=1;
	for(int i=0;i<5&&connect[0][i]==0;i++)	a[0][i]=1;
	for(int i=0;i<5&&connect[i][0]==0;i++) 	a[i][0]=1;
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{
			if(connect[i][j]==1) a[i][j]=0;
			else{
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++) cout<<a[i][j]<<' ';
		cout<<endl;
	}

	return 0;
	
}