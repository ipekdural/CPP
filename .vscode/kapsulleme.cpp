#include<iostream>
using namespace std;
class Employee{
    private:
    int age;
    public:
    void setAge(int _age){
        if(_age<0){
            cout<<"invalid entry...";
        }
         else
        age=_age;
    }
    int getAge(){
          return age;
    }
};


int main(){
Employee employee1;
employee1.setAge(-4);
cout<<employee1.getAge()<<endl;
}


