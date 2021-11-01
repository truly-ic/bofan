#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
void q(int a[],int ll,int rr);
int main()
{
	int n;
	cin>>n;
	int a[n];
	srand(time(0));
	for(int i=0;i<n;i++)
		a[i]=rand()%10000;
	q(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
	return 0;
}

void q(int a[],int ll,int rr)
{
	cout<<rr<<endl;
	float m=a[ll]+a[rr];
	m/=2;
	int l=ll,r=rr;
	while(l<r)
	{
		while(a[l]<=m) l++;
		while(a[r]>=m) r--;
		if(l<r) {
			swap(a[l],a[r]);
			l++;r--;
		}
	}
	if(l<rr) q(a,l,rr);
	if(r>ll) q(a,ll,r);
	
}