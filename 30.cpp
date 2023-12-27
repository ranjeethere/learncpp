#include<iostream>
using namespace std;

class complex 
    {
       int a,b;
       public:
       complex(int ,int); // construction declaration

       void printNumber()
       {
        cout<<"your number is "<< a <<"+"<< b << "i"<< endl;
       }
    };
    complex :: complex(int r, int c) //this is a defoult constructor as it takes no parameters
    {
        a =r;
        b =c;
    }
int main()
{
    //implicit call
    complex a(4,6);
    a.printNumber();
    //explicit call
    complex b= complex(5,7);
    b.printNumber();
    
    return 0;
}