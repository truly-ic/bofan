#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int n,m;
	cin>>n>>m;
	int p=0;
	a[0]=1;
	while(p>=0)
	{
		if(a[p]>n) p--;
		else{
			
				if(p==m-1)
				{
					for(int i=0;i<m;i++) cout<<a[i];
					cout<<endl;
				}
				else{
					p++;
					a[p]=a[p-1];
				}
			}
		a[p]++;
	}
	return 0;
}