#include<iostream>
using namespace std;
class complex
{
    float real,img;
public:
    complex()
    {
        real=3.2;
        img=4.5;
    }
    complex(float x,float y)
    {
        real=x;
        img=y;
    }
    complex(complex &c)
    {
        real=c.real;
        img=c.img;
    }
    ~complex()
    {
        cout<<"you have successfully cleared your memory"<<endl;
    }
    void showdata()
    {
        cout<<"the entered complex number is:"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
complex c1;
complex c2(3.3,4.4);
complex c3(c1);
c1.showdata();
c2.showdata();
c3.showdata();
return 0;
}


