// 6.
#include <iostream>
using namespace std;
int y;
int main()
	{
		float nama, nMat, nBing, rerata;
		string status;

		cout << "Masukan nama: ";
	    cin >> nama;

		cout << "Masukan nilai matematika";
		cin >> nMat;

		cout << "Masukan nilai Bahasa inggris";
		cin >> nBing;

		rerata = (nBing + nMat) / 2;
		if (rerata >= 70) {
			status = "Diterima jalur rerata";
		}

		else if (nMat > 80) {
			status = "Diterima jalur matematika";
		}
		else
		{
			status = "Ditolak";
		}

		cout << "Statusnya adalah" << status << endl;
		cout << "Apakah anda ingin mengulang program? y/n ";
		cin >> y;
		if (y == 'y' || y == 'Y');
		return 0;
	
			
	
}


//   1. a. int adalah variable yang berguna untuk mendeklarasikan tipe data yang akan digunakan pada program. contohnya yaitu char, varchar, dll
//      b. void adalah variable yang berguna untuk memasukkan dan menampilkan data pada program. contohnya yaitu void input dan output
//      c. string adalah variable yang berguna untuk menuliskan  data yang panjangnya tidak pasti atau tidak dapat ditentukan, seperti nama.
//   2. Conditional statement adalah sebuah program ketika terdapat lebih dari satu kondisi yang kemungkinan terjadi pada sebuah program.contoh implementasinya adalah ketika diadakan sebuah tes masuk ke sebuah perusahaan. Peserta dinyatakan lulus apabila memiliki nilai rata-rata matematika dan ekonomi kurang dari 75 atau nilai ekonominya lebih dari 80.
//   3. Struct adalah sebuah program yang digunakan jika ingin menambahkan detail tambahan,seperti pada alamat.contohnya adalah pada kolom pengisian alamat seseorang menggunakan
//   4. Prosedur atau fungsi adalah sebuah program yang digunakan untuk membuat program mengerjakan suatu fungsi atau bekerja sesuai dengan sebuah prosedur. contoh implementasinya adalah sebuah kasir yang menghitung total harga dari seluruh barang yang dibeli pelanggan.
//   5. Looping adalah sebuah program yang akan berjalan dan baru berhenti jika sudah memenuhi syarat dan ketentuan tertentu. contohnya adalah  seseorang ingin menampilkan tulisan "YA" sebanyak 10 kali pada sebuah program.
