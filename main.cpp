#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int getOption(){
    int input;
    system("clear");
    cout << "1. Menambahkan data mahasiswa" << endl;
    cout << "1. Tampilakn data mahasiswa" << endl;
    cout << "1. Ubah data mahasiswa" << endl;
    cout << "1. Hapus data mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << ">> ";
    cin >> input;
    return input;
}



int main(){
    int pilihan = getOption();
    char isContinue;
    enum Option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (pilihan != FINISH){
        switch (pilihan){
            case CREATE:
                cout << "Menambahkan data!!!" << endl;
                break;
            case READ:
                cout << "Menampilkan data!!!" << endl;
                break;
            case UPDATE:
                cout << "Mengubah data!!!" << endl;
                break;
            case DELETE:
                cout << "Menghapus data!!!" << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan!!!" << endl;
                break;
        }
    labelContinue:
    cout << "Lanjutkan (y/n) : ";
    cin >> isContinue;
    if(isContinue == 'y' || isContinue == 'Y'){
        pilihan = getOption();
    }
    else if(isContinue == 'n' || isContinue == 'N'){
        break;
    }
    else {
        goto labelContinue;
    }
    }

    return 0;
}
