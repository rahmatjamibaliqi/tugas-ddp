#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int pilihan; 
    
    cout << "------------------------------------------------------"<< endl; 
    cout << "|                TUGAS PEMROGRAMAN                    | "<< endl;
    cout << "------------------------------------------------------"<< endl; 
    cout << "|Nama : Rahmat jami baliqi                            |" <<endl;
    cout << "|NIM  : 2300018016                                    |" <<endl;
    cout << "------------------------------------------------------"<< endl; 

    cout << "Menu: \n";
    cout << "1. Generate Pola\n";
    cout << "2. Keluar\n";
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            int jk;
            cout <<"Masukkan Jumlah Kotak: ";
            cin >> jk;

            while (jk < 0) {
                cout << "\n Jumlah Kotak Tidak Valid, Masukkan Jumlah Kotak : ";
                cin >> jk;
            }

            for (int i = 0; i <= (jk*jk); i++) {
                for (int j = 0; j <= (jk*jk); j++) {
                    if (i == 0 || (i % jk == 0) || (j == 0) || (j % jk == 0)) {
                        cout <<setw(2) << "~";
                    } else {
                        cout <<setw(2) << " ";
                    }
                }
                cout << '\n';
            }
            break;

        case 2:
            cout << "Keluar dari program...\n";
            break;

        default:
            cout << "Pilihan tidak valid. Keluar dari program...\n";
            break;
    }

    return 0;
}

