#include<iostream>
using namespace std;
int a[10000],f[10000],d[10000],total=1,n;
void ex(int z)
{
	if(d[z]==n) return;
	else{
		for(int i=0;i<=1;i++)
		{
			total++;
			a[total]=i;
			f[total]=z;
			d[total]=d[z]++;
			if(d[total]==n)
			{
				int j=total;
				while(j>0)
				{
					cout<<a[j];
					j=f[j];
				}
				cout<<endl;
			}
		}

	}
}
int main()
{
	cin>>n;
	d[0]=d[1]=a[1]=1;
	int p=1;
	while(p<=total)
	{
		ex(p);
		p++;
	}
	return 0;
}