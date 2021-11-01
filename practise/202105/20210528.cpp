#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,s;
	for(a=1;a<=6;a++)
	for(b=1;b<=6;b++)
	 if(a!=b)
	   for(c=1;c<=6;c++)
	     if(c!=a&&c!=b)
	      for(d=1;d<=6;d++)
	        if(d!=a&&d!=b&&d!=c)
	      for(e=1;e<=6;e++)
	        if(e!=a&&e!=b&&e!=c&&e!=d)
	      for(f=1;f<=6;f++)
	      	if(f!=a&&f!=b&&f!=c&&f!=d&&f!=e){
		      s=a+b+c;
		      if(c+d+e==s&&e+f+a==s){
			    cout<<"  "<<a<<endl;
			    cout<<" "<<b<<" "<<f<<endl;
			    cout<<c<<" "<<d<<" "<<e<<endl;
			    cout<<endl;
			    b=6;c=6;d=6;e=6;f=6;
		       }
	        }
}
