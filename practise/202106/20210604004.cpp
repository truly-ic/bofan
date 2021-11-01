//筛法 
#include<iostream> 
using namespace std;
int main(){
	int a[100];
	int i,j,k,n; 
	cin>>n;
	for(i=0;i<n;i++) a[i]=0;
	for(i=2;i*i<=n;i++)
	  if(a[i]==0)	  	
	  	for(k=i+i;k<=n;k=k+i) a[k]=1;
	for(i=2;i<=n;i++)  
	  if(a[i]==0) cout<<i<<" ";
}
