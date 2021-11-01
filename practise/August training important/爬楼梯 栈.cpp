#include<iostream>
using namespace std;
int s[100];
int n;
int main()
{
	cin>>n;
	s[0]=1;
	int p=0,remain=n-1;
	while(p>=0)
	{
		if(s[p]==3) 
		{
			remain+=s[p];
			p--;
		}
		else{
			if(remain==0) {
				for(int i=0;i<=p;i++) cout<<s[i];
				cout<<endl;
				remain+=s[p];
				p--;
			} else {
				p++;
				s[p]=0;
			}
		}
		s[p]++;
		remain--;
	}
}

