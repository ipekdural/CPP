#include<iostream>
using namespace std;
struct Student
{
    string name;
    int age,id;
};
struct Employee{
string name;
int salary;
};
void showAdress(Employee *employee){
    employee->name="ipeksu dural";//deger degisikligi icin pointer kullanılmalı
    cout<<"name:"<<employee->name<<endl;
    cout<<"salary:"<<employee->salary<<endl;
}

void showInfo(Student student){
    cout<<"enter name:"<<endl;cin>>student.name;
    cout<<"enter age:"<<endl;cin>>student.age;
    cout<<"enter id:"<<endl;cin>>student.id;
     cout<<student.name<<endl<<student.age<<endl<<student.id<<endl;
}


int main(){
    Student student1;
    Employee employee1={"ipek dural",1200};
    showInfo(student1);
    showAdress(&employee1);
    

}


