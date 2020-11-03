#include<iostream>
using namespace std;
class student
{
    int roll;
    float marks;
    char name[20],address[35];
public:
    void getdata()
    {
        cout<<"enter the name,roll,marks and address of a student:"<<endl;
        cin>>name>>roll>>marks>>address;
    }
    void showdata()
    {   cout<<"The entered details of student are:"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Roll="<<roll<<endl;
        cout<<"Marks="<<marks<<endl;
        cout<<"Address="<<address<<endl;
    }
};
int main()
{
    student s;
    student *ptr;
    ptr=&s;
    ptr->getdata();
    ptr->showdata();
    return 0;
}
