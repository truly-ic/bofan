#include<cstdio>
#include<iostream>
using namespace std;
struct qu{
	int begin,end;
} q1[200000],q2[200000];
int main(){
	//freopen("fruit.in","r",stdin);
	//freopen("fruit.out","w",stdout);
	bool a[200001];
	int link1[200001],link2[200001];
	int n,n1=1,n2=1,s;
	scanf("%d",&n);
	int num=n;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	s=!a[0];link1[0]=link2[0]=1;
	for(int i=0;i<n;i++){
		if(a[i]!=s){
			if(n1==n2){
				q2[n2-1].end=i-1;q1[n1].begin=i;n1++;s=a[i];
			} else {
				q1[n1-1].end=i-1;q2[n2].begin=i;n2++;s=a[i];
			}
		}
	}
	if(n1==n2) q2[n2-1].end=n-1;
	else q1[n1-1].end=n-1;
/*	for(int i=1;i<n1;i++)
		cout<<q1[i].begin<<' '<<q1[i].end<<endl;
	for(int i=1;i<n2;i++)
		cout<<q2[i].begin<<' '<<q2[i].end<<endl;	*/
	for(int i=1;i<n1;i++)
		link1[i]=i+1;
	for(int i=1;i<n2;i++)
		link2[i]=i+1;		
	link1[n1-1]=link2[n2-1]=-1;
//	cout<<endl<<endl<<endl<<endl;
	while(num!=0){
		for(int i=0;link1[i]!=-1;i=link1[i]){
			while(link1[i]!=-1&&q1[link1[i]].begin>q1[link1[i]].end)
				link1[i]=link1[link1[i]];
		}
		for(int i=0;link2[i]!=-1;i=link2[i]){
			while(link2[i]!=-1&&q2[link2[i]].begin>q2[link2[i]].end)
				link2[i]=link2[link2[i]];
		}
		bool c=0;int la=-1;
		if(link1[0]!=-1&&link2[0]!=-1){
			if(q2[link2[0]].begin<q1[link1[0]].begin)
				c=1;
		}
		if(link1[0]==-1) c=1;
		int p1=0,p2=0;
		while(1){
			if(!c){
				while(link1[p1]!=-1&&la>q1[link1[p1]].begin) p1=link1[p1];
				if(link1[p1]==-1) break;
				else {
					printf("%d ",q1[link1[p1]].begin+1);num--;la=q1[link1[p1]].begin;q1[link1[p1]].begin++;c=!c;p1=link1[p1];
				}
			} else {
				while(link2[p2]!=-1&&la>q2[link2[p2]].begin) p2=link2[p2];
				if(link2[p2]==-1) break;
				else {
					printf("%d ",q2[link2[p2]].begin+1);num--;la=q2[link2[p2]].begin;q2[link2[p2]].begin++;c=!c;p2=link2[p2];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}