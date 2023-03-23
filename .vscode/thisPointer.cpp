#include<iostream>
using namespace std;
class student{
private:
string name;
public:
void setname(string name){
this->name=name;
}
string getname(){
    return this->name;
}
};

int main(){
    student student1;
    student1.setname("ipek dural");
    cout<<student1.getname();



}