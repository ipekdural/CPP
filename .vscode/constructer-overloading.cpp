#include<iostream>
using namespace std;
class student{
    private:
    string name,name2;
    public:
    student(){

    }
    student(string name){
        this->name=name;
    }
    student(string name,string name2){
        this->name=name;
        this->name2=name2;
    }
    void getname(){
        cout<<name<<" "<<name2<<endl;
    }
};

int main(){

student _student;
student student1("ipek");
student student2("ipek","dural");
student1.getname();
student2.getname();
_student.getname();
}