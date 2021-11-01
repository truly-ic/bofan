#include <iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cin>>n;
	cout<<"*";
	for(i=0;i<n*2-3;i++) cout<<" ";
	cout<<"*";
	for(i=0;i<n*2-3;i++) cout<<" ";
	cout<<"*"<<endl;
	for(i=1;i<=n-2;i++){
		for(j=0;j<i;j++) cout<<" ";
		cout<<"*";
		for(j=0;j<n*2-i*2-3;j++) cout<<" ";
		cout<<"*";
		for(j=0;j<i*2-1;j++) cout<<" ";
		cout<<"*";
		for(j=0;j<n*2-i*2-3;j++) cout<<" ";
		cout<<"*"<<endl;
	}
	for(i=0;i<n-1;i++) cout<<" ";
	cout<<"*";
	for(i=0;i<n*2-3;i++) cout<<" ";
	cout<<"*";	
}
