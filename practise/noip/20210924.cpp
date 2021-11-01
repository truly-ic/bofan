#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
struct f{
	int x,y,money,dir,b;
};
int m,pic[102][102],mi[102][102];
bool j(f s[],int p){
	int nx,ny;
	switch(s[p].dir)
 	{
 		case 0:
 			nx=s[p].x+1;
 			ny=s[p].y;
 			break;
 		case 1:
 			nx=s[p].x;
 			ny=s[p].y+1;
 			break;
 		case 2:
 			nx=s[p].x-1;
 			ny=s[p].y;
 			break;
 		case 3:
 			nx=s[p].x;
 			ny=s[p].y-1;
 			break;
 	}
 	if(pic[nx][ny]==0&&s[p].b==0) return 0;
 	if(nx>m||ny>m||nx==0||ny==0)
 		return 0;
 	for(int i=p-1;i>=0;i++){
 		if(nx==s[i].x&&ny==s[i].y) return 0;
 	}
 	return 1;
}
int mon(int ax,int ay,int bx,int by){
	if(pic[ax][ay]==pic[bx][by]) return 0;
	if(pic[ax][ay]==0||pic[bx][by]==0) return 2;
	return 1;
}
int main()
{
	int n,ax,ay,color,p=0,total=0;
	cin>>m>>n;
	f s[m*m];
	s[0].x=s[0].y=1;
	s[0].money=s[0].b=0;
	for(int i=1;i<102;i++)
		for(int j=1;j<102;j++)
			mi[i][j]=100000;
	for(int i=1;i<=n;i++)
	{
		cin>>ax>>ay>>color;
		pic[ax][ay]=++color;
	}
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<= m;j++) cout<<pic[i][j]<<' ';
		cout<<endl;
	}
	int k=m*m-2;



	while(p>-1){
		if(s[p].dir>3||s[p].money>mi[s[p].x][s[p].y]||p>k) p--;
		else{
			mi[s[p].x][s[p].y]=s[p].money;
			cout<<s[p].x<<' '<<s[p].y<<' '<<s[p].dir<<' '<<j(s,p)<<endl;
 			if(j(s,p)){
 				p++;
 				switch(s[p-1].dir)
 				{
 					case 0:
 						s[p].x=s[p-1].x+1;
 						s[p].y=s[p-1].y;
 						s[p].dir=0;
 						s[p].money=s[p-1].money+mon(s[p-1].x,s[p-1].x+1,s[p-1].y,s[p-1].y);
 						if(pic[s[p].x][s[p].y]==0) s[p].b=0;
 						else s[p].b=1;
 						break;
 					case 1:
 						s[p].x=s[p-1].x;
 						s[p].y=s[p-1].y+1;
 						s[p].dir=0;
 						s[p].money=s[p-1].money+mon(s[p-1].x,s[p-1].x,s[p-1].y,s[p-1].y+1);
 						if(pic[s[p].x][s[p].y]==0) s[p].b=0;
 						else s[p].b=1;
 						break;
 					case 2:
 						s[p].x=s[p-1].x-1;
 						s[p].y=s[p-1].y;
 						s[p].dir=0;
 						s[p].money=s[p-1].money+mon(s[p-1].x,s[p-1].x-1,s[p-1].y,s[p-1].y);
 						if(pic[s[p].x][s[p].y]==0) s[p].b=0;
 						else s[p].b=1;
 						break;
 					case 3:
 						s[p].x=s[p-1].x;
 						s[p].y=s[p-1].y-1;
 						s[p].dir=0;
 						s[p].money=s[p-1].money+mon(s[p-1].x,s[p-1].x,s[p-1].y,s[p-1].y-1);
 						if(pic[s[p].x][s[p].y]==0) s[p].b=0;
 						else s[p].b=1;
 						break;
 				}
 			}
		}
		s[p].dir++;
	}


	if(mi[m][m]==100000) cout<<-1;
	else cout<<mi[m][m];
	return 0;
}


