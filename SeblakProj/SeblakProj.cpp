#include <iostream>
using namespace std;

int main()
{
    int toping, kuah, level, totalToping = 0, hargaSeblak, totalHarga;
    int minum, hargaMinum = 0;
    int dipan;

    cout << "^-^SEBLAK PRASMANAN TETEH CODERS^-^\n";

    cout << "\nVarian toping\n"
        "   1. Dumpling.............3000\n"
        "   2. Bakso................1000\n"
        "   3. Ceker................2000\n"
        "   4. Cuanki...............1000\n"
        "   5. kerupuk..............2000\n"
        "   6. Sayur................2000\n";
    do
    {
        cout << "Masukan varian toping sesuai nomor (0 untuk selesai): ";
        cin >> toping;

        switch (toping)
        {
        case 0:
            break;
        case 1:
            totalToping += 3000;
            break;
        case 2:
            totalToping += 1000;
            break;
        case 3:
            totalToping += 2000;
            break;
        case 4:
            totalToping += 1000;
            break;
        case 5:
            totalToping += 2000;
            break;
        case 6:
            totalToping += 2000;
            break;
        default:
            cout << "Angka yang anda masukan salah!\n";
            break;
        }
    } while (toping != 0);

    cout << "\nJenis kuah\n"
        "   1. Normal\n"
        "   2. Nyemek\n";
    do {
        cout << "Masukan jenis kuah sesuai nomor: ";
        cin >> kuah;
        if (kuah != 1 && kuah != 2)
        {
            cout << "Angka yang anda masukan salah!\n";
        }
    } while (kuah != 1 && kuah != 2);

    cout << "\nLevel kepedasan\n"
        "   1. Level 1\n"
        "   2. Level 2\n"
        "   3. Level 3\n";
    do
    {
        cout << "Masukan level sesuai nomor: ";
        cin >> level;
        if (level != 1 && level != 2 && level != 3)
        {
            cout << "Angka yang anda masukan salah!\n";
        }

    } while (level != 1 && level != 2 && level != 3);

    cout << "\nMinuman\n"
        "1. Teh.............3000\n"
        "2. Jeruk...........3000\n"
        "3. Milo............4500\n"
        "4. Matcha..........4500\n"
        "5. Capucino........5000\n";
        
    do
    {
        cout << "Masukan minuman sesuai nomor (0 untuk selesai): ";
        cin >> minum;
        switch (minum)
        {
        case 0:
            break;
        case 1:
            hargaMinum += 3000;
            break;
        case 2:
            hargaMinum += 3000;
            break;
        case 3: hargaMinum += 4500;
            break;
        case 4:
            hargaMinum += 4500;
            break;
        case 5:
            hargaMinum += 5000;
            break;
        default:
            cout << "\nAngka yang anda masukan salah!";
        }
    } while (minum != 0);

    cout << "\nMau pakai es (tambah 500)? \n"
        "1. Mau\n"
        "2. Panas aja teh\n";
    cin >> dipan;
    if (dipan == 1)
    {
        hargaMinum += 500;
    }
    else if(dipan == 2)
    {
        hargaMinum += 0;
    }
    else
    {
        cout << "\nAngka yang anda masukan salah!\n";
    }

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~$_$~~~~~~~~~~~~~~~~~~~~~~~~~~";
    hargaSeblak = totalToping + 10000;
    cout << "\nHarga seblak: " << hargaSeblak;
    cout << "\nHarga minuman: " << hargaMinum;
    totalHarga = hargaMinum + hargaSeblak;
    cout << "\nTotal harga: " << totalHarga << endl;
}