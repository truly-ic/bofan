#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
//#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int n;
	cin>>n;
	
	int front=0,rear=n;
	for(int i=0;i<n;i++) a[i]=i+1;
	while(front!=rear)
	{
		cout<<a[front]<<endl;
		front=(front+1)%(n+1);
		a[rear]=a[front];
		front=(front+1)%(n+1);
		rear=(rear+1)%(n+1);
	}


	

}