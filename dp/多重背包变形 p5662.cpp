#include<iostream>
using namespace std;
int max(int a,int b){
	return (a>b)?a:b;
}
int main(){
	int t,n,m;
	cin>>t>>n>>m;
	int va[t][n];
	for(int i=0;i<t;i++)
		for(int j=0;j<n;j++)
			cin>>va[i][j];
	int dp[10001];
	int s=m,f=m;
	t--;
	for(int i=0;i<t;i++){
		for(int j=0;j<=s;j++) dp[j]=j;
		for(int j=0;j<n;j++){
			for(int k=va[i][j];k<=s;k++)
				dp[k]=max(dp[k],dp[k-va[i][j]]+va[i+1][j]);
		}
		for(int j=0;j<=f;j++)
			if(dp[j]>s) s=dp[j];
		f=s;
	}
	cout<<s;
}