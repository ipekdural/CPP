#include<iostream>
using namespace std;
void test(int x){
x++;
cout<<x<<endl;
}
void _test( ){
static int x=6;
x++;
cout<<x<<endl;
}
int main(){
test(6);
test(6);
test(6);
cout<<endl;
_test();
_test();
_test();
}