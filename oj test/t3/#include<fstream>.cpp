#include<iostream>
#include<cstdio>
using namespace std;
int a[5000001];
int f(int ll,int rr,int k){
	int l=ll,r=rr;
	int m=(a[l]+a[r])/2;
	while(l<=r){
		while(a[l]<m) l++;
		while(a[r]>m) r--;
		if(l<=r){
			swap(a[l],a[r]);l++;r--;
		}
	}
	//cout<<r<<' '<<l<<endl;
	if(k>r&&k<l) return m;
	if(k<=r) return f(ll,r,k);
	else return f(l,rr,k);
}
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	cout<<f(0,n-1,k);
}