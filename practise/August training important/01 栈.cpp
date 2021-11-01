#include<iostream>
using namespace std;
void f(int n);
int main()
{
	int n;
	cin>>n;
	f(n);
	return 0;
}

void f(int n)
{
	int s[n];
	s[0]=0;
	int p=0;
	while(p>=0)
	{
		if(s[p]==2) 
		{
			p--;
		} else {
			if(p==n-1){
				for(int i=0;i<n;i++) cout<<s[i];
				cout<<endl;
			} else {
				p++;
				s[p]=-1;
			}
				
		}
		s[p]+=1;
	}
}