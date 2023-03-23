#include<iostream>
using namespace std;
class Employee{
private://private altinda tanımlananlar yalnizca mevcut class icinde tanimli olur.
string name;
int id,salary;
public:
void setInfos(string name1,int id1,int salary1){
    name=name1;
    id=id1;
    salary=salary1;
}
void getInfos(){
    cout<<name<<" "<<id<<" "<<salary<<endl;
}
};

int main(){
Employee employee1,employee2;
employee1.setInfos("ipek",123,2400);
employee2.setInfos("selenay",567,2450);
employee1.getInfos();
employee2.getInfos();
}