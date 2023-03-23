#include<iostream>
using namespace std;
int main(){
    /*int x=5;
    int *p1;
    p1=&x;
    int *p;
    int array[]={1,2,3,4,5,6};
    p=array;//array icin & kullanmaya gerek yok.
    cout<<p[1];
    cout<<*p1;*/
    int *p= new int;
    *p=10;
    int x=*p;
    cout<<x;
    delete p;//p nin isaret ettigi bellek parcasını bosaltır.
    

    
}