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
cout<<person1.fullname<<endl<<person1.job<<endl<<person1.age<<endl<<person1.id<<endl;
person1.fullname="ipeksu dural";cout<<person1.fullname;
}