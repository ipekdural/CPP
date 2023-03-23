#include<iostream>
using namespace std;
class Employee{
public:
string name;
void getName(){
    cout<<"name:"<<name<<endl;
}
};

int main(){
Employee employee1;
Employee employee2;
employee1.name="ipek dural";employee2.name="selenay hur";
employee1.getName();
employee2.getName();


}