#include<iostream>
#include<iomanip>
using namespace std;
int a[5][5]
{
	{0,0,0,1,0},
	{0,0,0,0,0},
	{0,0,1,0,0},
	{1,0,0,1,0},
	{0,0,1,0,0}
};

int road[5][5];
int f(int row,int col)
{
	int m=0;
	if(road[row][col]==-1)
	{
		if(a[row][col]==1)  
		{
			m=0;
		}
		else if(row==0 && col!=0){
			m=f(row,col-1);
		}
		else if (row!=0 && col==0){ 
			m=f(row-1,col);
		}
		else {
			m=f(row,col-1)+f(row-1,col);
		}
		road[row][col]=m;
		return m;
	}


}

int main()
{
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			road[i][j]=-1;
	road[0][0]=1;
	f(4,4);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++) cout<<setw(4)<<road[i][j];
		cout<<endl;
	}

}