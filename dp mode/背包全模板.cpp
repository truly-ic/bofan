/* 一维01背包
#include<iostream>
using namespace std;
int dp[2000],we[2000],va[2000];
int main(){
	int n,m;
	cin>>m>>n;
	for(int i=0;i<n;i++)
		cin>>we[i]>>va[i];
	for(int i=0;i<n;i++)
		for(int j=m;j>=we[i];j--)
			dp[j]=max(dp[j],dp[j-we[i]]+va[i]);
	cout<<dp[m];
}*/

/*完全背包模板
#include<iostream>
using namespace std;
long long dp[20000000],we[200000],va[200000];
int main(){
	int n,m;
	cin>>m>>n;
	for(int i=0;i<n;i++)
		cin>>we[i]>>va[i];
	for(int i=0;i<n;i++)
		for(int j=we[i];j<=m;j++)
			dp[j]=max(dp[j],dp[j-we[i]]+va[i]);
	cout<<dp[m];
}*/
/*多重背包模板
#include<iostream>
using namespace std;
int dp[100000],we[100000],va[100000],num[100000];
int main(){
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=0;i<n;i++)
		cin>>we[i]>>va[i]>>num[i];
	for(int i=0;i<n;i++)
		for(int j=1;j<=num[i];j++)
			for(int k=m;k>=we[i];k--){
				dp[k]=max(dp[k],dp[k-we[i]]+va[i]);
			}
	for(int i=0;i<=m;i++)
		if(ans<dp[i])
			ans=dp[i];
	cout<<ans;
}
*/