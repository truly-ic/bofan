//标记法 
#include<iostream> 
using namespace std;
int main(){
	int a[8]={3,2,5,4,6,8,2,5},i,n=8,p,k;
	int tag[10];	
	for(i=1;i<10;i++) tag[i]=0;	
	for(i=0;i<n;i++) tag[a[i]]=1;
	for(i=1;i<=10;i++)
	  if(tag[i]==1) cout<<i<<" ";
}
