#include <iostream>
#include <cstdlib>
using namespace std;

void header(){ // sebagai contoh kami menggunakan nama atm bank BCA
    cout << "=====================================" << endl;
    cout << "||    SELAMAT DATANG DI ATM BCA    ||" << endl;
    cout << "||          Pecahan 50000          ||" << endl;
    cout << "=====================================" << endl;
}

void footer(){
    cout << "=====================================" << endl;
    cout << "|| Terimakasih Atas Kunjungan Anda ||" << endl;
    cout << "=====================================" << endl;
}

class pin{
    int kode_pin(){
        return 723456;
        return 060603;
        return 227014;
    }
    public :
    int config_pin(){
        return kode_pin();
    }
    char* nama(){
        return (char*) "Vladilena Milize"; // nama pengunjung atm
    }
};

int main(){

    int saldo_awal = 2500000, pin_input , tarik , setor, kode ;
    pin kode_pin;

    header();
    awal:
    cout << "Silahkan Masukan PIN Anda" << endl;
    cout << "=> "; cin >> pin_input;
    cout << endl;
    menu :
    if(pin_input==kode_pin.config_pin()){
        cout << "Selamat Datang " << kode_pin.nama() << "" << endl << endl;
        cout << "Pilihan Menu : " << endl;
        cout << "1. Tarik Tunai" << endl;
        cout << "2. Setor Tunai" << endl;
        cout << "3. Cek Saldo" << endl;
        cout << "4. Keluar" << endl; // membatalkan transaksi
        cout << "=> "; cin >> kode; // memasukan kode menu dengan angka 1-4
        switch(kode){
            case 1 :
                tarik :
                cout << "===================" << endl;
                cout << "    TARIK TUNAI    " << endl;
                cout << "===================" << endl << endl;
                cout << "Silahkan Masukan PIN Anda" << endl;
                cout << "=> "; cin >> pin_input;
                cout << endl;
                if(pin_input==kode_pin.config_pin()){
                    cout << "Masukan Nominal Saldo : "; cin >> tarik;
                    if(tarik%50000!=0 || tarik<0){
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl;
                        system("pause");
                        system("cls");
                        header();
                        goto tarik;
                    } else{
                        if(tarik > saldo_awal){
                            cout << "Saldo Anda Tidak Cukup" << endl;
                        } else{
                            saldo_awal -= tarik;
                            cout << "Silahkan Hitung Kembali Uang Yang Sudah Anda Tarik" << endl;
                            cout << "Total Saldo Anda Sekarang : " << saldo_awal << endl;
                        } system("pause");
                        system("cls");
                        header();
                        goto menu;
                    } break;
                } else{
                    cout << "PIN Yang Anda Masukan Salah" << endl;
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto tarik;
                } break;

                /*cout << "Masukan Nominal Saldo : "; cin >> tarik;
                if(tarik%50000!=0 || tarik<0){
                    cout << "Masukan Total Uang Dengan Pecahan 50000" << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto tarik;
                }
                else{
                    if(tarik > saldo_awal){
                        cout << "Saldo Anda Tidak Cukup" << endl;
                    }
                    else{
                        saldo_awal -= tarik;
                        cout << "Silahkan Hitung Kembali Uang Yang Sudah Anda Tarik" << endl;
                        cout << "Total Saldo Anda Sekarang : " << saldo_awal << endl;
                    }
                    system("pause");
                    system("cls");
                    header();
                    goto menu;
                } break;*/

            case 2 :
                setor :
                cout << "===================" << endl;
                cout << "    SETOR TUNAI    " << endl;
                cout << "===================" << endl << endl;
                cout << "Silahkan Masukan PIN Anda" << endl;
                cout << "=> "; cin >> pin_input;
                cout << endl;
                if(pin_input==kode_pin.config_pin()){
                    cout << "Masukan Nominal Setoran : "; cin >> setor;
                    if(setor%50000!=0 || setor<0){
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl;
                        system("pause");
                        system("cls");
                        header();
                        goto setor;
                    } else{
                        saldo_awal += setor;
                        cout << "Total Saldo Anda Sekarang : " << saldo_awal << endl;
                        system("pause");
                        system("cls");
                        header();
                        goto menu;
                    } break;
                } else{
                    cout << "PIN Yang Anda Masukan Salah" << endl;
                    cout << "Silahkan Masukan PIN dengan Benar" << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto tarik;
                } break;

                /*cout << "Masukan Nominal Setoran : "; cin >> setor;
                if(setor%50000!=0 || setor<0){
                    cout << "Masukan Total Uang Dengan Pecahan 50000" << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto setor;
                }
                else{
                    saldo_awal += setor;
                    cout << "Total Saldo Anda Sekarang : " << saldo_awal << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto menu;
                } break;*/

            case 3 :
                cout << "===================" << endl;
                cout << "     CEK SALDO     " << endl;
                cout << "===================" << endl << endl;
                cout << "Total Saldo Anda Sekarang : " << saldo_awal << endl;
                system("pause");
                system("cls");
                header();
                goto menu;
                break;

            case 4 :
                footer();
                break;
                
            default :
                cout << "Kode Yang Anda Pilih Tidak Ada, Mohon Masukan Kode 1-4" << endl;
                system("pause");
                system("cls");
                header();
                goto menu;
                break;
        }
    }
    else{
        cout << "PIN Yang Anda Masukan Salah" << endl;
        cout << "Silahkan Masukan PIN Dengan Benar" << endl;
        system("pause");
        system("cls");
        header();
        goto awal;
    }
}
