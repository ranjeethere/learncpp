#include <iostream>
using namespace std;
#include<string>

// using nested of member function
//////////////////////////////////

class number
{
    private:
    string s;
    
    public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);


};
void number::read(void)
{
    cout<<"ranjeet enter the binary number"<<endl;
    cin>>s;

}

void number::chk_bin(void)
{
    for(int i = 0;i< s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='i')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void number::ones_compliment(void){
    chk_bin();
    for(int i =  0;i < s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
 
 void number:: display(void)
 {
    cout<<"Displaying your binary numebr"<<endl;
    for(int i = 0;i<s.length();i++)
    {
        cout << s.at(i);

    }
    cout << endl;
 }

 int main()
 {
    number b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;



 }
