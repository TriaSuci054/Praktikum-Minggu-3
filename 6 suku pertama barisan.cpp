#include <iostream>
#include <iomanip>                      
using namespace std;
int main()
{
	cout<<" Nama  : Tria Suci Cahyani  "<<endl;
    cout<<" NIM   : 20051397054  "<<endl;
    cout<<" Kelas : 2020B(MI) "<<endl;
    cout<<" 6 suku pertama pangkat 3 "<<endl;
    cout<<endl;
int numb;                            
for(numb=1; numb<=6; numb++)        
{
cout << setw(4) << numb;          
int cube = numb*numb*numb;        
cout << setw(6) << cube << endl;  
}
return 0;
}
