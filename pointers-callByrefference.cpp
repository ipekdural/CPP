#include<iostream>
using namespace std;
void switchvalue(int *x){
*x=20;
cout<<*x<<endl;
}
int main(){
int a=10;
cout<<a<<endl;
switchvalue(&a);
cout<<a<<endl;




}