#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s[n+3];
	int p=1;
	s[1]=0;
	while(p>0)
	{
		while(p<n) s[++p]=0;
		for(int i=1;i<=n;i++) cout<<s[i]<<" ";
		cout<<endl;
		while(s[p]==1&&p>0) p--;
		if(p>0) s[p]++;
	}

}

