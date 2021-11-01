#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string a;
	long long int m,n,ten=0,p=0;
	cin>>m;
	cin>>a;
	cin>>n;
	int f=a.length();
	for(int i=0;i<f;i++)
	{
		int z=a[i];
		if(z>60)
			z-=55;
		else
			z-=48;
		z=z*pow(m,f-i-1);
		ten+=z;
	}
	while(ten!=0)
	{
		int z=ten%n;
		if(z>=10) z+=55;
		else z+=48;
		a[p]=z;
		ten/=n;
		p++;
	}

	for(int i=p-1;i>=0;i--) cout<<a[i];

}

