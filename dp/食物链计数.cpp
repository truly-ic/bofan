#include<iostream>
using namespace std;
struct node{
	long long num=0,ty=-1;
	unsigned short int son[5001];
}no[5001];
bool e[6000],en[6000];
long long f(int i){
	if(no[i].ty!=-1)
		return no[i].ty;
	else{
		no[i].ty=0;
		for(int k=0;k<no[i].num;k++){
			no[i].ty+=f(no[i].son[k]);
		}
		no[i].ty%=80112002;
	}
	return no[i].ty;
}
int main(){
	int n,m,x,y,num=0,top[6000];
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>y>>x;
		y--;x--;
		e[x]=1;en[y]=1;
		no[x].son[no[x].num]=y;no[x].num++;
	}
	for(int i=0;i<n;i++){
		if(e[i]==0)
			if(en[i]==1) no[i].ty=1;
			else no[i].ty=0;
		else
			if(en[i]==0){
				top[num]=i;
				num++;
			}
	}
	//cout<<num<<endl;
	int res=0;
	for(int i=0;i<num;i++){
		res+=f(top[i]);
		res%=80112002;
	}
	cout<<res;
} 