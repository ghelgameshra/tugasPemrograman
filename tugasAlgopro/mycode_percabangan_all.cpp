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
    cout << "| Tugas   : Percabangan 1 (Algopro) --> Nilai & Predikat    |" << endl;
    cout << "=============================================================" << endl;
    cout << "|                                                           |" << endl;
    cout << "| Program Status : Tested on Kali GNU/Linux Rolling x86_64  |" << endl;
    cout << "| Compiler       : g++ (Debian 10.3.0-9) 10.3.0             |" << endl;
    cout << "|                                                           |" << endl;
    cout << "-------------------------------------------------------------" << endl;
}
/* FUNCTION ABOVE JUST FOR FUN */

int main(){
    int nilai[250], penilaian, jumlah_nilai;
    char huruf[6] = {'A', 'B', 'C', 'D', 'E'};

    // just for fun
    namaSaya();
    timer();


    // memasukkan jumlah murid
    cout << "====================" << endl;
    cout << " Jumlah murid: ";
    cin >> jumlah_nilai;
    cout << "====================" << endl << endl;

    if( system("cls")) system("clear");

    // memasukkan nilai murid
    cout << "========================" << endl;
    cout << "| Nama Murid   | Nilai |" << endl;
    cout << "========================" << endl;
    for( int i = 1; i <= jumlah_nilai; i++ ){
        cout << "| Murid ke-" << i << ":  |   ";
        cin >> nilai[i];
        if( nilai[i] > 100 || nilai[i] < 0 ){
            nilai[i] = 0;
        }
    }
    cout << "------------------------" << endl << endl << endl;



    // output nilai
    cout << "=============================================================" << endl;
    cout << "| Nama Murid   | Nilai | Nilai Huruf |       Predikat       |" << endl;
    cout << "=============================================================" << endl;
    for( int i = 1; i <= jumlah_nilai; i++ ){
        cout << "| Murid ke-" << i << "   |   ";
        cout << nilai[i] << "   |      ";
        penilaian = nilai[i];
        if( penilaian >= 0 && penilaian < 60 ){
            cout << huruf[4] << "            Kiyamat" << endl;
        } else if( penilaian >= 60 && penilaian < 70 ){
            cout << huruf[3] << "            Tidak memuaskan" << endl;
        } else if( penilaian >= 70 && penilaian < 80 ){
            cout << huruf[2] << "            Memuaskan" << endl;
        } else if( penilaian >= 80 && penilaian < 90 ){
            cout << huruf[1] << "            Sangat memuaskan" << endl;
        } else if( penilaian >= 90 && penilaian <= 100 ){
            cout << huruf[0] << "            Dengan Pujian" << endl;
        }
    }
    cout << "-------------------------------------------------------------" << endl;

    cin.get();
    return 0;
}
