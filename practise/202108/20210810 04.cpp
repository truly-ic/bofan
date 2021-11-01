#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++){
			if(s[i]==s[j]) {
				s.erase(i,1);n--;i--;break;		
					}	
		
		}
	}
	cout<<s<<endl;
}

