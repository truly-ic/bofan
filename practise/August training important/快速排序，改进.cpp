#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void quick(int a[],int ll,int rr,int num);
void insert(int a[],int ll,int rr);
int main()
{
	int n;
	srand(time(0));
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) a[i]=rand()%10000;
	quick(a,0,n-1,n);
	cout<<"finish"<<endl;
	return 0;
}

void quick(int a[],int ll,int rr,int num)
{
	int l=ll,r=rr;
	if(num>10)
	{
		float m=(a[l]+a[r])/2;
		while(l<r)
		{
			while(a[l]<m) l++;
			while(a[r]>m) r--;
			if(l<r) {
				swap(a[l],a[r]);
				l++;
				r--;
			}
		}
		if(r>ll) quick(a,ll,r,r-ll+1);
		if(l<rr) quick(a,l,rr,rr-l+1);
	} else {
		insert(a,ll,rr);	
}
}
void insert(int a[],int ll,int rr)
{
	int min=a[ll],mnum=ll;
		for(int i=ll+1;i<=rr;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				mnum=i;
			}
		}
		if(mnum!=0)
		{
			swap(a[mnum],a[ll]);
		}
		
		for(int i=ll+2;i<=rr;i++)
		{
			if(a[i]<a[i-1])
			{
				int j=i-1;
				int x=a[i];
				while(x<a[j])
				{
					a[j+1]=a[j];
					j--;
				}
				a[j+1]=x;
			}
		}
		return;
}
