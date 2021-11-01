#include<iostream>
using namespace std;
int a[10];
int main()
{
	int n,f;
	cin>>n;
	a[5]=n+4;
	f=a[5]*3;
	for(int i=n;i<=8+n;i++)
		for(int j=n;j<=8+n;j++)
			if(i!=j&&i!=a[5]&&j!=a[5])
					{
						bool h=1;
					 	a[1]=i;
					 	a[2]=j;
					 	a[3]=f-a[1]-a[2];
					 	a[9]=2*a[5]-a[1];
					 	a[6]=f-a[3]-a[9];
					 	a[7]=2*a[5]-a[3];
					 	a[4]=f-a[1]-a[7];
					 	a[8]=f-a[7]-a[9];
					 	for(int z=1;z<=9;z++) 
					 		if(a[z]<n) h=0;
					 	if(!h) continue;

					 	if(a[4]==a[5]||a[3]==a[5]||a[8]==a[7]) continue;
						if(2*a[9]==a[2]+a[4]&&2*a[7]==a[2]+a[6]){
							cout<<a[1]<<' '<<a[2]<<' '<<a[3]<<endl;
							cout<<a[4]<<' '<<a[5]<<' '<<a[6]<<endl;
							cout<<a[7]<<' '<<a[8]<<' '<<a[9]<<endl<<endl<<endl;
						}




					}
}