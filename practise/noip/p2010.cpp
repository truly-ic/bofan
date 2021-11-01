#include<iostream>
using namespace std;
int z[10000];
int main()
{
	int a,b,c,d,results,j1,j2,j3,j4,h;
	cin>>a>>b;
	c=a/10000;
	d=b/10000;
	results=d-c+1;
	for(int i=c;i<=d;i++)
	{
		z[i-c]=i;
	}
	for(int i=0;i<=d-c;i++)
	{
		if(i==0)
		{
		
			j1=c/1000;
			j2=c/100-j1*10;
			j3=c/10-j1*100-j2*10;
			j4=c%10;
			h=a%10000;
			h/=100;
			if(j4*10+j3<h) {results--;continue;}
		}
		if(i==d-c)
		{
			
			j1=d/1000;
			j2=d/100-j1*10;
			j3=d/10-j1*100-j2*10;
			j4=d%10;
			h=b%10000;
			h/=100;
			if(j4*10+j3>h) {results--;continue;}
		}
			j1=z[i]/1000;
			j2=z[i]/100-j1*10;
			j3=z[i]/10-j1*100-j2*10;
			j4=z[i]%10;
			int month=j4*10+j3;
			if(month==1||month==3||month==5||month==7||month==8||month==1||month==10||month==12)
			{
				if(10*j2+j1<=31) continue;
			}
			if(month==4||month==6||month==9||month==11)
			{
				if(10*j2+j1<=30) continue;
			}
			if(month==2)
			{
				if(z[i]==9220) {
					continue;
				}
				if(10*j2+j1<=28){
					continue;
				}
			}

			results--;

	}
	cout<<results;
	return 0;
}