#include<iostream>
using namespace std;
int a[5][5]
{
	{0,1,1,0,0},
	{1,0,1,1,1},
	{1,1,0,1,0},
	{0,1,1,0,1},
	{0,1,0,1,0}
};
int main()
{
	int n,p=1,s[100];
	cin>>n;
	bool c;
	s[0]=1;
	s[1]=1;
	while(p!=0)
	{
		if(s[p]>5) p--;
		else {
			c=1;
			for(int i=0;i<p;i++)
			{
				if(s[p]==s[i]) c=0;
			}
			if(a[s[p-1]-1][s[p]-1]==0) c=0;
			if(c==1)
			{
				if(s[p]==n)
				{
					for(int i=0;i<=p;i++) cout<<s[i];
					cout<<endl;
				} else {
					p++;
					s[p]=0;
			}
			}
		}
			
		s[p]+=1;
	} 
	return 0;
}