 #include<iostream>
 using namespace std;
 /*
 Systax for initializtion kist in constructor:
 constructor(argument-list): initilization-section
 {
    assignment + other code;

 }
 class Test
 {
    int a;
    int b;
    public:
     Test(int i, int j):a(i),b(j){constructor-body}

 };
 */
class Test
 {
    int a;
    int b;
    public:
     Test(int i, int j):a(i+j),b(j){
        cout<<"constructor-body"<<endl
        <<"Value of a is "<<a<<endl
        <<"value of b is "<<b<<endl;}

 };

 int main(){
    Test(5,6);
    return 0;
 }