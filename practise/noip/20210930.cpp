#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
	string k;
	ifstream fin("grass.cpp");
	ofstream fout("g.txt");
	while(!fin.eof()){
		cout<<666;
		getline(fin,k);
		cout<<k<<endl;
		fout<<k<<endl;
	}

	return 0;
}

