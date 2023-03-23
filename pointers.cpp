#include<iostream>
using namespace std;
int main(){
int a=3;
int b=4;

int *p=&a;
int *p1=&b;
*p1=7;
cout<<*p<<endl<<*p1<<endl;
cout<<p<<endl<<p1;





}