#include<iostream>
using namespace std;

class emp{
    int id;
    int salary;
    public :
      void setId(void)
      {
        salary = 400;
        cout<<"Ranjeet enter the id of emp"<<endl;
        cin>>id;
      }
      void getId(void)
      {
        cout<<"your id is "<<id<<endl;
      }

};

int main()
{
    // emp ranjeet ,ronit,vishal,rohan;
    // ranjeet.setId();
    // ranjeet.getId();
    emp fb[4];
    for(int i = 0;i<4;i++)
    {
        fb[i].getId();
        fb[i].setId();
    }
    return 0;
}