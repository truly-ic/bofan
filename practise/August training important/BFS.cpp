#include<iostream>
#include<iomanip>
using namespace std;
int pic[5][5]
{
	{0,1,0,1,0},
	{1,0,1,0,1},
	{0,1,0,1,1},
	{1,0,1,0,0},
	{0,1,1,0,0}
};
int a[1000],s[1000],total=1;

void expand(int p);
int main()
{
	a[1]=1;
	s[1]=0;
	int p=1;
	while(p<=total)
	{
		if(a[p]!=5) expand(p);
		p++;
	}
	for(int i=1;i<=total;i++) cout<<setw(3)<<i;
	cout<<endl;
	for(int i=1;i<=total;i++) cout<<setw(3)<<a[i];
	cout<<endl;
	for(int i=1;i<=total;i++) cout<<setw(3)<<s[i];
	return 0;
}

void expand(int z){
	for(int i=1;i<=5;i++)
	{
		if(pic[a[z]-1][i-1]==1)
		{
			int j=z;
			while(j!=0&&a[j]!=i)
			{
				j=s[j];					//判断祖先
			}
			if(j==0) {
				total++;
				a[total]=i;
				s[total]=z;
				if(i==5)
				{
					j=total;
					while(j!=0)
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