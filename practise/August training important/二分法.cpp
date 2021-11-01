#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
double msqrt(double a);
int main()
{
	double a,l,r,m;
	cin>>a;
	l=0;r=a;
	while(true)
	{
		m=(l+r)/2;
		if(a-m*m<0.00000001&&a-m*m>0) {printf("%f %.12f\n",a,m);return 0;}
		if(m*m>a) r=m;
		else l=m;
	}
	
}

