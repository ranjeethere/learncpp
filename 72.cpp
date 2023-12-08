#include<iostream>
#include<list>
using namespace std;

//list :- It is a bi-directional linear list that is help in to show insertion and deletion  operations.
int main()
{
    //689
    list<int>list1;//List of 0 length
    // list<int>list2(7);//Empty list of size 7
    list1.push_back(5);
list1.push_back(7);
list1.push_back(1);
list1.push_back(9);
list1.push_back(12);
 list<int> :: iterator  iter;
 iter = list1.begin();
 cout<<*iter<<" ";
 iter++;
 cout<<*iter<<" ";
 iter++;
 cout<<*iter<<" ";
 iter++;
 cout<<*iter<<" ";

    return 0;
}