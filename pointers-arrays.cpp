#include<iostream>
using namespace std;
int main(){
    int
    array[]={12,2,3,43};
    cout<<array<<endl<<array+1<<endl;//int deger 4 byte oldugu icin adresler arası 4 fark olur.
    int *ptr=array;//arraylerde & kullanılmaz.
    cout<<ptr<<endl;
    int *p=&array[2];
    cout<<*p<<endl;
    cout<<*(ptr+3)<<endl;
    string seri[]={"ipek","dural","merhaba"};
    string *p1=seri;
    cout<<p1[2]<<endl;//p1 adresinin işaretlediği kutudaki değeri yazdırır.

}