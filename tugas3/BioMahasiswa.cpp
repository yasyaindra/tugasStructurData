#include<stdio.h>
#include<iostream.h>
#include<conio.h>

struct Tinggal
     {
           char Jalan[40];
           char Kota[15];
           char Pos[5];
     };

struct Tgl_lahir
     {
           int Tanggal;
           int Bulan;
           int Tahun;
     };

struct Mahasiswa
     {
           char Nim[9];
           char Nama[25];
           Tinggal Alamat;
           Tgl_Lahir;
     };
void main()
{
     Mahasiswa Mhs;
     cout<<"NIM           : "; cin.getline(Mhs.Nim,9);
     cout<<"Nama          : "; cin.getline(Mhs.Nama,25);
     cout<<"Alamat        :\n";
     cout<<"\tJalan       : "; cin.getline(Mhs.Alamat.Jalan,40);
     cout<<"\tKota        : "; cin.getline(Mhs.Alamat.Kota,15);

 
     cout<<"\Kode Pos     : "; cin.getline(Mhs.Alamat.Pos,5);
     cout<<"Tanggal Lahir :\n";
     cout<<"\tTanggal     : "; cin>>Mhs.Lahir.Tanggal;
     cout<<"\tBulan       : "; cin>>Mhs.Lahir.Bulan;
     cout<<"\tTahun       : "; cin>>Mhs.Lahir.Tahun;
     cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
     cout<<"NIM           : "<<Mhs.Nim;
     cout<<"\nNama        : "<<Mhs.Nama;
     cout<<"\nAlamat      : "<<\n";
     cout<<"\n\tJalan     : "<<Mhs.Alamat Jalan;
     cout<<"\n\tKota      : "<<Mhs.Alamat.Kota;
     cout<<"\n\tKode Pos  : "<<Mhs.Alamat.Pos;
     cout<<"\nTanggal Lahir: "<<Mhs.Lahir.Tanggal<<"-";
     cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
     getch();
}
