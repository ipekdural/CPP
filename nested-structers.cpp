#include<iostream>
using namespace std;
struct Female{
string name;
int age;
int salary;
};
struct Male
{
    string name;
    int age;
    int salary;
};
struct Employee
{
    Male male1;
    Male male2;
    Female female1;
    Female female2;
};
int main(){
Employee employee={{"talha",32,1200},{"cengizhan",30,3000},{"ipek",32,1290},{"selenAY",32,4000}};
cout<<employee.female1.name<<"\t"<<employee.female1.age<<"\t"<<employee.female1.salary<<endl;
cout<<employee.female2.name<<"\t"<<employee.female2.age<<"\t"<<employee.female2.salary<<endl;
cout<<employee.male1.name<<"\t"<<employee.male1.age<<"\t"<<employee.male1.salary<<endl;
cout<<employee.male2.name<<"\t"<<employee.male2.age<<"\t"<<employee.male2.salary<<endl;
Employee *p=&employee;
cout<<p->female1.name<<"\t"<<p->female1.age<<"\t"<<p->female1.salary<<endl;

}