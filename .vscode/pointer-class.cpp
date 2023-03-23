#include<iostream>
using namespace std;
class Auto{
private:
string model;
int km;
public:
void setModel(string _model){
    model=_model;
}
void getModel(){
    cout<<model<<endl;
}
void setkm(int _km){
   km=_km;
}
void getkm(){
    cout<<km<<endl;
}
};
int main(){
Auto* auto1=new Auto();
auto1->setModel("BMW");auto1->setkm(150000);auto1->getModel();auto1->getkm();
    
}