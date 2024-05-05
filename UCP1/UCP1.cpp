#include <iostream>
#include <string>
using namespace std;

int mat[20];
int bing[20];
int n;
string nama[20];
int ratarata;
string statuss[20];

void input() {
		cout << "Masukan jumlah kandidat mahasiswa : ";
		cin >> n;
		if (n <= 20) {
			for (int i = 0; i < n; i++) {
				cout << "Masukkan nama : ";
				cin >> nama[n];
				cout << "Masukkan nilai matematikaa : ";
				cin >> mat[n];
				cout << "Masukkan nilai bahasa inggris : ";
				cin >> bing[n];
			}
		}
		else {
			cout << "\nkandidat maksimal 20 orang. \n";
		}
}

	int hitungRatarata(){
		ratarata = ((mat[n] + bing[n]) / 2);
		return ratarata;
	}

	void status() {
		if (ratarata <= 70 || mat[n]) {
			statuss[n] = "Diterima";
		}
		else {
			statuss[n] = "Ditolak";
		}
	}

	void display() {
		cout << "===================" << endl;
		cout << "Daftar kandidat mahasiswa" << endl;
		cout << "===================" << endl;
		cout << "Nama" << "    " << "status" <<endl;

		for (int j = 0; j < n; j++) {
			cout << nama[n]<< "   " << statuss[n] << endl;
		}

	}

	int main() {
		input();
		hitungRatarata();
		status();
		display();
	}

	// 1. int x;
	//    string nama;
	//    double luasTanah;

	// 2. int i;
	//    i = 9
	//    if i < 11{
	//      cout << "ini print ke" << i << endl;
	//    }
	// 
	// 3. struct tanah{
	//      double panjangTanah;
	//      double lebarTanah;
	//    }
	// 
	// 4. int luasTanah{   <- ini fungsi 
	//      int luas;
	//      luas = panjangTanah * lebarTanah;
	//      
	//      return luas;
	//    }
	// 
	//    void ketTanah{   <-ini procedure
	//      cout << "Luas tanah ini adalah" << luas << "m2" << endl;
	//    }
	// 
	// 5. int i;
	// 
	//    for(i = 0; i <= 5; i++){
	//      cout << "ini data ke-" << i << endl;
	// 
	//     
