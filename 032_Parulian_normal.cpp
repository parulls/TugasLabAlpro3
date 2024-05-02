#include <iostream>
using namespace std;

int EuclideanGCD (int m, int n)//fungsi euclidean untuk menghitung FPB 
{
    int r;//deklarasi variabel r
    while (n!=0){//program akan berjalan selama n tidak sama dengan 0
        r = m % n;//menyimpan sisa pembagian m dengan n sebagai r
        m = n;//memasukkan nilai n ke nilai m
        n = r;//memasukkan nilai r ke nilai n
    }
    return m;//kembalikan nilai m sebagai hasil fpb
}

main (){
    system("cls");
    int a,b;
    cout<<"Masukkan nilai bil1 : ";cin>>a;
    cout<<"Masukkan nilai bil2 : ";cin>>b;
    int fpb=EuclideanGCD(a,b);//deklarasi fpb dan inisialisasi dengan nilai kembalian dari fungsi EuclideanGCD
    cout<<"FPB : "<<fpb<<endl;
    return 0;
}