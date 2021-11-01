#include <iostream>
#include <string> 
using namespace std;
int main(){
	string s,str;
	cin>>s>>str;
	int k=str.length();
	int j,sum=0;
	j=s.find(str);
	while(j!=-1)
	{
		s.erase(j,k);
		sum++;
		j=s.find(str);
	}
	cout<<sum<<endl<<endl;
	return 0;
}
