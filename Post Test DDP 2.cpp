#include <iostream>
using namespace std;

int main() {
	
	string nama;
	float jumlah_pinjaman;
	float bunga_perbulan;
	float lama_peminjaman;
	float cicilan_perbulan;
	
	getline(cin,nama);
	cin >> jumlah_pinjaman;
	cin >> bunga_perbulan;
	cin >> lama_peminjaman;
	
	cout << endl;
	
	cicilan_perbulan = bunga_perbulan + jumlah_pinjaman / lama_peminjaman;
	
	cout << endl;
	
	cout << "nama	= "<< nama << endl;
	cout << "cicilan perbulan 	= " << cicilan_perbulan << endl;
	
}
