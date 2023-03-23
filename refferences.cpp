#include<iostream>
using namespace std;
void arttir(int &reff){
    reff++;
    cout<<reff;
}
int main(){
int a=3;
int &ref=a;//ampersand burada adres belirtmiyor.yalnizca referans belirtiyor.
ref++;
cout<<a<<endl;
arttir(a);

}