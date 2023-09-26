#include <iostream>
using namespace std;
 
int main()
{
  cout << "##  Program C++ Kalkulator Sederhana  ##" << endl;
  cout << "========================================" << endl;
  cout << endl;
 
  int pilihan;
  float num1, num2;
 
  cout << "1. Penjumlahan"<< endl;
  cout << "2. Pengurangan"<< endl;
  cout << "3. Perkalian"  << endl;
  cout << "4. Pembagian"  << endl;
  cout << "5. Modulus"    << endl;
  cout << endl;
 
  cout << "Input pilihan operasi: ";
  cin >> pilihan;
  cout << "Angka pertama: ";
  cin >> num1;
  cout << "Angka kedua: ";