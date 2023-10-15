#include <iostream>
using namespace std;

int main(){
	
	string nama,tempatLahir,alamat,kelurahan,kecamatan,statusKawin,kewarganegaraan;
	long long nik,tanggalLahir,bulanLahir,tahunLahir,rt,rw;
	char goldar,jk;
	//goldar=golongan darah, jk=jenis kelamin
	//baris 7 bisa pakai long long atau unsigned int
	
	cout << "===============\n";
	cout << "INPUT\n";
	cout << "===============\n";
	
	cout << "Masukkan Nama\t\t\t: ";
	getline(cin,nama);
	
	cout << "Masukkan NIK\t\t\t: ";
	cin >> nik;
	cin.ignore();
	//pakai cin.ignore untuk membersihkan newline character (bingung? coba hapus cin.ignore lalu run)
	
	cout << "Masukkan Tempat Lahir\t\t: ";
	getline(cin,tempatLahir);
	//pakai getline agar bisa input banyak kata dan menggunakan spasi
	
	cout << "Masukkan Tanggal Lahir\t\t: ";
	cin >> tanggalLahir;
	
	cout<<"Masukkan Bulan Lahir\t\t: ";
	cin >> bulanLahir;
	
	cout << "Masukkan Tahun Lahir\t\t: ";
	cin >> tahunLahir;
	
	cout << "Masukkan Jenis Kelamin\t\t: ";
	cin >> jk;
	
	cout << "Masukkan Golongan Darah\t\t: ";
	cin >> goldar;
	
	cout << "Masukkan Alamat\t\t\t: ";
	cin.ignore();
	getline(cin,alamat);
	
	cout << "Masukkan RT\t\t\t: ";
	cin >> rt;
	
	cout << "Masukkan RW\t\t\t: ";
	cin >> rw;
	cin.ignore();
	
	cout << "Masukkan Kelurahan\t\t: ";
	getline(cin,kelurahan);
	
	cout << "Masukkan Kecamatan\t\t: ";
	getline(cin,kecamatan);
	
	cout << "Masukkan Status Pernikahan\t: ";
	getline(cin,statusKawin);
	
	cout << "Masukkan Kewarganegaraan\t: ";
	getline(cin,kewarganegaraan);
	
	cout << endl;
	
	cout << "===============\n";
	cout << "OUTPUT\n";
	cout << "===============\n";
	
	cout << "Nama\t\t\t: " << nama << endl;
	cout << "NIK\t\t\t: " << nik << endl;
	cout << "Tempat/Tgl Lahir\t: " << tempatLahir << "," << tanggalLahir << "-" << bulanLahir << "-" << tahunLahir << endl;
	cout << "Jenis Kelamin\t\t: " << jk << endl;
	cout << "Golongan Darah\t\t: " << goldar << endl;
	cout << "Alamat\t\t\t: " << alamat << endl;
	cout << "RT/RW\t\t\t: " << rt << "/" << rw << endl;
	cout << "Kelurahan\t\t: " << kelurahan << endl;
	cout << "Kecamatan\t\t: " << kecamatan << endl;
	cout << "Status Pernikahan\t: " << statusKawin << endl;
	cout << "Kewarganegaraan\t\t: " << kewarganegaraan <<endl;
	
	return 0;
}
