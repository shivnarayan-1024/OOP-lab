#include <iostream>
#include<string>
using namespace std;
class login
{
public:
    string password;
    login()
    {
        password="\0";
    }
    bool islogin();
};
bool login :: islogin()
{
    string ch_password="8848";
    cout<<"Enter your ATM Pin:"<<endl;
    cin>>password;

if(password==ch_password)
{
    return(true);
}
else
{
    return (false);
}
}

int main()
{
  float Balance = 50000.00;
  int account_type, option;
  float amount;
    login l1;
    bool status=l1.islogin();
    if(!status)
    {
        cout<<"\n\tLogin Failed consult to Your Nearest Bank Branch First\n";
        return 1;
    }
    else
    {
        cout<<"\n\t Welcome "<<"To this ATM service..."<<"!\n";
    }

  //Option Menu for Account type selection
  cout << "Welcome To ATM Services" << endl << endl;
  cout << "1) Current" << endl;
  cout << "2) Saving" << endl;
  //Prompting user to select account type
  cout << "Please select account type (1 or 2): ";
  cin >> account_type;
  //If user enters option 1 or 2
  if(account_type == 1 || account_type == 2)
  {
    //Display account operations options to user
     cout << "1) Withdraw Amount" << endl;
     cout << "2) Balance Inquiry" << endl;
     //prompt user to select operation
     cout << "Select an option (1 or 2): ";
     cin >> option;
     if(option == 1) //User want to withdraw
     {
       //prompt user to enter amount he/she want to withdraw
       cout << "Please enter amount to withdraw : ";
       cin >> amount;
       if(amount <= 0) // if amount entered is zero or negative display error
       {
         cout << "Amount can not be zero or negative" << endl;
       }
       else if(amount > Balance) // if amount to withdraw is greater than account balance, display error
       {
         cout << "You do not have much funds to withdraw this amount" << endl;
       }
       else // withdraw funds and display user success message
       {
         Balance = Balance - amount;
         cout << "Balance withdrawl successful!!!. Your new balance is " << Balance << endl;
       }

     }
     else if(option == 2) // if user select option 2, display account balance
     {
        cout << "Your Balance is " << Balance << endl;
     }
     else
     {
       cout << "Invalid Option Selected." << endl;
     }
  }
  else //wrong account type entered, display error message
  {
    cout << "Invalid Account type selected." << endl;
  }
  cout << "Thank You Using Our ATM services!" << endl;
  cout <<"Please receive your slip!!!"<<endl;
  return 0;
}
