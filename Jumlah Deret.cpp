#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a=0, b, c, jumlah=0, i, n;
    
    cout<<" Nama  : Tria Suci Cahyani  "<<endl;
    cout<<" NIM   : 20051397054  "<<endl;
    cout<<" Kelas : 2020B(MI) "<<endl;
    cout<<endl;
    cout<<"MENGHITUNG JUMLAH DERET BILANGAN";
    cout<<"------------------------------------------------";
    cout<<"Bilangan Awal Yang Harus Dimasukkan yaitu 3 : ";
    cin>>a;
    cout<<"Selisih Yang Harus Dimasukkan Yaitu 4  : ";
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : ";
    cin>>n;
    
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;                      
    }
    
    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah; 
    
    getch();
    return 0;    
}
