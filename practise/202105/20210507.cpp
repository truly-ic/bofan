#include<iostream>
using namespace std;

void bigger();
void getMod();
void countNum();
void n2Times();
void bigCommonDivisor();
void getTop2of4();
void printTrigleStars();
void printRectangle();
void printBlankTrigle();
void gcd2();
int gcdR(int a, int b);
int c;

int main()
{
	//call the bigger function
	//bigger();
	//call the mod function
	//getMod();
	//call add sequence number
	//countNum();
	//call 2's n times laster digit
	//n2Times();
	//call greatest common divisor
	//bigCommonDivisor();
	//call top 2
	//getTop2of4();
	//print trigle
	//printTrigleStars();
	//print blank rectangle
	//printRectangle();
	//printBlankTrigle();
	gcd2();
}

void gcd2()
{
	int a,b;
	c=0;
	cout<<"Please input 2 numbers:"<<endl;
	cin>>a>>b;
	cout<<"The Greatest Common Divisor is:"<<gcdR(a,b)<<endl;
	cout<<"Riverse Times is :"<<c<<endl;
}
//recursive function for GCD
int gcdR(int a,int b)
{
	c +=1;
    if(a%b==0) return b;
    else return gcdR(b%a,a);
}


void printBlankTrigle()
{
	int n,i,j;
    cout<<"Please input a number for blank trigle  lines:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
		for(j=0;j<n/2-i/2;j++) cout<<" ";
        for(j=0;j<=i;j++) 
			if(j==0 || j==i || i==n-1) 
				cout<<"*"; else cout<<" ";
        cout<<endl;
	}
}

void printRectangle()
{
	int a,b,i,j;
	cout<<"Please input 2 numbers for rectangle's width and height:"<<endl;
	cin>>a>>b;
	for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{
			if(i==0 || i==b-1 || j==0 || j==a-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}


void printTrigleStars()
{
	int n,i,j;
	cout<<"Please input a number for lines:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++) cout<<"*";
		cout<<endl;
	}
}



void getTop2of4()
{
	int a[4],t,i;
    cout<<"Please input 4 numbers seperated by blank for bigger:"<<endl;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
	for(i=0;i<2;i++)
		for(int j=1;j<4;j++)
			if(a[i]<a[j])
			{
				t=a[i];
				a[i] = a[j];
				a[j] = t;
			} 
	cout<<"Numbers:";
	for(i=0;i<2;i++) cout<<a[i]<<" ";
	cout<<endl;
}


void bigger()
{
	int a,b;
	cout<<"Please input 2 numbers seperated by blank for bigger:"<<endl;	
	cin>>a>>b;
	if(a>b) cout<<"the number:"<<a<<" is bigger."<<endl;
	else cout<<"the number:"<<b<<" is bigger."<<endl;
}

void getMod()
{
	int a,b;
	cout<<"Please input 2 numbers seperated by blank for mod:"<<endl;
	cin>>a>>b;
	cout<<a<<" mod "<<b<<" is "<<a%b<<endl;
}

void countNum()
{
	int num,i,r;
	num = 1000;
	r = 0;
	for(i=1;i<=1000;i++)
	{
		r += i;
	}
	cout<<"1+2+3+...+"<<num<<"="<<r<<endl;
}

void n2Times()
{
	int n,i,b;
	cout<<"Please input a number for times:"<<endl;
	cin>>n;
	b=1;
	for(i=1;i<=n;i++)
		b=b*2;
	b=b%10;
	cout<<"after 2's "<<b<<" times,the last number is: "<<b<<endl;
}

void bigCommonDivisor()
{
	int a,b,i,max=0;
	cout<<"Please input 2 numbers seperated by blank for greatest common divisor:"<<endl;
    cin>>a>>b;
	for(i=1;i<=a;i++)
		if(a%i==0 && b%i==0) max=i;
	cout<<a<<" and  "<<b<<"'s greatest common divisor is: "<<max<<endl;

}
