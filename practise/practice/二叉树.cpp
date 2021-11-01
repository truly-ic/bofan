#include<iostream>
#include<cstdlib>
using namespace std;
void make(int a[],int l[],int r[],int n);
void print(int a[],int l[],int r[],int b);
void rand(int a[],int n);
int main()
{
	srand(time(0));
	int n;
	cin>>n;
	int  a[n], l[n], r[n];
	for(int i=0;i<n;i++) 
	{
		a[i]=rand()%1000;
		l[i]=r[i]=0;
	}
	make(a,l,r,n);
	print (a,l,r,1);
	return 0;
}

void make(int a[],int l[],int r[],int n){
	for(int i=1;i<n;i++)
	{
		int p=0;
		while(p!=-1)
		{
			if(a[i]>a[p])
			{
				if(r[p]==0) {
					r[p]=i;
					p=-1;
				}	else	{
					p=r[p];
				}

			} else {
				if(l[p]==0) {
					l[p]=i;
					p=-1;
				}	else	{
					p=l[p];
				}
			}
		}
	}
}

void print(int a[],int l[],int r[],int b)
{
	if(l[b]!=0) print(a,l,r,l[b]);
	cout<<a[b]<<"  ";
	if(r[b]!=0) print(a,l,r,r[b]);
}
