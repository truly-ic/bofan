#include<iostream>
using namespace std;
int main(){
	long long n,l,r;
	cin>>n>>l>>r;
	if(r-l>=n-1){
		cout<<n-1;
	} else {
		long long f=l-l%n+n;
		if(f<=r) cout<<n-1;
		else cout<<r%n;
	}
	return 0;
}