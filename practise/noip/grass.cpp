#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool a[109000][100000];
void bfs(int i,int j)
{
	int tag[2][1000];
	a[i][j]=0;
	if(a[i+1][j]==1)
	{
		bfs(i+1,j);
	}
	if(a[i-1][j]==1)
	{
		bfs(i-1,j);
	}
	if(a[i][j+1]==1)
	{
		bfs(i,j+1);
	}
	if(a[i][j-1]==1)
	{
		bfs(i,j-1);
	}
}

int main()
{
	int n,num=0;
	cin>>n;
	srand(time(0));
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
		{
			a[i][j]=(rand()%2+rand()%2)%2;
		}
		/*for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}*/
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				bfs(i,j);
				num++;
			}
		}
	
	cout<<num<<endl;
	return 0;
}