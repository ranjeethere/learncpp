#include<iostream>
using namespace std;
/*
inheritence
student --> test
student --> sports
test --> result
sportrs --> result
*/
class Student{
    protected: 
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no = a;

    }
    void print_number(void )
    {
        cout<<"Your roll no is"<<roll_no<<endl;
    }
};
class Test : virtual public Student{
    protected:
     float maths,physics;
      public:
           void set_marks(float m1,float m2)
           {
             maths =m1;
             physics = m2;
           }
        void print_marks(void)
        {
            cout<<"Your result is here :"<<endl
                <<"maths: "<<maths<<endl
                <<"physics: "<< physics<<endl;
        }
};
class Sports:virtual public Student{
    protected:
      float score;
      public:
      void set_score(float sc)
      {
        score = sc;

      }
       void print_score(void)
       {
        cout<<"Your Pt score is "<<score<<endl;

       }

};
class Result: public Test, public Sports
{
  private:
   float total;
    public: 
       void dispaly( void )
       {
        total = maths + physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is:"<<total<<endl;
       }
};


int main()
{
    Result ranjeet;
    ranjeet.set_number(5555);
    ranjeet.set_marks(99.5,99.0);
    ranjeet.set_score(9);
    ranjeet.dispaly();
    return 0;
} 

