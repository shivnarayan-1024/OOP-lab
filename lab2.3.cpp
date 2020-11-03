#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
    {
    float real;
    float img;
    public:
    friend complex sum(complex,complex);
    void getdata()
    {
        cout<<"enter the real and imaginary parts of complex number:"<<endl;
        cin>>real>>img;
    }
    void showdata()
    {
        cout<<"the complex number is :"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    };
complex sum(complex c1, complex c2)
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
    c1.showdata();
    c2.showdata();
    c3=sum(c1,c2);
    c3.showdata();
    return 0;
}

