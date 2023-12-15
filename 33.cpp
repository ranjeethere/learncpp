#include<iostream>
using namespace std;
class BankDeposit
{
    int principle;
    int year;
    float interestRate;
    float returnValue;
    public:
    BankDeposit()
    {}
    BankDeposit(int p,int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    interestRate = r;
    returnValue = 0;
    for(int i =0;i< y;i++)
    {
        returnValue = returnValue *(1+interestRate); 
    }
}
BankDeposit :: BankDeposit(int p, int y, int R)
{
    principle = p;
    year = y;
    interestRate = float(r)/100;
    returnValue = principle;
    for(int i =0;i< y;i++)
    {
        returnValue = returnValue *(1+interestRate); 
    }
}
void BankDeposit :: show()
{
    cout<<endl<<"priciple amount was"<<principle<<endl
    <<"retrun value after"<<year
    <<" is "<<returnValue<<endl;
}
int main ()
{
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of p y and r"<< endl;
    cin>>p>>y>>r;
    BankDeposit bd1 = BankDeposit(p,y,r);
    bd1.show();

  cout<<"Enter the value of p y and R"<< endl;
    cin>>p>>y>>R;
    BankDeposit bd2 = BankDeposit(p,y,R);
    bd2.show();


    return 0;
}
