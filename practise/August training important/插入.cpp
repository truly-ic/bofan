#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void sort1(int a[],int n)
{
	int min=a[0],mnum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			mnum=i;
		}
	}
	if(mnum!=0)
	{
		a[mnum]=a[0];
		a[0]=min;
	}
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int x=a[i];
		if(a[j]>x)
		{
			while(a[j]>x)
			{
				a[j+1]=a[j];
				j--;
			}
			a[j+1]=x;
		}
		
	}
}

int main()
{
	int n;
	srand(time(0));
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) a[i]=rand()%1000;
	sort1(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<"    ";
	return 0;
}