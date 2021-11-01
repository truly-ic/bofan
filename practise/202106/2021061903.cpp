#include <iostream>
#include <string> 
using namespace std;
int main(){
	string s,str;
	getline(cin,s);
	for(int i=1;i<=s.length();i++)
	{
		for(int j=0;j<i;j++) 
		{
			if(s[i]==s[j])
			{
				s.erase(i,1);
				i--;
				break;
			}
		}
	}
	cout<<s<<endl<<endl;
	return 0;
}
