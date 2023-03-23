    #include<iostream>
    using namespace std;
    int main(){
    int *ptr=nullptr;//pointer hicbir yeri gostermiyor.
    ptr=new int;//bellekte pointer icin bir yer ayiriliyor.
    *ptr=10;
    delete ptr;//pointer icindeki deger siliniyor=DANGLİNG REFERANS.
    *ptr=10;
    cout<<*ptr;//RUNTİME HATASİ VERİLİYOR.compiler hatasi verilmez.
     


     int *ptr1=nullptr;
     int *ptr2=nullptr;
     ptr1=new int;
     *ptr1=10;
     ptr2=ptr1;
    delete ptr1;//hem ptr1 hem ptr2 DANGLİNG REFERANS olur.
     //iki pointer da herhangi bir yeri isaret etmez.
     cout<<*ptr2;

    return 0;

    }