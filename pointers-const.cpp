#include<iostream>
using namespace std;
void printo(const int *p1,const int *p2){

    for (;p1!=p2;p1++)//const konuldugu icin pointerin degeri degisebilir fakat pointerin
    cout<<*p1<<endl;//isaret ettigi deger degismez
}
int main(){

int a[]={10,20,30,40,50,60,70,80,90,100};
printo(a+1,a+8);
}