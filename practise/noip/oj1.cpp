#include<iostream>
using namespace std;
void sort(int a[],int ll,int rr)
{
	int l=ll,r=rr;
	float m=(a[l]+a[r])/2;
	while(l<r)
	{
		while(a[l]<m) l++;
		while(a[r]>m) r--;
		if(l<=r){
			swap(a[l],a[r]);
			l++;
			r--;
		}
		if(l<rr) sort(a,l,rr);
		if(r>ll) sort(a,ll,r);
	}
}

bool find(int a[],int n,int purpose)
{
	int l=0,r=n,m,mid;
		while(l!=r-1&&l!=r)
	{
		mid=(l+r)/2;
		m=a[mid];
		if(purpose>m)  l=mid;
	    if(purpose<m)  r=mid;
		if(purpose==m) {	
			return 1;
		}

	}
	if(a[l]==purpose||a[r]==purpose) return 1;
	return 0;
}

int main()
{
	int n,z,targets=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,0,n-1);
	z=n;
	for(int i=1;i<n;i++)
	{
		if(a[i-1]==a[i]) 
			{
			a[i-1]=-1;
			z--;
		}
	}
	for(int i=1;i<n;i++)
	{
		int j=i;
		if(a[i]!=-1)
		{
			while(a[j-1]==-1)
			{
				a[j-1]=a[j];
				a[j]=-1;
				j--;
			}
		}
		
	}
	int k=0;

  for(int i=0;i<z;i++)
	for(int j=i+1;j<z;j++)
	{
		bool c=1;
		for(int f=0;f<k;f++)
			{
				if(b[f]==a[i]+a[j]) c=0;
			}
		if(a[i]!=a[j]&&c) 
		{
			if(find(a,z-1,a[i]+a[j])) {
				targets++;
				b[k]=a[i]+a[j];
				k++;
				}
		}
	}
	cout<<targets;
}