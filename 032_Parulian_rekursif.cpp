#include <iostream>
using namespace std;

int rekursifEuclianGCD(int m, int n){
    if (n==0)
        return m;
    else 
        return rekursifEuclianGCD (n,m%n);
}
main (){
    system("cls");
    int a,b;
    cout<<"Masukkan nilai bil1 : ";cin>>a;
    cout<<"Masukkan nilai bil2 : ";cin>>b;
    int fpb=rekursifEuclianGCD(a,b);
    cout<<"FPB : "<<fpb<<endl;
    return 0;
}