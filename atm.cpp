/*
DZIKRI
RIRIN
ANIDA
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void header(){
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
    }
    public :
    int config_pin(){
        return kode_pin();
    }
    char* nama(){
        return (char*) "Vladilena Milize";
    }
    // char* rekening(){
    //     afhui
    // }
};

int main(){

    int saldo_awal = 2500000, pin_input , tarik , setor, kode ;
    pin kode_pin;

    header();
    awal:
    cout << endl;
    cout << "Silahkan Masukan PIN Anda" << endl;
    cout << "=> "; cin >> pin_input;
    cout << endl;
    menu :
    if(pin_input==kode_pin.config_pin()){
        cout << "=====================================" << endl;
        cout << "|| Selamat Datang " << kode_pin.nama() << ""; cout << " ||"<< endl;
        cout << "=====================================" << endl;
        cout << "||         MENU  TRANSAKSI         ||" << endl;
        cout << "=====================================" << endl;
        cout << "|| 1. Tarik Tunai                  ||" << endl;
        cout << "|| 2. Setor Tunai                  ||" << endl;
        cout << "|| 3. Cek Saldo                    ||" << endl;
        cout << "|| 4. Keluar                       ||" << endl;
        cout << "|| 0. Lainnya                      ||" << endl;
        cout << "=====================================" << endl; 
        cout << "=> "; cin >> kode; 
        cout << endl;

        switch(kode){
            case 1 :
                tarik :
                cout << "=====================================" << endl;
                cout << "||           TARIK TUNAI           ||" << endl;
                cout << "=====================================" << endl;
                cout << "Silahkan Masukan PIN Anda" << endl;
                cout << "=> "; cin >> pin_input;
                cout << endl << endl;
                if(pin_input==kode_pin.config_pin()){
                    cout << "Masukan Nominal Saldo : "; cin >> tarik;
                    if(tarik%50000!=0 || tarik<0){
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl << endl;
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
                            cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl;
                        } system("pause");
                        system("cls");
                        header();
                        goto menu;
                    } break;
                } else{
                    cout << "PIN Yang Anda Masukan Salah" << endl;
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto tarik;
                } break;

            case 2 :
                setor :
                cout << "===================" << endl;
                cout << "    SETOR TUNAI    " << endl;
                cout << "===================" << endl;
                cout << "Silahkan Masukan PIN Anda" << endl;
                cout << "=> "; cin >> pin_input;
                cout << endl;
                if(pin_input==kode_pin.config_pin()){
                    cout << "Masukan Nominal Setoran : "; cin >> setor;
                    if(setor%50000!=0 || setor<0){
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl << endl;
                        system("pause");
                        system("cls");
                        header();
                        goto setor;
                    } else{
                        saldo_awal += setor;
                        cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl;
                        system("pause");
                        system("cls");
                        header();
                        goto menu;
                    } break;
                } else{
                    cout << "PIN Yang Anda Masukan Salah" << endl;
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto tarik;
                } break;

            case 3 :
                saldo:
                cout << "===================" << endl;
                cout << "     CEK SALDO     " << endl;
                cout << "===================" << endl;
                cout << "Silahkan Masukan PIN Anda" << endl;
                cout << "=> "; cin >> pin_input;
                cout << endl;
                if(pin_input==kode_pin.config_pin()){
                    cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto menu;
                } else{
                    cout << "PIN Yang Anda Masukan Salah" << endl;
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto saldo;
                } break;

            case 4 :
                footer();
                break;

            case 0 :
                cout << "5. Rekening" << endl;
                cout << "6. Mutasi" << endl;
                cout << "=> "; cin >> kode;
                cout << endl;

                switch(kode){
                    case 5:
                    cout << "test" << endl;
                    system("pause");
                    system("cls");
                    header();
                    goto menu;
                    break;
                }
                
            default :
                cout << "Kode Yang Anda Pilih Tidak Ada, Mohon Masukan Kode 1-4" << endl << endl;
                system("pause");
                system("cls");
                header();
                goto menu;
                break;
        }
    }
    else{
        cout << "PIN Yang Anda Masukan Salah" << endl;
        cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl;
        system("pause");
        system("cls");
        header();
        goto awal;
    }
}
