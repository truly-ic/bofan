/*
单调栈
#include<iostream>
#include<cmath>
#include<algorithm>
int stack[1000000],a[1000000];
int fi(int purpose,int r){
	int l=1;
	while(l<r){
		int mid=(l+r)/2;
		if(stack[mid]<purpose) r=mid;
		else l=mid+1;
	}
	return l;
}
int fii(int purpose,int r){
	int l=1;
	while(l<r){
		int mid=(l+r)/2;
		if(stack[mid]>=purpose) r=mid;
		else l=mid+1;
	}
	return l;
}
using namespace std;
int main(){
	int n=0,f=0;
	stack[f]=1e8;
	string c;
	getline(cin,c);
	for(int i=0;i<100000;i++)
		a[i]=-1;
	for(int i=0;i<c.length();i++){   			//最长不上升子序列
		if(c[i]>=48&&c[i]<58)
			if(a[n]==-1)
				a[n]=c[i]-48;
			else
				a[n]=a[n]*10+c[i]-48;
		else 
			if(a[n]!=-1)
				n++;
	}
	n++;
	for(int i=0;i<n;i++){
		if(a[i]<=stack[f]){
			f++;
			stack[f]=a[i];
		} else {
			stack[fi(a[i],f)]=a[i];
		}
	}
	cout<<f<<endl;
	f=0;stack[f]=-1e5;
	for(int i=0;i<n;i++){							//最长上升子序列
		if(a[i]>stack[f]){
			f++;stack[f]=a[i];
		} else {
			stack[fii(a[i],f)]=a[i];
		}
	}
	cout<<f;
	return 0;
}*/
#include<iostream>
using namespace std;
int l[1000000],a[1000000],maxx=0,n=0;
int fi(int purpose,int r){
	int ll=0;
	while(ll<=r){
		int mid=(ll+r)/2;
		if(a[l[mid]]>=purpose) ll=mid+1;
		else r=mid-1;
		//cout<<purpose<<' '<<ll<<' '<<r<<endl;
	}
	return ll-1;
}
int fii(int purpose,int r){
	int ll=0;
	while(ll<=r){
		int mid=(ll+r)/2;
		if(a[l[mid]]<purpose) ll=mid+1;
		else r=mid-1;
		//cout<<purpose<<' '<<ll<<' '<<r<<endl;
	}
	return ll-1;
}
int main(){
	string c;
	getline(cin,c);
	for(int i=0;i<=100000;i++)
		a[i]=-1;
	for(int i=0;i<c.length();i++){   			//最长不上升子序列
		if(c[i]>=48&&c[i]<58)
			if(a[n]==-1)
				a[n]=c[i]-48;
			else
				a[n]=a[n]*10+c[i]-48;
		else 
			if(a[n]!=-1)
				n++;
	}
	n++;l[0]=0;
	for(int i=1;i<n;i++){
		if(a[i]<=a[l[maxx]]){
			maxx++;l[maxx]=i;
		} else {
			l[fi(a[i],maxx)+1]=i;
		}
	}
	
	cout<<maxx+1<<endl;maxx=0;l[0]=0;
	for(int i=1;i<n;i++){
		if(a[i]>a[l[maxx]]){
			maxx++;l[maxx]=i;
		} else {
			l[fii(a[i],maxx)+1]=i;
		}
	}
	cout<<maxx+1<<endl;
}