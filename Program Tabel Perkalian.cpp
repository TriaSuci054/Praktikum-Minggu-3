#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int n;// A=0, B=0;
    cout<<" Nama  : Tria Suci Cahyani "<<endl;
    cout<<" NIM   : 20051397054 "<<endl;
    cout<<" Kelas : 2020B(MI) "<<endl;
    cout<<endl;
    cout <<"Batas Perkalian : ";
    cin >> n;
    endl(cout);
    cout<<"X/Y"<<setw(3)<<(char)179;
    for(int a=1; a<n+1; ++a)
    {
        cout<<setw(6)<<a;
    }
    endl(cout);
    for(int z=1; z<62; ++z)
    {
        cout<<(char)196;
    }
    endl(cout);
    for(int b=1; b<n+1; ++b)
    {cout<<b<<setw(5)<<(char)179;
        for(int c=1; c<n+1; ++c)
        {
            cout<<setw(6)<<b*c;
        }
        endl(cout);
    }
    for(int o=1; o<62; ++o)
    {
        cout<<(char)196;
    }
    endl(cout);
    endl(cout);

    system("pause");
}        

