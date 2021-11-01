#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void Qsort(int a[],int l,int r);
int main()
{
	int n;
	srand(time(0));
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) a[i]=rand()%1000;
	Qsort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<' '<<a[i];
	return 0;
}

void Qsort(int a[],int l,int r)
{
	int L=l,R=r;
	float m=(a[l]+a[r])/2;
	while(L<R)
	{
		while(a[L]<m) L++;
		while(a[R]>m) R--;
		if(L<=R) {swap(a[L],a[R]);L++;R--;}
	}
	if(L<r) Qsort(a,L,r);
	if(l<R) Qsort(a,l,R);
}