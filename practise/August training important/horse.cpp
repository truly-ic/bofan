#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int row[n+1],con[m+1];
	row[0]=con[0]=1;
	int p=0;
	int s[100000];
	s[0]=1;
	while(p>=0)
	{
		if(s[p]>4) p--;
		else{
			row[p+1]=row[p];
			con[p+1]=con[p];
			if(s[p]==1)
			{
				row[p+1]+=1;
				con[p+1]+=2;
			}
			if(s[p]==2)
			{
				row[p+1]-=1;
				con[p+1]+=2;
			}
			if(s[p]==3)
			{
				row[p+1]+=2;
				con[p+1]+=1;
			}
			if(s[p]==4)
			{
				row[p+1]-=2;
				con[p+1]+=1;
			}
			if(row[p+1]<=n&&con[p+1]<=m&&row[p+1]>0)
			{
				if(row[p+1]==n&&con[p+1]==m)
				{
					for(int i=0;i<=p+1;i++) cout<<'('<<row[i]<<','<<con[i]<<')'<<"   ";
					cout<<endl;
				} else {
					
					p++;
					s[p]=0;
				}
			}
		}

		s[p]+=1;
	}
}