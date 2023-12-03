#include<iostream>
using namespace std;

class Employee
{
  int id;
  static int count;

  public:
  void setData(void)
  {
    cout<<"enter the id "<<endl;
    cin>>id;
    count++;

  }
  void getData(void)
{
    cout<<"the id of this employee is " << id <<"and this is employee number "<< count << endl;
}
static void getCount(void)
{
    cout<<"the value of count is "<<count<<endl;
}
};

int main()
{

Employee ranjeet, rohan ,lovish;
ranjeet.setData();
ranjeet.getData();
Employee::getCount();

    rohan.setData();
rohan.getData();
Employee::getCount();

lovish.setData();
lovish.getData();
Employee::getCount();
return 0;
}
