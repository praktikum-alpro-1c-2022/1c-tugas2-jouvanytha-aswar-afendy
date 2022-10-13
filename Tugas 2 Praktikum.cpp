#include <iostream>

using namespace std;

int main(){
int sisi,panjang,lebar,alas,tinggi,a,b,diagonal1,diagonal2;
float luas,r;
double phi = 3.14;

cout << "Menghitung Luas Persegi" << endl;
cout << "Masukkan Sisi : ";
cin >> sisi;

luas = sisi * sisi;
cout << "Luas Persegi = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Persegi Panjang" << endl;
cout << "Masukan Panjang : ";
cin >> panjang;
cout << "Masukan Lebar : ";
cin >> lebar;

luas = panjang * lebar;
cout << "Luas Persegi Panjang = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Segitiga" << endl;
cout << "Masukkan Alas : ";
cin >> alas;
cout << "Masukkan Tinggi : ";
cin >> tinggi;

luas = 0.5 * alas *tinggi;
cout << "Luas segitiga = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Trapesium" << endl;
cout << "Masukkan a : ";
cin >> a;
cout << "Masukkan b : ";
cin >> b;
cout << "Masukkan Tinggi : ";
cin >> tinggi;

luas = 0.5 * (a + b) * tinggi;
cout << "Luas Trapesium = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Jajar Genjang" << endl;
cout << "Masukkan Alas : ";
cin >> alas;
cout << "Masukkan Tinggi : ";
cin >> tinggi;

luas = alas * tinggi;
cout << "Luas Jajar Genjang = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Belah Ketupat" << endl;
cout << "Masukkan Diagonal 1 : ";
cin >> diagonal1;
cout << "Masukkan Diagonal 2 : ";
cin >> diagonal2;

luas = 0.5 * diagonal1 * diagonal2;
cout << "Luas Belah Ketupat = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Layang-Layang" << endl;
cout << "Masukkan Diagonal 1 : ";
cin >> diagonal1;
cout << "Masukkan Diagonal 2 : ";
cin >> diagonal2;

luas = 0.5 * diagonal1 * diagonal2;
cout << "Luas Layang-Layang = " << luas << endl;
cout << " " << endl;

cout << "Menghitung Luas Lingkaran" << endl;
cout << "Masukkan r : ";
cin >> r;

luas = 3.14 * r;
cout << "Luas Lingkaran = " << luas << endl;

return 0;

}
