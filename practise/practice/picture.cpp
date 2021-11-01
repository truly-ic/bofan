#include<iostream>
int a[7][7]=
{
	{0,1,1,0,0,0,0},
	{1,0,0,1,1,0,0},
	{1,0,0,0,1,1,0},
	{0,1,0,0,0,1,1},
	{0,1,1,0,0,0,0},
	{0,0,1,1,0,0,0},
	{0,0,0,1,0,0,0}
};
using namespace std;
int main()
{
	int s[100];
	s[0]=1;
	s[1]=2;
	int p=1;
	while(p>0)
	{
		if(s[p]>7) p--;
		else{
			bool c=1;
			if(a[s[p-1]-1][s[p]-1]==0) c=0;
			for(int i=0;i<p;i++)
				if(s[p]==s[i]) c=0;

			if(c)
			{
				if(s[p]==7){
					for(int i=0;i<=p;i++) cout<<s[i];
					cout<<endl;
				} else {
					p++;
					s[p]=0;
				}
			}
		}
		s[p]++;
	}

}