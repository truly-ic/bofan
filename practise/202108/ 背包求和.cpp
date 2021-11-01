#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;
const int maxn=10000;
int x[1001];
struct s{
	int num=-1;
	string k[3000];
}dp[100][100];

int f(int nu,int re){
	cout<<nu<<' '<<re<<endl;
	if(nu==0&&re==x[0]) {
		dp[0][re].num=1;dp[0][re].k[0]="1";
		return 1;
	}
	if(re<0) return -1;
	if(dp[nu][re].num!=-1) return 1;
	if(re==0){
		dp[nu][re].num=1;
		dp[nu][re].k[0]="0";
		for(int i=1;i<=nu;i++) dp[nu][re].k[0]=dp[nu][re].k[0]+"0";
		return 1;
	}
	else if(nu==0) return -1;
	else {
		int a=f(nu-1,re),b=f(nu-1,re-x[nu]);
		switch(a){
			case 1:
				dp[nu][re].num=dp[nu-1][re].num;
				for(int i=0;i<dp[nu-1][re].num;i++){
					dp[nu][re].k[i]="0";dp[nu][re].k[i].insert(1,dp[nu-1][re].k[i]);
				}
				break;
			case -1:
				dp[nu][re].num=0;
		}
		int j=dp[nu][re].num;
		if(b==1){

			dp[nu][re].num+=dp[nu-1][re-x[nu]].num;
			for(int i=j;i<dp[nu][re].num;i++){
				dp[nu][re].k[i]="1";dp[nu][re].k[i].insert(1,dp[nu-1][re-x[nu]].k[i-j]);
			}
		}
		return 1;
	}
}

int main()
{
	int n,total;
	cin>>n>>total;
	for(int i=0;i<n;i++) cin>>x[i];
	f(n-1,total);
	cout<<dp[n-1][total].num<<endl;
	/*for(int i=0;i<n;i++){
		for(int j=0;j<=total;j++) cout<<dp[i][j].num<<' ';
		cout<<endl;
	}*/
	for(int i=0;i<dp[n-1][total].num;i++)
	{
		for(int j=0;j<n;j++){
			if(dp[n-1][total].k[i][j]==49) cout<<x[n-j-1]<<' ';
		}
		cout<<endl;
	}
}