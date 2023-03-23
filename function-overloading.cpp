#include<iostream>
using namespace std;
void name(){
    string name;
    getline(cin,name);
    cout<<name<<endl;
}
void name(string name1){
    cout<<"name:"<<name1<<endl;
}
void name(string name2,string name3){
    cout<<name2<<" "<<name3<<endl;
}

int main(){
name();
name("ipek dural");
name("ipek","dural");

}