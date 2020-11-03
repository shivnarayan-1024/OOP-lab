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
    void showdata()
    {
        cout<<"The complex number is:"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex operator++(complex&);
    friend complex operator++(complex&,int);
};

    complex operator++(complex&c,int)
    {
      complex temp;
      temp.real=c.real++;
      temp.img=c.img++;
      return temp;
    }
     complex operator++(complex&c)
    {
      complex temp;
      temp.real=++c.real;
      temp.img=++c.img;
      return temp;
    }

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c2=++c3;
    c3=c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}


