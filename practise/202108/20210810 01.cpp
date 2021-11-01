#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int n,num=1;
	cin>>n;
	int c=sqrt(n);
	int a[n+3];
	for(int i=2;i<=n+1;i++) a[i]=0;
	for(int i=2;i<=c;i++)
	{
		if(a[i]==0){
			int k=n/i;
			for(int f=2;f<=k;f++)
			{
				a[i*f]=1;							//筛法
			}
		}
		
	}
	for(int i=3;i<=n;i+=2) 
		if(a[i]==0) num++;
	cout<<n<<' '<<num;

}

