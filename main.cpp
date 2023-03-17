#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
char nama[30],alamat[60],noHP[60],kdKategori,kategoriCucian[30];
int biaya,jumlahBayar,uangKembalian,berat,totalberat;
char pilih,pilihan;
int a,i;
string un[50],passwd[50],konf[50],user,pass;

int main(){
        a=2;
        un[1] = "admin";
        passwd[1] = "admin";
        atas:
        system("cls");
        cout << "SELAMAT DATANG DI APLIKASI LAUNDRYKU"<<endl;
        cout << "SILAHKAN LOGIN KE AKUN ANDA"<<endl;
        cout << endl;
        cout << "belum memiliki akun? daftar sekarang? (y/t)";
        cin>>pilih;
        if (pilih == 'y'){
        yo:
        system("cls");
        cout << "masukkan username: ";cin >> un[a];
        cout << "masukkan password anda: ";cin >> passwd[a];
        cout << "masukkan lagi password anda: ";
        cin >> konf[a];

        if (konf[a] == passwd[a]){
            system("cls");
            cout << "anda berhasil registrasi";
            getch();
            goto atas;
        }
        else{
            system("cls");
            cout << "password yang anda masukkan berbeda"<<endl;
            cout << "masukkan cout << endl;ulang username dan password anda"<<endl;
            goto yo;
        }
        a++;
        }
        else{
            ho:
            int su=3;
            hi:
            system("cls");
            cout << "LOGIN KE APLIKASI";
            cout << endl;
            cout << "masukkan username: ";
            cin >> user;
            cout << "masukkan password anda: ";
            cin >>pass;
            for (i=1; i<=a; i++){
                if (user == un[i]){
                    if (pass == passwd[i]){
                        cout << endl;
                        cout << "LOADING...";
                        Sleep (2000);
                        cout << ".....";
                        cout << endl;
                        cout << "anda login sebagai "<<user<<endl;
                        cout<<"===================================================="<<endl;
                        cout<<"\tProgram Laundry Pakaian"<<endl;
                        cout<<"===================================================="<<endl<<endl;
                        cout<<"----------------------------------------------------"<<endl;
                        cout<<"\tInput Data Pesanan"<<endl;
                        cout<<"----------------------------------------------------"<<endl;
                        cout<<"Nama Pelanggan   : ";cin>>nama;
                        cout<<"Alamat    : ";cin>>alamat;
                        cout<<"No Handphone   : ";cin>>noHP;
                        cout<<"----------------------------------------------------"<<endl;
                        cout<<"\tKategori Cucian"<<endl;
                        cout<<"----------------------------------------------------"<<endl;
                        cout<<"1. Reguler"<<endl;
                        cout<<"2. Ekspress"<<endl;
                        cout<<"3. Kilat"<<endl;
                        cout<<"----------------------------------------------------"<<endl;
                        cout<<"Input No Kategori [1-3]  : ";cin>>kdKategori;
                          switch(kdKategori)
                           {
                           case '1' :
                           strcpy(kategoriCucian,"Cuci Reguler 1 Hari ");
                           biaya=9000;
                           break;
                           case '2' :
                           strcpy(kategoriCucian,"Cuci Ekspress 12 Jam ");
                           biaya=12000;
                           break;
                           case '3' :
                           strcpy(kategoriCucian,"Cuci Kilat 5 Jam ");
                           biaya=15000;
                           break;
                           default:
                           strcpy(kategoriCucian, "tanda salah kode");
                           break;
                           }
                         cout<<"Berat Cucian (Kg)  : ";
                         cin>>berat;
                         cout<<"----------------------------------------------------"<<endl;
                         cout<<"\tResi Pesanan Laundry"<<endl;
                         cout<<"----------------------------------------------------"<<endl;
                         cout<<"Nama Pelanggan   : "<<nama<<endl;
                         cout<<"Alamat    : "<<alamat<<endl;
                         cout<<"No Handphone   : "<<noHP<<endl;
                         cout<<kategoriCucian<<" : Rp. "<<biaya<<endl;
                         totalberat=biaya*berat;
                         cout<<"Total Biaya   : Rp. "<<totalberat<<endl;
                         cout<<"===================================================="<<endl;
                         cout<<"Total Bayar   : Rp. ";cin>>jumlahBayar;
                         uangKembalian=jumlahBayar-totalberat;
                         cout<<"Kembalian   : Rp. "<<uangKembalian<<endl;
                         cout<<"===================================================="<<endl;
                         cout<<"Terima kasih telah Memesan di laundry kami"<<endl;
                         cout<<"Silahkan Menunggu Sampai Laundryan Selesai"<<endl;
                         cout<<""<<endl;
                         cout<<"apakah anda ingin Logout dari aplikasi? (y/t)"<<endl;
                         cin>>pilihan;
                         if (pilihan=='y'){
                            exit(0);
                         }
                         else if(pilihan=='t'){
                            cout<<"Silahkan Menunggu Sampai Laundryan Selesai"<<endl;
                         }
                         else {
                            exit(0);
                         }

                    }
                    else{
                        if (su==1){
                            system("cls");
                            cout << "ANDA TERLALU BANYAK MENCOBA MASUK"<<endl;
                            cout << "COBA BEBERAPA SAAT LAGI!!";
                            exit (0);
                        }
                        su=su-1;
                        system("cls");
                        cout << "kata sandi salah, kesempatan anda sisa "<<su<<" kali";
                        getch();
                        goto hi;

                    }
                }
            }
                system("cls");
                cout << "username yang anda masukkan salah";
                getch();
                goto ho;
        }
 return 0;
}
