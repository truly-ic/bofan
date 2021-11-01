#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
using namespace std;
unsigned short int dp[300][32769][4];
void c(){
	for(int i=0;i<=290;i++)
		for(int j=0;j<=32768;j++)
			for(int k=0;k<=3;k++)
				dp[i][j][k]=32766;
}
int f(int h,int x,int k){
	if(x==0) {
		//cout<<h<<' '<<k<<endl;
		return 1;
	}
	if(k==-1) return 0;
	if(x<0) return 0;
	if(h==0) return 0;
	if(dp[h][x][k]!=32766) return dp[h][x][k];
	dp[h][x][k]=f(h-1,x,k)+f(h,x-h*h,k-1);
	return dp[h][x][k];
}
int main()
{
	int t,x,h,max=0;
	cin>>t;
	c();
	for(int i=0;i<t;i++){
		cin>>x;
		h=sqrt(x);
		cout<<f(h,x,3)<<endl;
		//if(f(h,i,3)>max) max=f(h,i,3);
	}

	return 0;
} 