#include<iostream>
using namespace std;
void q(int a[],int ll,int rr){
	int l=ll,r=rr;
	int m=(a[ll]+a[rr])/2;
	while(l<r)
	{
		while(a[l]<=m) l++;
		while(a[r]>=m) r--;
		if(l<r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
	}
	if(l<rr) q(a,l,rr);
	if(r>ll) q(a,ll,r);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	q(a,0,n-1);
	for(int i=0;i<n;i++) cout<<a[i]<<' ';
}