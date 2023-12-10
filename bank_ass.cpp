#include<iostream>
using namespace std;

class account_detail
{
   public:
    int check;
    string depositor_name;
    string bank_name;                         //Account detail section
    int  account_no;
     int total_balance=10000;
    int d;
}ad;

class account_witdraw
{
  public:
  int c;                                        //Withdraw section
  int witdraw_amount;
 
}aw;

class account_deposit
{                                                 //Deposit section
    public:
    int deposit_amount;
    
}ad1;



int main(void)
{
    int ch=0;                              //Main function
    int choose;
   cout<<"Enter your name\n";
   cin>>ad.depositor_name;
   cout<<"Enter acccount number"<<endl;
   cin>>ad.account_no;
  cout<<"Your account number is saved succesfully..\n";


    do
    {
   cout<<endl;                                                     
    cout<<"1.Account details"<<endl;
    cout<<"2.Deposit amount"<<endl;
    cout<<"3.Witdraw amount"<<endl;
    cout<<"4.Check balance"<<endl;
    cout<<"Choose the above action"<<endl;
    cin>>choose;
    
switch(choose)
{
    case 1:
    {
    //    cout<<"Enter name of depositor"<<endl;
    cout<<"Account holder name is:"<<ad.depositor_name<<endl;
    cout<<"Account number is:"<<ad.account_no<<endl;
    
    break;
    }
    
    case 2:
    {
    cout<<"Enter the amount you want to deposit"<<endl;
    cin>>ad1.deposit_amount;
    cout<<"You have succesfully deposited:"<<ad1.deposit_amount;
    // ad.d=ad.total_balance-ad1.deposit_amount;
    // ad.total_balance = ad.d;

    
    break;
        
    }
    
    case 3:
    {
         cout<<"Enter the amount you want witdraw"<<endl;
        cin>>aw.witdraw_amount;
        aw.c=ad.total_balance - aw.witdraw_amount;
        cout<<"You have successfully witdrwan amount"<<aw.witdraw_amount<<endl;
        ad.total_balance=aw.c;

        break;
    }

    case 4:
    {
    
    cout<<"Your account balance is: "<<ad.total_balance<<endl<<"Deposit amount is :"<<ad1.deposit_amount<<endl<<"Witdraw amount is :"<<aw.witdraw_amount<<endl;
    break;
    }
    case 5:
    {
        default:
        cout<<"Invalid Credential\n";
        break;
           
    }
}     
    cout<<"Do you want to continue 1 or 0"<<endl;
    cin>>ch;
}
while(ch==1);
return 0;

}