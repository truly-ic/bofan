//求最小出队人数
#include<iostream>
using namespace std;
int a[101],small=1e3,dp1[101][231],dp2[101][231],n;
int f(bool ty,int now,int bi){
	if(ty){
		int x,y;
		if(now>=n) return 0;
		if(dp1[now][bi]!=-1) return dp1[now][bi];
		
		if(a[now]>=bi) 
			x=f(1,now+1,bi)+1;
		else{
			x=f(1,now+1,a[now]);y=f(1,now+1,bi)+1;
			x=(x<y)?x:y;
		}
		dp1[now][bi]=x;
		return x;
	} else {
		int x,y;
		if(now<0) return 0;
		if(dp2[now][bi]!=-1) return dp2[now][bi];
		if(a[now]>=bi)
			x=f(0,now-1,bi)+1;
		else{
			x=f(0,now-1,a[now]);y=f(0,now-1,bi)+1;
			x=(x<y)?x:y;
		}
		dp2[now][bi]=x;
		return x;
	}
}
void c(){
		for(int i=0;i<=100;i++)
			for(int k=120;k<=230;k++)
				dp1[i][k]=dp2[i][k]=-1;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	c();
	for(int j=0;j<n;j++){
		int x=f(0,j-1,a[j])+f(1,j+1,a[j]);
		if(x<small) small=x;
	}
	cout<<small;
}