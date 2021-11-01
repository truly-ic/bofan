#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int max=-1,f,mnum=0;
	string s,st,str;
	cin>>s>>st;
	string mstr[s.length()+1];
	int n=s.length();
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n-i;j++)
		{
			str=s.substr(j,i);
			f=st.find(str);
			if(f!=-1&&i>=max)
			{
				if(i==max) 
				{	mnum++;
					mstr[mnum]=str;					
				} else {
					mnum=0;
					max=i;
					mstr[mnum]=str;
				}

			}
		}
	}
	cout<<mnum<<endl;
	if(max==0) cout<<"no";
	else 
	{
		cout<<s<<"   "<<st<<endl;
		for(int i=0;i<=mnum;i++) cout<<mstr[i]<<endl;
	}
	return 0;
}