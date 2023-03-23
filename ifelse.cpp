#include<iostream>
using namespace std;
int main(){
string password="ipek123";
string input;
cout<<"please enter ur password..."<<endl;
cin>>input;
if(password==input){
    cout<<"correct password";

}
else{
    cout<<"try again";
}


}