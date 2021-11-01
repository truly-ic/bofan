#include<iostream>
#include<cmath>
using namespace std;
bool prime(int a);
int prime3[80000000][2];
int main()
{
	int j=2;
	prime3[0][0]=3;
	prime3[0][1]=8;
	prime3[1][0]=5;
	prime3[1][1]=12;
	for(int i=9;i<3600000000;i+=2)
	{
		bool b1=prime(i),b2=prime(i+2);
		if(b1&&b2){
			prime3[j][0]=i;
			prime3[j][1]=2*j+2;
			j++;
			cout<<i<<endl;

			i+=2;
					}

	}			//孪生素数
	



}

bool prime(int a)
{
	int j=sqrt(a),k=1;
	for(int i=3;i<=j&&k;i++)
	{
		if(a%i==0) k=0;
	}
	if(k) return 1;
	else return 0;
}