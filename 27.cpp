#include<iostream>
using namespace std;
//usnig a friend class
// forward declaration
class complex;
 class calculator 
  {
    public :
    int add(int a,int b )
    {
        return(a+b);
    }

    int sumcomplex(complex o1,complex o2)
    int sumcompcomplex(complex o1,complex o2);

  };
class complex 
  {
    int a,b;
     friend int calculator :: sumcomplex(complex ,complex ); 
      friend int calculator :: sumcompcomplex(complex ,complex ); 
    public : 
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
   
   
     void printNumber()
     {
      cout<<"your number is"<<a<<"  + "<<b<<"i"<<endl;
     }
    
  };
 int calculator :: sumcomplex(complex o1, complex o2)
 {
    return(o1.a + o2.a);
 }
 int calculator :: sumcompcomplex(complex o1, complex o2){
    return(o1.b +o1.b);
 }
int main()
{
    complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    calculator calc;
    int res = calc.sumcomplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<< res<<endl;
    int resx = calc.sumcompcomplex(o1,o2);
    cout<<"the sum of complex part of o1 and o2 is "<< resx<<endl;
    return 0;

}