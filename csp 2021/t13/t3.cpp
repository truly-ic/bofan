#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;
struct f{
	int num;
	string a;
}ok[1001];
int k=0;
bool cuo(string a){
	int c=a.length(),num1=0,num2=0,d=0;
	long long h[5]={-1,-1,-1,-1,-1};
	if(a[0]=='.'||a[c-1]==':') return 1;
	for(int i=0;i<c;i++){
		if(a[i]=='.'){
			if(a[i+1]=='.'||a[i+1]==':') return 1;
			num1++;
		}
		if(a[i]==':'){
			if(num1!=3) return 1;
			num2++;
		}
		}
	if(num1!=3||num2!=1) return 1;
	for(int i=0;i<c;i++){
		if(h[d]==0&&a[i]>=48&&a[i]<58) return 1;
		else if(h[d]!=-1&&(a[i]==':'||a[i]=='.')) d++;
		else if(h[d]==-1&&a[i]>=48&&a[i]<58) h[d]=a[i]-48;
		else h[d]=10*h[d]+a[i]-48;
	}
	for(int i=0;i<4;i++)
		if(h[i]>255) return 1;
	if(h[4]>65535) return 1;
	return 0;
	
}
bool chong(string a){
	for(int i=0;i<k;i++){
		if(a==ok[i].a) return 1;
	}
	return 0;
}
int main(){
	//cout<<cuo("1.38.5.186:04152");
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		bool c=1;
		string op,ad;
		cin>>op>>ad;
		if(op=="Client"){
			if(cuo(ad)) cout<<"ERR"<<endl;
			else {
				for(int i=0;(i<k)&&c;i++)
					if(ad==ok[i].a){
						cout<<ok[i].num<<endl;c=0;
					} 
				if(c) cout<<"FAIL"<<endl;
			}
		} else {
			if(cuo(ad)) cout<<"ERR"<<endl;
			else if(chong(ad)) cout<<"FAIL"<<endl;
			else {
				ok[k].num=i;ok[k].a=ad;k++;cout<<"OK"<<endl;
			}
		}
	}
	return 0;
}