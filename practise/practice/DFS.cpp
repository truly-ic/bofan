#include<iostream>
using namespace std;
int pic[5][5]={
	{0,1,1,0,0},
	{1,0,0,1,1},
	{1,0,0,1,0},
	{0,1,1,0,1},
	{0,1,0,1,0}
};
int a[1000];
int main()
{
	a[0]=1;
	int p=1;
	while(p>0)
	{
		if(a[p]>5) p--;
		else {
			bool c=1;
			if(pic[a[p]-1][a[p-1]-1]==0) c=0;
			for(int i=0;i<p;i++) 
				if(a[i]==a[p])
				{
					c=0;
					break;
				}
			if(c)
			{
				if(a[p]==5)
				{
					for(int i=0;i<=p;i++) cout<<a[i];
					cout<<endl;
				} else {
					p++;
					a[p]=0;
				}
			}
		}
		a[p]++;
	}
}