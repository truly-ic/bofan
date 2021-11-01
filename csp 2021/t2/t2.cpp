#include<iostream>
#include<fstream>
using namespace std;
int a[200000],num[200000],n,q;
int main(){
	//ifstream fin("sort.in");
	//ofstream fout("sort.out");
	cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		int s=1;
		for(int j=1;j<=n;j++)
			if(a[j]<a[i]||(a[j]==a[i])&&j<i) s++;
		num[i]=s;
	}
	for(int i=0;i<q;i++){
		int e,b,c;
		cin>>e>>b;
		int d=a[b];
		if(e==2)
			cout<<num[b]<<endl;
		else {
			int l=1;
			cin>>c;
			if(c<d){
				for(int j=1;j<=n;j++){
					if(a[j]<c&&j!=b||a[j]==c&&j<b) l++;
				}
				for(int j=1;j<=n;j++){
					if(num[j]>=l&&num[j]<num[b]) num[j]++;
				}
				num[b]=l;a[b]=c;
			} else {
				for(int j=1;j<=n;j++){
					if(a[j]<c&&j!=b||a[j]==c&&j<b) l++;
				}
				for(int j=1;j<=n;j++){
					if(num[j]<=l&&num[j]>num[b]) num[j]--;
				}
				num[b]=l;a[b]=c;
			}
		}
	}
}