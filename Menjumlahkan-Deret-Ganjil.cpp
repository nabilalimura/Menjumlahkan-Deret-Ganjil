#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int a=1,b,n,jumlah;
    cout<<"Masukkan Jumlah Deret Yang Diinginkan = "; cin>>n;
    cout<<"\nDeretnya Adalah = "<<a<<"+";
    jumlah=a;

    for (int x=0; x<n-1;x++)
    {
        b=a+2; a=b;
        cout<<b <<"+";
        jumlah=jumlah+b;
    }
    cout<<"\nJumlah  Dari Semua Deretnya Adalah = "<<jumlah;
}
