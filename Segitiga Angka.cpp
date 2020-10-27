#include<iostream>
using namespace std;
int main(){
 cout<<" Nama  : Tria Suci Cahyani "<<endl;
 cout<<" NIM   : 20051397054 "<<endl;
 cout<<" Kelas : 2020B(MI)"<<endl;
 cout<<endl;	
 int nilai;
 cout<<"Masukkan Batas Nilai :";cin>>nilai;
    for(int a=1; a<=(nilai*2)-1; a++)
    {
     if (a <= nilai){
     for(int b = 1; b <= a; b++)
            cout<<b;
        }else{
        for(int c = 1; c <=nilai*2-a; c++)
            cout<<c;
     }
        cout<<endl;
     }
   
    return 0;
}
