#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int n;
void shell(int a[],int group);
int main()
{
	srand(time(0));
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) a[i]=rand()%1000;
	int b=n/3;
	shell(a,b);
	cout<<"finish"<<endl;
	return 0;
}

void shell(int a[],int group)
{
	for(int i=0;i<group;i++)
	{

		int min=a[i],mnum=i;
		for(int j=i+group;j<n;j+=group)
		{
			if(min>a[j])
			{
				min=a[j];
				mnum=j;
			}
		}
		if(mnum!=0)
		{
			swap(a[i],a[mnum]);
		}									//哨兵
		for(int j=i+2*group;j<n;j+=group)
		{
			if(a[j]<a[j-group])
			{
				int k=j-group;
				int x=a[j];
				while(a[k]>x)
				{
					a[k+group]=a[k];
					k-=group;
				}
				a[k+group]=x;
			}
		}
	}
	if(group!=1) shell(a,group/3);
}










