#include <iostream>
using namespace std;

int rekursifEuclideanGCD(int m, int n){
    if (n==0)//mengecek apakah n bernilai sama dengan 0 atau tidak 
        return m;//jika ya, maka kembalikan nilai m sebagai fpb 
    else //jika n tidak sama dengan 0
        return rekursifEuclianGCD (n,m%n);//mengembalikan nilai dari fungsi rekursiEuclideanGCD tetapi dengan parameter n dan sisa pembagian m dengan n
}
main (){
    system("cls");
    int a,b;
    cout<<"Masukkan nilai bil1 : ";cin>>a;
    cout<<"Masukkan nilai bil2 : ";cin>>b;
    int fpb=rekursifEuclideanGCD(a,b);//deklarasi variabel fpb dan inisialisasi dengan nilai kembalian dari fungsi rekursifEuclideanGCD
    cout<<"FPB : "<<fpb<<endl;
    return 0;
}