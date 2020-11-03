#include<iostream>
using namespace std;
class complex
{
    float real,img;
public:
    void getdata()
    {
        cout<<"Enter the complex number:"<<endl;
        cin>>real>>img;
    }
    void showsum()
    {
        cout<<"The sum of entered complex numbers is:"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex operator+(complex&,complex&);
};
    complex operator+(complex&c1,complex&c2)
    {
        complex temp;
        temp.real=c1.real+c2.real;
        temp.img=c1.img+c2.img;
        return temp;
    }

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showsum();
    return 0;
}

