/*
11 5
1 5 12
5 1 8
1 2 16
2 1 29
5 2 32
2 4 13
4 2 27
1 3 15
3 1 21
3 4 7
4 3 19
*/
#include<iostream>
using namespace std;
int a[100][100];
int main(){
	int n,u,max=0;
	cin>>n>>u;
	bool s[n];
	for(int i=0;i<=100;i++)
		for(int j=0;j<=100;j++)
			a[i][j]=1e5;
	for(int i=0;i<n;i++){
		int x,y,w;
		cin>>x>>y>>w;
		s[x]=s[y]=0;
		a[x][y]=w;
		x=(x>y)?x:y;
		max=(max>x)?max:x;
	}
	
	int f[max+1],path[max+1];
	for(int i=1;i<=max;i++){
		f[i]=a[u][i];
		if(a[u][i]!=1e5)
			path[i]=u;
		//cout<<i<<path[i]<<endl;
	}
	f[u]=0;path[u]=-1;
	for(int i=1;i<=max;i++){
		int min=1e5,temp=-1;
		for(int j=1;j<=max;j++)
			if(s[j]==0&&min>f[j]){
				temp=j;min=f[j];
			}
		if(temp==-1) break;
		else{
			s[temp]=1;
			for(int j=1;j<=max;j++)
				if(a[temp][j]+f[temp]<f[j]){
					path[j]=temp;f[j]=f[temp]+a[temp][j];
				}
		}
	}
	for(int i=1;i<=max;i++){
		if(f[i]==1e5) cout<<"There's no way to "<<i<<endl;
		else {
			cout<<i<<"   "<<"From "<<path[i]<<" The shortest distance is "<<f[i]<<endl;
		}
	}
}