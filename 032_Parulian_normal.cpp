#include <iostream>
using namespace std;

int EuclianGCD (int m, int n)
{
    int r;
    while (n!=0){
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

main (){
    system("cls");
    int a,b;
    cout<<"Masukkan nilai bil1 : ";cin>>a;
    cout<<"Masukkan nilai bil2 : ";cin>>b;
    int fpb=EuclianGCD(a,b);
    cout<<"FPB : "<<fpb<<endl;
    return 0;
}