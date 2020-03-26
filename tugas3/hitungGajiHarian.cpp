#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
struct Pegawai
{
	char nama[40];
	char nip[12];
	int jam_kerja;
	int gaji;
}pegawai;

int main() {
	// Menginputkan Identitas pekerja 
	cout << "Masukkan Identitas pekerja : " << endl;
	cout << "Nama \t: ";
	cin.getline(pegawai.nama, sizeof(pegawai.nama) / sizeof(pegawai.nama[40]));
	cout << "NIP \t: ";
	cin.getline(pegawai.nip, sizeof(pegawai.nip) / sizeof(pegawai.nip[12]));

	cout << "Masukkan jumlah jam kerja yang diambil hari ini : ";
	cin >> pegawai.jam_kerja;

	// Menghitung total gaji pegawai 
	pegawai.gaji = ((pegawai.jam_kerja - (pegawai.jam_kerja % 7)) +
		((pegawai.jam_kerja % 7) * 15)) * 500;

	//Menampilkan Identitas, total jam kerja, dan Total Gaji pegawai
	cout << "----------------------------------------------------\n";
	cout << "              Gaji Pegawai Hari ini\n";
	cout << "----------------------------------------------------\n\n";
	cout << "Nama \t\t: " << pegawai.nama << endl;
	cout << "NIP \t\t: " << pegawai.nip << endl;
	cout << "Jam kerja  \t: " << pegawai.jam_kerja - (pegawai.jam_kerja % 7) << endl;
	cout << "Jam lembur  \t: " << pegawai.jam_kerja % 7 << endl;
	cout << "Gaji \t\t: " << pegawai.gaji << endl;
	getch();
}
// 11.12.5800
