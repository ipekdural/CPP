#include<iostream>
using namespace std;
class Employee{
private://private altinda tanımlananlar yalnizca mevcut class icinde tanimli olur.
string name;
int id,salary;
public:
Employee(string isim,int kimlik,int maas){
    name=isim;
    id=kimlik;
    salary=maas;
}
void showInfos(){
    cout<<name<<endl<<id<<endl<<salary<<endl;
}
};

int main(){
    
    Employee employee3("ipek dural",978,3400);
employee3.showInfos();

}