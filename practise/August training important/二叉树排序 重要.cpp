#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
using namespace std;
void make(int a[],int l[],int r[],int n);
void print(int a[],int l[],int r[],int n);
int main()
{
	int n;
	srand(time(0));
	cin>>n;
	int a[n+1],l[n+1],r[n+1];
	for(int i=1;i<=n;i++) l[i]=r[i]=0;
	for(int i=1;i<=n;i++) a[i]=rand()%1000000;
	make(a,l,r,n);

	print(a,l,r,1);
	return 0;
}

void make(int a[],int l[],int r[],int n)
{

	for(int i=2;i<=n;i++)
	{
		int p=1;
		while(p>=0)
		{
			if(a[i]<a[p])
			{
				if(l[p]==0) {l[p]=i;p=-1;}
				else p=l[p];
			} else {
				if(r[p]==0) {r[p]=i;p=-1;}
				else p=r[p];
			}
		}

	}

}
void print(int a[],int l[],int r[],int n){
	if(l[n]!=0)
		print(a,l,r,l[n]);
	cout<<a[n]<<"   ";
	if (r[n]!=0)
		print(a,l,r,r[n]);
}

