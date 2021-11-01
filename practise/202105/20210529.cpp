#include <iostream>
using namespace std;
void sort(int a[],int n);
int main()
{
	int n,m;
	cout<<1<<endl;
	cout<<"please input 2 numbers:"<<endl;
	cin>>n>>m;
	int c=n+m;
	int a[c];
	cout<<"please input "<<n<<" numbers:"<<endl;
	for(int i=0;i<n;i++) 
		cin>>a[i];
	cout<<"please input "<<m<<" numbers:"<<endl;
	for(int i=0;i<m;i++) cin>>a[i+n];
	sort(a,n+m);
	for(int i=0;i<m+n;i++) cout<<a[i]<<' ';
}

void sort(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]<a[i-1])
		{
			int j,temp=a[i];
			for(j=i-1;j>=0&&temp>a[j];j++)
			{
				a[j+1]=a[j];
			}
			a[j-1]=temp;
		}
	}
}