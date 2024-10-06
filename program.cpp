#include <iostream>
using namespace std;


int harga(int bulan) {
    if(bulan < 2) {
       retur  200000;
    }
    else if (bulan <= 4) {
         return 400000;
    }
    else {
         return 600000;
    }
}
void ask(int bulan) {
     string jawab;
     int price = harga(bulan);
     cout << "Apakah ada kerusakan di kendaraan anda? (ada / tidak) : ";
     cin>>jawab;




    if (jawab == "ada"){
       cout<< "Service yang disarankan : Service berat" << endl;
       cout<< "Total Biaya: 600.000" << endl;