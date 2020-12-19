#include<iostream>
#include<cmath>
using namespace std;
class loan
{
    float ci,si,r,temp;
    int dd2,mm2,yyyy2;
    int dd1,mm1,yyyy1;
    int p,dd,mm,yyyy;
public:
    void getvalue()
    {
        cout<<"Enter the principal amount:";cin>>p;
        cout<<"Enter the rate in percentage:";cin>>r;
    }
    void diffdate()
    {
    cout<<"Enter current date format dd/mm/yyyy:"<<endl;
    cout<<"Enter the day:";cin>>dd2;
    cout<<"Enter the month:";cin>>mm2;
    cout<<"Enter the year:";cin>>yyyy2;
    cout<<endl;
    cout<<endl;
    cout<<"Enter the date of issue of loan in format dd /mm /yyyy:"<<endl;
    cout<<"Enter the day:";cin>>dd1;
    cout<<"Enter the month:";cin>>mm1;
    cout<<"Enter the year:";cin>>yyyy1;

    //verify
    cout<<"Current date is "<<dd2<<"/"<<mm2<<"/"<<yyyy2<<endl;
    cout<<"Date of issue of loan is "<<dd1<<"/"<<mm1<<"/"<<yyyy1<<endl;

    //calc
    yyyy=yyyy2-yyyy1;
    mm=mm2-mm1;
    dd=dd2-dd1;

    //case if dd is negative i.e. current dd is less than loan issue date
    if(dd<0)
    {
       mm--;
       dd+=30;
    }

    //case if mm is negative i.e. current mm is less than loan issue date
    if (mm<0)
    {
        yyyy--;
        mm+=12;
    }
    cout<<endl;
    cout<<endl;
    //final output
    cout<<        dd2<<"/"<<mm2<<"/"<<yyyy2<<endl;
    cout<<   "-"<<dd1<<"/"<<mm1<<"/"<<yyyy1<<endl;
    cout<<   "------------"<<endl;
    cout<<         dd <<"/"<< mm <<"/"<<yyyy <<endl;
    cout<<"Difference between dates is "<<yyyy<<" years"<<mm<<" months and "<<dd<<" days"<<endl;
    }
    void calcloan()
    {
        if(yyyy!=0&&mm==0&&dd==0)
        {
            temp=pow((1+(r/100)),yyyy);
            cout<<"The loan amount is"<<(temp*p);
        }
        else if(yyyy==0&&mm!=0&&dd!=0)
        {
            dd=(30*mm)+dd;
            si=((p*dd*r)/36000);
            cout<<"The loan amount is:"<<si;
        }
        else
        {
          temp=pow((1+(r/100)),yyyy);
          ci=(temp*p);
          dd=(30*mm)+dd;
          si=((p*dd*r)/36000);
          cout<<"The loan amount is:"<<(ci+si);
        }

    }

};
int main()
{
    loan l;
    l.getvalue();
    l.diffdate();
    l.calcloan();
    return 0;
}
