#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
cin>>a;
cin>>op;
cin>>b;
if(op=='+'){
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}
else if(op=='-'){
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
}
else if(op=='*'){
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
}
else if(op=='/'){
    cout<<a<<"/"<<b<<"="<<a/b<<endl;
}
else{
    cout<<"invalid syntax";
}



}