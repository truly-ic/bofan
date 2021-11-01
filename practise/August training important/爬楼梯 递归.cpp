#include<iostream>
using namespace std;
int s[100];
int n;
void f(int z,int g);
int main()
{
	cin>>n;
	f(n,0);
	return 0;
}

void f(int z,int g)
{
	if(z==0)
	{
		for(int i=0;i<g;i++)
			cout<<s[i];
		cout<<endl;
	}
	else{
		s[g]=1;
		f(z-1,g+1);
		if(z>1)
		{
			s[g]=2;
			f(z-2,g+1);
		}
		
	}
}