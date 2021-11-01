#include<iostream> 
using namespace std;
int main(){
	int a,i,n=6,p,k;
	cin>>a;
	p=2;
	for(i=1;a>1;i++){
		if(a%p==0){
			cout<<p<<" ";
			a=a/p;
		}
		else
		  p=p+1;
	}	
}
