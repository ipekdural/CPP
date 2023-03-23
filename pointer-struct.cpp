#include<iostream>
using namespace std;
struct Person
{
    string fullname;
    string job;
    int age;
    int id;
    
};

int main(){
Person person1={"ipek dural","gardener",34,1234};
Person *p = &person1;
cout<<p->fullname<<endl;
cout<<p->job<<endl;
}