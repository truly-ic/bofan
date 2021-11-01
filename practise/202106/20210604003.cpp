#include<iostream> 
using namespace std;
int main(){
	int i,n=6,p,k;
	int a[6]={3,2,6,5,8,1};
	p=3;k=a[p];
	for(i=1;i<=1460;i++){
	  if(p==n-1){
	  	a[p]=a[0];
	  	p=0;
	  }
	  else{
	  	a[p]=a[p+1];
	  	p++;
	  }	
	}
	a[p]=k;
   for(i=0;i<n;i++)	cout<<a[i]<<" ";
}
