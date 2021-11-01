#include<cstdlib>
#include<ctime>
using namespace std;
void rand(int n,int a[]){
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		a[i]=rand()%1000;
	}
}

