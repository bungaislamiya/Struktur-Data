#include "iostream"
#include "conio.h"
#include "windows.h"

using namespace std;

struct daerah {
	char kel[50];
	char kec[50];
	char kota[50];
};

struct data {
	int nomor;
	char nama[50];
	char agama[20];
	char status[20];
	char pekerjaan[20];
	char tempat[20];
	char tanggal[20];
	char almt[20];
	daerah alamat;
};

int main() {
	int menu;
	int nik=-1,x,y;
	int n;
	n=1;
	int pilih;
	int namedit;
	data ktp[20];
	char get[1];
	bool ketemu;
//Menu aplikasi data KTP
menuutama:
	system("cls");
	cout << "############### Aplikasi Data KTP ###############";
	cout << " \nMenu UTAMA :\n\n";
	cout << " 1. Input Data Penduduk\n\n";
	cout << " 2. Mencari Data Penduduk\n\n";
	cout << " 3. Menghapus Data Penduduk\n\n";
	cout << " 4. Menampilkan Data Penduduk\n\n";
	cout << " 5. Keluar\n\n";
	cout << " ___________\n\n";
	cout << " Masukkan Pilihan Anda (1-5) : "; cin >> menu;
	//Input data KTP
if(menu == 1) {
	system("cls");
	nik++;
	cout << "\n############### INPUT DATABASE DATA PENDUDUK ###############\n";
	cout << "______________\n\n";
	cout << " NIK (max 5 karakter)        : "; cin >> ktp[nik].nomor; cin.getline(get,1);
	cout << endl;
	cout << " Nama Lengkap                 : "; cin.getline(ktp[nik].nama,50);
	cout << endl;
		cout << " Agama                        : "; cin.getline(ktp[nik].agama,20);
	cout << endl;
		cout << " Status Perkawinan            : "; cin.getline(ktp[nik].status,20);
	cout << endl;
		cout << " Pekerjaan                    : "; cin.getline(ktp[nik].pekerjaan,20);
	cout << endl;
		cout << " Tempat Lahir                 : "; cin.getline(ktp[nik].tempat,20);
	cout << endl;
		cout << " Tanggal Lahir (DD MM YYYY)   : "; cin.getline(ktp[nik].tanggal,20);
	cout << endl;
		cout << " Alamat                       : "; cin.getline(ktp[nik].almt,20);
	cout << endl;
		cout << " Kelurahan                    : "; cin.getline(ktp[nik].alamat.kel,20);
	cout << endl;
		cout << " Kecamatan                    : "; cin.getline(ktp[nik].alamat.kec,20);
	cout << endl;
		cout << " Kota                         : "; cin.getline(ktp[nik].alamat.kota,20);
	
	cout <<" _______________________\n\n";
	cout << " 1.Kembali ke Menu Utama\n\n";
	cout << " 2.Keluar dari Program\n";
	cout << " ___________\n\n";
	cout << " Masukkan Pilihan Anda (1/2): "; cin >> pilih;
	cout << endl;
	
	if(pilih == 1) {
		goto menuutama;
	}
	else if(pilih == 2) {
		goto keluar;
	  }
	}
	//Pencarian Data
	else if(menu == 2) {
		system ("cls");
		cout << "\n############### PENCARIAN DATA PENDUDUK ###############\n";
  cout << " ____________\n\n";
		cout << " Masukkan NIK : "; cin>>namedit;
		cout << endl;
		
		for(x=0;x<=nik;x++) {
	   if(namedit==ktp[x].nomor) {
		cout << " Data di temukan pada registrasi data penduduk ke-" << x+1 << endl << endl;
		cout << " Nama Lengkap       : " << ktp[x].nama << endl;
		cout << endl;
		cout << " Agama              : " << ktp[x].agama << endl;
		cout << endl;
		cout << " Status Perkawinan  : " << ktp[x].status << endl;
		cout << endl;
		cout << " Pekerjaan          : " << ktp[x].pekerjaan << endl;
		cout << endl;
		cout << " Tempat Lahir       : " << ktp[x].tempat << endl;
		cout << endl;
		cout << " Tanggal Lahir      : "<< ktp[x].tanggal << endl;
		cout << endl;
		cout << " Alamat             : "<< ktp[x].almt << endl;
		cout << endl;
		cout << " Kelurahan          : "<< ktp[x].alamat.kel << endl;
		cout << endl;
		cout << " Kecamatan          : "<< ktp[x].alamat.kec << endl;
		cout << endl;
		cout << " Kota               : "<< ktp[x].alamat.kota << endl << endl;
		cout << " ____________________\n\n";
		
		goto menu0;
	     }
	  }
	
	cout << " ###############  DATA YANG ANDA CARI TIDAK DITEMUKAN !!! ###############\n\n";
	cout << " ______________\n\n";
	  menu0:
	cout << " 1.Kembali Ke Menu Utama\n\n";
	cout << " 2.Keluar dari program\n";
	cout << " ___________\n\n";
	cout << " Masukkan Pilihan Anda (1/2): "; cin >> pilih;
	
	if(pilih == 1) {
		goto menuutama;
	}
	else if(pilih == 2) {
		goto keluar;
	}
 }
//Penghapusan Data
else if(menu == 3) {
	system ("cls");
	cout << "\n############### PENGHAPUSAN DATA PENDUDUK PADA DATABASE ###############\n";
	cout << " ________________\n\n";
	cout << " NIK : "; cin >> namedit;
	cout << endl;
	
	for(x=0;x<=nik;x++) {
		if(namedit==ktp[x].nomor) {
			ketemu=true;
			if(ketemu) {
				for(y=x;y<=nik+1;y++) {
					ktp[y]=ktp[y+1];
				}
				cout << "############### DATA BERHASIL DI HAPUS ###############\n\n";
				nik--;
				goto menu;
			}
		}
	}	
	cout << "############### DATA YANG AKAN DI HAPUS TIDAK DITEMUKAN !!! ###############\n";
	cout << "_________________\n\n";
	
	menu:
		cout << " 1.Kembali ke Menu Utama\n\n";
		cout << " 2.Keluar dari program\n";
		cout << "____________\n\n";
		cout << " Masukkan Pilihan Anda (1/2): "; cin >> pilih;
		if(pilih == 1) {
			goto menuutama;
		}
		else if(pilih == 2) {
			goto keluar;
		}
}
	 //Penampilan Data
else if(menu == 4) {
	system ("cls");
	cout << "\n############### MENAMPILKAN DATA PENDUDUK (KTP) ###############\n";
	cout << " ___________\n\n";
	for(x=0;x<=nik;x++) {
		cout << " Database Data Penduduk ke-" << x+1 << endl << endl;
		cout << " NIK : " << ktp[x].nomor << endl << endl;
		cout << " Nama : " << ktp[x].nama << endl << endl;
		cout << " Agama : " << ktp[x].agama << endl << endl;
		cout << " Status Perkawinan : " << ktp[x].status << endl << endl;
		cout << " Pekerjaan : " << ktp[x].pekerjaan << endl <<endl;
		cout << " Tempat Lahir : " << ktp[x].tempat << endl << endl;
		cout << " Tanggal Lahir : " << ktp[x].tanggal << endl << endl;
		cout << " Alamat : " << ktp[x].almt << endl << endl;
		cout << " Kelurahan : " << ktp[x].alamat.kel << endl << endl;
		cout << " Kecamatan : " << ktp[x].alamat.kec << endl << endl;
		cout << " Kota : " << ktp[x].alamat.kota << endl << endl << endl << endl; 
	}
	
	cout << " ______________\n\n";
	cout << " 1.Kembali ke Menu Awal\n\n";
	cout << " 2.Keluar dari program\n";
	cout << " ___________\n\n";
	cout << " Masukkan Pilihan Anda (1/2): "; cin >> pilih;
	if(pilih == 1) {
		goto menuutama;
	}
	else if(pilih == 2) {
		goto keluar;
	}
	
	keluar:
		system("cls");
		cout<<"\n############### TERIMA KASIH ###############\n" << endl << endl;
		getch();
		return 0;
}

else if(menu == 5) {
	system("cls");
	cout<<"\n############### TERIMA KASIH ###############\n" << endl << endl;
	getch();
	return 0;
}
}
