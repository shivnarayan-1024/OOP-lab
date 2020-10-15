//WAP in CPP to find the area of circle and rectangle using the concept of function overloading

#include <iostream>
using namespace std;
class Area
{
	public:
		void calc_area(int r)
	{
	
		cout<<"Area of circle is "<<3.14*r*r<<endl;
		
		
	}
	void calc_area(int l,int b)
	{
		cout<<"Area of rectangle is "<<l*b<<endl;
		
		
	}
	void choose()
	{
		int n,r,l,b;
		cout<<"Enter 1 to calculate area of circle and 2 for calculating area of rectangle"<<endl;
		cin>>n;
		if(n==1)
		{
			cout<<"Enter radius"<<endl;
			cin>>r;
			calc_area(r);
			
		}
		if(n==2)
		{
			cout<<"Enter length and breath"<<endl;
			cin>>l>>b;
			calc_area(l,b);
		}
	}
};
int main()
{
	Area a;
	a.choose();
	return 0;
	
}
