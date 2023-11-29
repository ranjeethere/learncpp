#include<iostream>
using namespace std;

struct employee{

    int eId;
    char favChar;
    float salary;

}
int main()
{
    struct employee ranjeet;
    struct employee shree ;
    struct employee krishna;

    ranjeet.eId = 1;
    ranjeet.favChar = 'r';
    ranjeet.salary = 122222222;
    cout<<"the value is  "<<ranjeet.eId ;
    cout<<"the value is  " << ranjeet.favChar<<endl;cout<<"the value is  " << ranjeet.salary<<endl;
   
}