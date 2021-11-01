#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
double msqrt(double a);
int main()
{
	double n;
	cin>>n;
	printf("%.10lf\n",msqrt(n));
}

double msqrt(double a)
{
	double i,r=0;
	long long int j;
	for(int e=1;e<=11;e++)
	{
		i=1;
		for(j=1;j<=e;j++) i/=10;	

		while(r*r<a) r+=i;

		if(r*r==a) return r;

		r-=i;
	}
	return r;
}
