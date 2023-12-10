#include<iostream>
using namespace std;
void Accept();
void Deposit();
int Withdraw();
void rem_amt();
int main()
{
    int ch;
  string name;
  int Account_number;
  int Total_Balance;
  int Deposit_amount;
  int Withdraw_amount;
//do
//{
  cout<<"Enter your choices";
  cout<<"1.Accept/n"<<"2.Deposit/n"<< "3.Withdraw/n"<< "4.Display/n" ;
  cin>>ch;
  switch(ch)
{
    case 1:
        Accept();
        break;

    case 2:
        Deposit();
        break;

    case 3:
       Withdraw();
        break;
        return 0;

}
//}
}

void Accept()
        {   string name;
            int Acc_no,Balance;
            cout<<"Enter the name of user: " ;
            cin>>name;
            
            cout<<"Enter the account_number of user: " ;
            cin>>Acc_no ;
            
            cout<<"Enter Total_Balance: " ;
            cin>>Balance ;
        }
void Deposit()
        {   int deposit_amount,Balance,Deposit;
            cout<<"Enter total deposit_amount : " ;
            cin>>deposit_amount ;

            Balance = Balance + Deposit ;
            
            cout<<"Total_Balance " <<Balance ;
        }
int Withdraw()
        {   int Withdraw_amount;  
            cout<<"enter withdraw_amount : " ;
          cin>>Withdraw_amount ;
          cout << Withdraw_amount<<endl;
        }
void rem_amt(Balance,Withdraw_amount)
{
    cout<<Balance-Withdraw_amount<<endl;
}