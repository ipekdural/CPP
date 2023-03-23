#include<iostream>
using namespace std;
int main(){
int *p;//suanda p hicbir yeri isaret etmiyor
int size;
cout<<"how many value you want to save?:";cin>>size;
p=new int[size];//bellekte size degeri kadar yer aciliyor.
for(int i=0;i<size;i++){
    cout<<"enter values:";cin>>p[i];//bellekte acilan size yerlerine degerler konuluyor.
}
for (int i=0;i<size;i++){
    cout<<"value"<<i+1<<":"<<p[i]<<endl;
}
delete []p;//p ile isimiz bittiginde bellekte kapladigimiz yeri bellege
//geri kazandiriyoruz.(p birden fazla yer kapladigi icin []kullandık.)
}