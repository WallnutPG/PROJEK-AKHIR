/*
KELOMPOK 2 :
ANIDA AULIA UTAMI
DZIKRI MAULANA NURRAFI
RIRIN SAFITRI

TEKNIK INFORMATIKA 1
*/

#include <iostream> // Menyertakan file header iostream, yang memberikan akses ke input/output stream standar seperti cin, cout, dan cerr.
#include <cstdlib> // Menyertakan file header cstdlib, yang memberikan akses ke fungsi-fungsi standar seperti exit, system, dan rand.
using namespace std; // Menggunakan namespace std, yang mengandung sebagian besar fungsi-fungsi standar C++ seperti cin, cout, dan string. Ini memungkinkan Anda untuk menggunakan nama-nama tersebut tanpa menuliskan std:: di depannya setiap kali.

void header(){ // Ini adalah fungsi bernama header yang tidak mengembalikan nilai apapun (void)
    cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar
    cout << "||    SELAMAT DATANG DI ATM BCA    ||" << endl; // Ini menampilkan string "|| SELAMAT DATANG DI ATM BCA ||" ke layar
    cout << "||          Pecahan 50000          ||" << endl; // Ini menampilkan string "|| Pecahan 50000 ||" ke layar
    cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar
}

void footer(){ // Ini adalah fungsi bernama footer yang juga tidak mengembalikan nilai apapun (void)
    cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar
    cout << "|| Terimakasih Atas Kunjungan Anda ||" << endl; // Ini menampilkan string "|| Terimakasih Atas Kunjungan Anda ||" ke layar
    cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar
}

class pin{ // Ini adalah definisi kelas pin. Kelas ini memiliki beberapa method (fungsi yang berada di dalam kelas)
    int kode_pin(){ // adalah method yang tidak bisa diakses dari luar kelas, atau method yang bersifat private. Method ini tidak memiliki parameter dan mengembalikan nilai integer 723456
        return 723456;
    }
    public :
    int config_pin(){ // adalah method yang bisa diakses dari luar kelas, atau method yang bersifat public. Method ini tidak memiliki parameter dan mengembalikan nilai yang dihasilkan dari method kode_pin().
        return kode_pin();
    }
    char* nama(){
        return (char*) "Vladelina Milize"; // adalah method yang bisa diakses dari luar kelas, atau method yang bersifat public. Method ini tidak memiliki parameter dan mengembalikan nilai string "Vladelina Milize"
    }
    char* rek(){ // adalah method yang bisa diakses dari luar kelas, atau method yang bersifat public. Method ini tidak memiliki parameter dan mengembalikan nilai string "23612616294798"
        return (char*) "23612616294798";
    }
};

