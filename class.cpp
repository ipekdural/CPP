#include<iostream>
using namespace std;
class Student{
public://heryerden erislebilir.
string name;//uye (member)-ozellik
int number;//uye 
};

int main(){
Student student1,student2;//iki tane obje olsuturuldu
student1.name="ipek dural";student1.number=197;
student2.name="selenay hur";student2.number=246;

cout<<student1.name<<"  "<<student1.number<<endl;
cout<<student2.name<<"  "<<student2.number<<endl;

}