//WAP in CPP to illustrate the concept of inline function
#include <iostream>
 
using namespace std;

inline int Max(int x, int y)
{
	cout<<"Entered numbers are "<<x<<y;
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
   
}
int main() 
{
	int a[15],n;
	int p,q;
	cout<<"How many couple numbers "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter x and y"<<endl;
		cin>>p>>q;
		a[i]=max(p,q);
		cout<<"Max value is "<<a[i]<<endl;
		
	}
   
   
   return 0;
}
