#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <unistd.h>
using namespace std;
/* THIS JUST FOR FUN */
int detik = 10;
void timer(){
    while (true)
    {   
        sleep(1);
        detik--;
        cout << "Program akan dimulai dalam" << setfill(' ') << setw(2) << detik << "s" << endl;
        if( detik == 0 ){
            cout << "Melanjutkan Program..." << endl;
            detik = 5;
            while(true){
                sleep(1);
                detik--;
                if( system("cls")) system("clear");
                cout << "Mempersiapkan Program dalam" << setfill(' ') << setw(2) << detik << "s" << endl;
                if( detik == 0 ){
                    break;
                }
            }
            if( system("cls")) system("clear");
            break;
        }
    }
    
}
void namaSaya(){
    cout << "=============================================================" << endl;
    cout << "| Nama    : Rizky Andriawan                                 |" << endl;
    cout << "| Prodi   : Teknik Informatika                              |" << endl;
    cout << "| NIM     : 21552021033                                     |" << endl;
    cout << "| Tugas   : Percabangan 2 (Algopro) --> Tagihan Listrik     |" << endl;
    cout << "=============================================================" << endl;
    cout << "|                                                           |" << endl;
    cout << "| Program Status : Tested on Kali GNU/Linux Rolling x86_64  |" << endl;
    cout << "| Compiler       : g++ (Debian 10.3.0-9) 10.3.0             |" << endl;
    cout << "|                                                           |" << endl;
    cout << "-------------------------------------------------------------" << endl;
}
/* FUNCTION ABOVE JUST FOR FUN */

int main(){
    int pemakaian, sisa;

    // just for fun
    namaSaya(); // menampilkan nama saya
    timer(); // menghitung mundur sebelum program dimulai

    // inputan pemakaian
    cout << "==================================" << endl;
    cout << "Pemakaian Listrik (kwh): ";
    cin >> pemakaian;
    cout << "==================================" << endl;

    cout << endl << endl;

    // output tagihan
    cout << "===================================================" << endl;
    cout << setw(20) << left << "| Pemakaian";
    cout << setw(30) << left << "| Tagihan" << "|" << endl;
    cout << "===================================================" << endl;
    if( pemakaian < 100){ // jika pemakaian kurang dari 100kwh
        cout << setfill(' ') << "| " << pemakaian << setw(16);
        cout <<  "kwh" << "| ";
        cout << " Rp. ";
        cout << setfill(' ') << 100000 << setw(17) << " ";
        cout << "|" << endl;
    } else if( pemakaian > 100 && pemakaian <= 500 ){ // jika pemakaian lebih dari 100kwh & kurang dari 500kwh
        sisa = pemakaian - 100;
        cout << setfill(' ') << "| " << pemakaian << setw(15);
        cout <<  "kwh" << "| ";
        cout << " Rp. ";
        cout << setfill(' ') << 100000 + ( 1500 * sisa ) << setw(17) << " ";
        cout << "|" << endl;
    } else if( pemakaian > 500 ){ // jika pemakaian lebih dari 500kwh
        sisa = pemakaian - 500;
        cout << setfill(' ') << "| " << pemakaian << setw(15);
        cout <<  "kwh" << "| ";
        cout << " Rp. ";
        cout << setfill(' ') << 700000 + ( 2000 * sisa ) << setw(16) << " ";
        cout << "|" << endl;
    }
    cout << "---------------------------------------------------" << endl;

    cin.get();
    return 0;
}