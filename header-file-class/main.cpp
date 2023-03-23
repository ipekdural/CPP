#include "employee.h"
void Employee::showInfos(){
    cout<<"name:"<<Employee::name<<endl;
    cout<<"id:"<<Employee::id<<endl;
    cout<<"salary:"<<Employee::salary<<endl;
}
int main(){
Employee employee1;
employee1.name="ipek dural";
employee1.id=197;
employee1.salary=2500;
employee1.showInfos();
return 0;
}