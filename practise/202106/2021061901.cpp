#include <iostream>
#include <string> 
using namespace std;
int main(){
	string s,str,res,r;
	int k,j;
	getline(cin,s);
	getline(cin,str);
	k=s.find(str);
	j=str.find(s);
	if(k!=-1){
		cout<<str;
		return 0;
	} else if(j!=-1){
		cout<<s;
		return 0;
	} else {
		for(int i=str.length()-1;i>=0;i--)
		{
			for(int j=0;j<=i;j++)
			{
				r=str.substr(j,i);
				k=s.find(r);
				if(k!=-1&&r.length()>=res.length()) res=r;
			}
		}

	}	
	cout<<res<<endl<<endl;
	return 0;
}
