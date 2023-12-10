#include<iostream>
using namespace std;
class bank
{
    public:
    string depositor_name;
    int  Ac_No;
    int Bal_Amt;
    int Dep_Amt;
    int Amt_Withdraw;
    int Rem_Bal;
    void print_Total()
    {
        cout<<"Depositor is :"<< depositor_name;
        cout<<endl<<"Account Number :"<<Ac_No<<endl;
        cout<<"Balance amount is :"<<Bal_Amt<<endl;
        cout<<"deposited amount :"<<Dep_Amt<<endl;
        cout<<"Amount to withdraw  :"<<Amt_Withdraw<<endl;
        cout<<"Balance remaining  :"<<Rem_Bal<<endl;
    } 
};
int main()
{
bank obj;
obj.depositor_name="Pravin";
obj.Ac_No=10903208;
obj.Amt_Withdraw=10000;
obj.Bal_Amt=600000;
obj.Dep_Amt=797889;
obj.Rem_Bal=40000;
obj.print_Total();
return 0;
};