int main(){

    int saldo_awal = 2500000, pin_input , tarik , setor, kode ;
    pin kode_pin;
    /*
    int saldo_awal = 2500000 : Ini adalah deklarasi variabel integer bernama saldo_awal dengan nilai awal 2500000.

    int pin_input, tarik, setor, kode : Ini adalah deklarasi variabel integer bernama pin_input, tarik, setor, dan kode. Nilai awalnya tidak ditentukan.

    pin kode_pin : Ini adalah deklarasi objek bernama kode_pin dari kelas pin. Kelas pin harus didefinisikan di tempat lain dalam program.
    */

    header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program.
    awal: // Ini adalah label yang dapat digunakan sebagai target perintah goto
    cout << endl; // untuk menambahkan newline
    cout << "Silahkan Masukan PIN Anda" << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Anda" ke layar dan kemudian menambahkan newline
    cout << "=> ";  // Ini menampilkan simbol "=>" ke layar
    cin >> pin_input; // Ini menerima input integer dari pengguna dan menyimpannya ke dalam variabel pin_input
    cout << endl; // untuk menambahkan newline
    menu : // Ini adalah label yang dapat digunakan sebagai target perintah goto
    if(pin_input==kode_pin.config_pin()){ // mengecek apakah pin_input sama dengan hasil pemanggilan fungsi config_pin() pada objek kode_pin
        cout << "=====================================" << endl; // Ini menampilkan sebuah baris panjang yang terdiri dari tanda sambung ("=") ke layar, kemudian menambahkan newline
        cout << "|| Selamat Datang " << kode_pin.nama() << ""; cout << " ||"<< endl; // Ini menampilkan pesan "Selamat Datang" ke layar, diikuti oleh hasil pemanggilan fungsi nama() pada objek kode_pin, kemudian menampilkan " ||" dan newline
        cout << "=====================================" << endl; // Ini menampilkan sebuah baris panjang yang terdiri dari tanda sambung ("=") ke layar, kemudian menambahkan newline
        cout << "||         MENU  TRANSAKSI         ||" << endl;
        cout << "=====================================" << endl; // Ini menampilkan sebuah baris panjang yang terdiri dari tanda sambung ("=") ke layar, kemudian menambahkan newline
        cout << "|| 1. Tarik Tunai                  ||" << endl; // Ini menampilkan pesan "1. Tarik Tunai" ke layar, diikuti oleh baris panjang yang terdiri dari tanda sambung (" ") dan newline
        cout << "|| 2. Setor Tunai                  ||" << endl; // Ini menampilkan pesan "2. Setor Tunai" ke layar, diikuti oleh baris panjang yang terdiri dari tanda sambung (" ") dan newline
        cout << "|| 3. Cek Saldo                    ||" << endl; // Ini menampilkan pesan "3. Cek Saldo" ke layar, diikuti oleh baris panjang yang terdiri dari tanda sambung (" ") dan newline
        cout << "|| 4. Keluar                       ||" << endl; // Ini menampilkan pesan "4. Keluar" ke layar, diikuti oleh baris panjang yang terdiri dari tanda sambung (" ") dan newline
        cout << "|| 0. Lainnya                      ||" << endl; // Ini menampilkan pesan "0. Lainnya" ke layar, diikuti oleh baris panjang yang terdiri dari tanda sambung (" ") dan newline
        cout << "=====================================" << endl;  // Ini menampilkan sebuah baris panjang yang terdiri dari tanda sambung ("=") ke layar, kemudian menambahkan newline
        cout << "=> ";  // Ini menampilkan simbol "=>" ke layar
        cin >> kode;  // Ini menerima input integer dari pengguna dan menyimpannya ke dalam variabel kode
        cout << endl; // Ini menambahkan newline ke layar

        switch(kode){ // switch yang akan memeriksa nilai variabel kode dan mengeksekusi pernyataan-pernyataan yang sesuai dengan kasus (case) yang cocok
            case 1 : // Ini adalah blok kode yang akan dijalankan jika pengguna memilih "1. Tarik Tunai" di menu transaksi
                tarik : // Ini adalah label yang dapat digunakan sebagai target perintah goto
                cout << "=====================================" << endl;
                cout << "||           TARIK TUNAI           ||" << endl;
                cout << "=====================================" << endl;
                cout << "Silahkan Masukan PIN Anda" << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Anda" ke layar dan kemudian menambahkan newline
                cout << "=> ";  // Ini menampilkan simbol "=>" ke layar
                cin >> pin_input;  // Ini menerima input integer dari pengguna dan menyimpannya ke dalam variabel pin_input
                cout << endl << endl; // Ini menambahkan dua newline ke layar
                if(pin_input==kode_pin.config_pin()){ // Ini adalah pernyataan if yang memeriksa apakah pin_input sama dengan nilai yang dihasilkan dari pemanggilan fungsi config_pin() pada objek kode_pin. Jika kondisi terpenuhi, pernyataan-pernyataan yang ditulis di dalam blok if akan dijalankan. Jika tidak, pernyataan-pernyataan di dalam blok else (jika ada) akan dijalankan
                    cout << "Masukan Nominal Saldo : "; // Ini menampilkan pesan "Masukan Nominal Saldo : " ke layar
                    cin >> tarik; // Ini menerima input integer dari pengguna dan menyimpannya ke dalam variabel tarik
                    if(tarik%50000!=0 || tarik<0){ // Ini adalah pernyataan if yang memeriksa apakah tarik bukan merupakan kelipatan dari 50000 atau kurang dari 0. Jika kondisi terpenuhi, pernyataan-pernyataan yang ditulis di dalam blok if akan dijalankan. Jika tidak, pernyataan-pernyataan di dalam blok else (jika ada) akan dijalankan
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl << endl; // Ini menampilkan pesan "Masukan Nominal Dengan Pecahan 50000" ke layar, kemudian menambahkan dua newline
                        system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                        system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                        header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                        goto tarik; // Ini adalah perintah goto yang mengarahkan eksekusi program ke label tarik. Pernyataan di bawah perintah goto akan diulangi sampai ada perintah goto atau pernyataan break di dalam blok kode yang mengarahkan eksekusi ke lokasi lain
                    } else{ // jika kondisi di dalam pernyataan if sebelumnya tidak terpenuhi
                        if(tarik > saldo_awal){ // Ini adalah pernyataan if yang memeriksa apakah tarik lebih besar dari saldo_awal. Jika kondisi terpenuhi, pernyataan-pernyataan yang ditulis di dalam blok if akan dijalankan. Jika tidak, pernyataan-pernyataan di dalam blok else (jika ada) akan dijalankan
                            cout << "Saldo Anda Tidak Cukup" << endl; // Ini menampilkan pesan "Saldo Anda Tidak Cukup" ke layar
                        } else{ // Ini adalah blok else yang akan dijalankan jika kondisi di dalam pernyataan if sebelumnya tidak terpenuhi
                            saldo_awal -= tarik; // Ini mengurangi nilai tarik dari saldo_awal dan menyimpan hasilnya kembali ke dalam saldo_awal
                            cout << "Silahkan Hitung Kembali Uang Yang Sudah Anda Tarik" << endl; // Ini menampilkan pesan "Silahkan Hitung Kembali Uang Yang Sudah Anda Tarik" ke layar, kemudian menambahkan newline
                            cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl; // Ini menampilkan pesan "Total Saldo Anda Sekarang " diikuti oleh nilai dari variabel saldo_awal, kemudian menambahkan dua newline ke layar
                        } system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                        system("cls"); // // Ini menjalankan perintah sistem yang membersihkan layar terminal
                        header(); // // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                        goto menu; // Ini adalah perintah goto yang mengarahkan eksekusi program ke label menu
                    } break; // Ini adalah pernyataan break yang digunakan untuk menghentikan eksekusi loop atau pernyataan switch
                } else{ // Ini adalah blok kode yang akan dijalankan jika kondisi di dalam pernyataan if sebelumnya tidak terpenuhi
                    cout << "PIN Yang Anda Masukan Salah" << endl; // Ini menampilkan pesan "PIN Yang Anda Masukan Salah" ke layar
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Dengan Benar" ke layar, kemudian menambahkan dua newline ke layar
                    system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                    system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                    header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                    goto tarik; // Ini adalah perintah goto yang mengarahkan eksekusi program ke label tarik
                } break; // Ini adalah pernyataan break yang menghentikan eksekusi pernyataan switch

            case 2 : // Ini adalah blok kode yang akan dijalankan jika pengguna memilih "2. Setor Tunai" di menu transaksi
                setor : // Ini adalah label yang dapat digunakan oleh perintah goto untuk mengarahkan eksekusi program ke sini
                cout << "=====================================" << endl; // Ini menampilkan garis penuh yang terdiri dari karakter '=' ke layar
                cout << "||           SETOR TUNAI           ||" << endl; // Ini menampilkan pesan "|| SETOR TUNAI ||" ke layar, kemudian menambahkan newline ke layar
                cout << "=====================================" << endl; // Ini menampilkan garis penuh yang terdiri dari karakter '=' ke layar
                cout << "Silahkan Masukan PIN Anda" << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Anda" ke layar, kemudian menambahkan newline ke layar
                cout << "=> "; cin >> pin_input; // Ini menampilkan tanda panah "=>" ke layar dan menerima input dari pengguna, yang disimpan ke dalam variabel pin_input
                cout << endl;
                if(pin_input==kode_pin.config_pin()){ // Ini adalah pernyataan if yang memeriksa apakah pin_input sama dengan nilai yang dihasilkan oleh fungsi kode_pin.config_pin(). Jika kondisi terpenuhi, pernyataan-pernyataan yang ditulis di dalam blok if akan dijalankan. Jika tidak, pernyataan-pernyataan di dalam blok else (jika ada) akan dijalankan
                    cout << "Masukan Nominal Setoran : "; cin >> setor; // Ini menampilkan pesan "Masukan Nominal Setoran : " ke layar dan menerima input dari pengguna, yang disimpan ke dalam variabel setor
                    if(setor%50000!=0 || setor<0){ // Ini adalah pernyataan if yang memeriksa apakah setor tidak habis dibagi dengan 50000 atau setor bernilai negatif. Jika kondisi terpenuhi, pernyataan-pernyataan yang ditulis di dalam blok if akan dijalankan. Jika tidak, pernyataan-pernyataan di dalam blok else akan dijalankan
                        cout << "Masukan Nominal Dengan Pecahan 50000" << endl << endl; // Ini menampilkan pesan "Masukan Nominal Dengan Pecahan 50000" ke layar, kemudian menambahkan dua newline ke layar
                        system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                        system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                        header(); // // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                        goto setor; // // Ini adalah perintah goto yang mengarahkan eksekusi program ke label setor
                    } else{ // Ini adalah blok kode yang akan dijalankan jika setor habis dibagi dengan 50000 dan setor tidak bernilai negatif
                        saldo_awal += setor; // Ini menambahkan nilai setor ke saldo_awal dan menyimpan hasilnya kembali ke saldo_awal
                        cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl; // Ini menampilkan pesan "Total Saldo Anda Sekarang " ke layar, kemudian menampilkan nilai dari saldo_awal, kemudian menambahkan dua newline ke layar
                        system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                        system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                        header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                        goto menu; // Ini adalah perintah goto yang mengarahkan eksekusi program ke label menu
                    } break; // Ini adalah pernyataan break yang menghentikan eksekusi pernyataan switch
                } else{ // Ini adalah blok kode yang akan dijalankan jika pin_input tidak sama dengan nilai yang dihasilkan oleh fungsi kode_pin.config_pin()
                    cout << "PIN Yang Anda Masukan Salah" << endl; // Ini menampilkan pesan "PIN Yang Anda Masukan Salah" ke layar, kemudian menambahkan newline ke layar
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Dengan Benar" ke layar, kemudian menambahkan dua newline ke layar
                    system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                    header(); // // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                    goto tarik; // // Ini adalah perintah goto yang mengarahkan eksekusi program ke label tarik
                } break; // // Ini adalah pernyataan break yang menghentikan eksekusi pernyataan switch

            case 3 : // // Ini adalah blok kode yang akan dijalankan jika pengguna memilih "3. Cek saldo" di menu transaksi
                saldo: // Ini adalah label yang dapat digunakan oleh perintah goto
                cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar, kemudian menambahkan newline ke layar
                cout << "||            CEK SALDO            ||" << endl; // Ini menampilkan string "|| CEK SALDO ||" ke layar, kemudian menambahkan newline ke layar
                cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar, kemudian menambahkan newline ke layar
                cout << "Silahkan Masukan PIN Anda" << endl; // Ini menampilkan string "Silahkan Masukan PIN Anda" ke layar, kemudian menambahkan newline ke layar
                cout << "=> "; cin >> pin_input; // Ini menampilkan string "=> " ke layar, kemudian menunggu input dari pengguna dan menyimpan input tersebut ke dalam variabel pin_input
                cout << endl; // Ini menambahkan newline ke layar
                if(pin_input==kode_pin.config_pin()){ // Ini adalah pernyataan if yang akan dijalankan jika pin_input sama dengan nilai yang dihasilkan oleh fungsi kode_pin.config_pin()
                    cout << "Total Saldo Anda Sekarang " << saldo_awal << endl << endl; // Ini menampilkan string "Total Saldo Anda Sekarang " ke layar, kemudian menampilkan nilai dari saldo_awal, kemudian menambahkan dua newline ke layar
                    system("pause"); // Ini menjalankan perintah sistem yang menampilkan pesan "Tekan sembarang tombol untuk melanjutkan..." dan menunda eksekusi program sampai pengguna menekan tombol apa pun
                    system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                    header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                    goto menu; // Ini adalah perintah goto yang mengarahkan eksekusi program ke label menu
                } else{ // Ini adalah blok kode yang akan dijalankan jika pin_input tidak sama dengan nilai yang dihasilkan oleh fungsi kode_pin.config_pin()
                    cout << "PIN Yang Anda Masukan Salah" << endl; // Ini menampilkan pesan "PIN Yang Anda Masukan Salah" ke layar, kemudian menambahkan newline ke layar
                    cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl; // Ini menampilkan pesan "Silahkan Masukan PIN Dengan Benar" ke layar, kemudian menambahkan dua newline ke layar
                    system("cls"); // Ini menjalankan perintah sistem yang membersihkan layar terminal
                    header(); // // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                    goto saldo; // // Ini adalah perintah goto yang mengarahkan eksekusi program ke label saldo
                } break; // // Ini adalah pernyataan break yang menghentikan eksekusi pernyataan switch

            case 4 : // Ini adalah blok kode yang akan dijalankan jika kode bernilai 4
                footer(); // Ini memanggil fungsi bernama footer(). Fungsi ini harus didefinisikan di tempat lain dalam program
                break; // Ini adalah pernyataan break yang menghentikan eksekusi pernyataan switch

            case 0 : // // Ini adalah blok kode yang akan dijalankan jika kode bernilai 0
                cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar, kemudian menambahkan newline ke layar
                cout << "||          MENU  LAINNYA          ||" << endl; // Ini menampilkan string "|| MENU LAINNYA ||" ke layar, kemudian menambahkan newline ke layar
                cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar, kemudian menambahkan newline ke layar
                cout << "|| 5. Cek Rekening                 ||" << endl; // Ini menampilkan string "|| 5. Cek Rekening ||" ke layar, kemudian menambahkan newline ke layar
                cout << "|| 99. Kembali                     ||" << endl; // Ini menampilkan string "|| 99. Kembali ||" ke layar, kemudian menambahkan newline ke layar
                cout << "=====================================" << endl; // Ini menampilkan string "=====================================" ke layar, kemudian menambahkan newline ke layar
                cout << "=> "; cin >> kode; // Ini menampilkan string "=> " ke layar, kemudian menunggu input dari pengguna dan menyimpan input tersebut ke dalam variabel kode
                cout << endl; // Ini menambahkan newline ke layar
                switch(kode){ // Ini adalah pernyataan switch yang memeriksa nilai dari variabel kode
                    case 5 : // Ini adalah blok kode yang akan dijalankan jika kode bernilai 5
                        rek: // Ini adalah label yang dapat digunakan untuk mengidentifikasi lokasi dalam kode yang dapat dituju dengan pernyataan goto
                        cout << "Silahkan Masukan PIN Anda" << endl; // Ini menampilkan string "Silahkan Masukan PIN Anda" ke layar, kemudian menambahkan newline ke layar
                        cout << "=> "; cin >> pin_input; // Ini menampilkan string "=> " ke layar, kemudian menunggu input dari pengguna dan menyimpan input tersebut ke dalam variabel pin_input
                        cout << endl; // Ini menambahkan newline ke layar
                        if(pin_input==kode_pin.config_pin()){ // Ini adalah pernyataan if yang memeriksa apakah pin_input sama dengan hasil pemanggilan fungsi config_pin() yang me-return kode_pin
                            cout << "No Rekening Anda => " << kode_pin.rek() << ""; cout << endl; // Ini menampilkan string "No Rekening Anda => " ke layar, kemudian menampilkan hasil pemanggilan fungsi rek() yang me-return rekening yang bersangkutan, lalu menambahkan newline ke layar
                            system("pause"); // Ini memberhentikan program sementara hingga pengguna menekan tombol enter
                            system("cls"); // Ini membersihkan layar console
                            header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                            goto menu; // Ini mengarahkan program ke label bernama menu
                        } else{ // Ini adalah blok kode yang akan dijalankan jika kondisi di dalam pernyataan if sebelumnya bernilai false
                            cout << "PIN Yang Anda Masukan Salah" << endl; // Ini menampilkan string "PIN Yang Anda Masukan Salah" ke layar
                            cout << "Silahkan Masukan PIN Dengan Benar" << endl; // Ini menampilkan string "Silahkan Masukan PIN Dengan Benar" ke layar
                            system("pause"); // Ini memberhentikan program sementara hingga pengguna menekan tombol enter
                            system("cls"); // Ini membersihkan layar console
                            header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                            goto rek; // Ini mengarahkan program ke label bernama rek
                        } break; // Ini menghentikan eksekusi dari pernyataan switch yang sedang berjalan
                    
                    case 99 : // Ini adalah blok kode yang akan dijalankan jika user memasukkan nilai 99 ke dalam variabel kode
                        system("cls"); // Ini membersihkan layar console
                        header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                        goto menu; // Ini mengarahkan program ke label bernama menu
                } break; // Ini menghentikan eksekusi dari pernyataan switch yang sedang berjalan
                
            default : // Ini adalah blok kode yang akan dijalankan jika tidak ada kasus yang cocok dengan nilai dari variabel kode
                cout << "Kode Yang Anda Pilih Tidak Ada, Mohon Masukan Kode 1-4" << endl << endl; // Ini menampilkan string "Kode Yang Anda Pilih Tidak Ada, Mohon Masukan Kode 1-4" ke layar
                system("pause"); // Ini memberhentikan program sementara hingga pengguna menekan tombol enter
                system("cls"); // Ini membersihkan layar console
                header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
                goto menu; // Ini mengarahkan program ke label bernama menu
                break; // Ini menghentikan eksekusi dari pernyataan switch yang sedang berjalan
        }
    }
    else{ // Ini adalah blok kode yang akan dijalankan jika pin yang dimasukkan oleh user tidak sesuai dengan pin yang tersimpan dalam program
        cout << "PIN Yang Anda Masukan Salah" << endl; // Ini menampilkan string "PIN Yang Anda Masukan Salah" ke layar
        cout << "Silahkan Masukan PIN Dengan Benar" << endl << endl; // Ini menampilkan string "Silahkan Masukan PIN Dengan Benar" ke layar
        system("pause"); // Ini memberhentikan program sementara hingga pengguna menekan tombol enter
        system("cls"); // Ini membersihkan layar console
        header(); // Ini memanggil fungsi bernama header(). Fungsi ini harus didefinisikan di tempat lain dalam program
        goto awal; // Ini mengarahkan program ke label bernama awal
    }
}
