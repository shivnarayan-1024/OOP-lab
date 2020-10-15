#include <iostream>
using namespace std;
class sum
{
	int a;
	int b;
	public:
		void add(int a=20,int b=10)
		{
			int sum;
			sum = a+b;
			cout<<sum<<endl;
			
		}
};
int main()
{
	sum s1,s2;
	s1.add();
	s2.add(2);
	return 0;
}
