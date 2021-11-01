#include<iostream>
using namespace std;
int pic[5][5]
{
	{0,1,1,0,0},
	{1,0,0,1,1},
	{1,0,0,1,0},
	{0,1,1,0,1},
	{0,1,0,1,0}
};
int a[100000],s[100000],total=0;

void bfs(int n){
	for(int i=1;i<=5;i++)
	{
		if(pic[a[n]-1][i-1])
		{
			int j=n;
			while(j>-1&&a[j]!=i) j=s[j];
			if(j==-1)
			{
				total++;
				s[total]=n;
				a[total]=i;
				if(i==5)
				{
					j=total;
					while(j>-1)
					{
						cout<<a[j];
						j=s[j];
					}
					cout<<endl;
				}
			}
		}
	}
}

int main()
{
	int p=0;
	a[0]=1;
	s[0]=-1;
	while(p<=total)
	{
		bfs(p);
		p++;
	}
	return 0;
}