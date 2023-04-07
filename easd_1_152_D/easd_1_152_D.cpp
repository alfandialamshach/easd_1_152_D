// 1. Karena algoritma merupakan langkah - langkah dalam menyelesaikan masalah secara urut
// 2. Static dan Dynamic
// 3. Kecepatan mesin, Sistem operasi, Ukuran masukkan
// 4. Algorithma yang efisien menerut saya apabila datanya kecil adalah insertionsort karena algorithma tersebut penggunaannya sederhana dan stabil
// 5. 





#include <iostream>
using namespace std;

int fandi[72];
int n;

void input() {
	while (true)
	{
		cout << "Masukkan jumlah data fandi : ";
		cin >> n;

		if (n <= 72) {
			break;
		}
		else
			
		{
			cout << "\nData fandi yang anda masukkan maksimal 72 elemen.\n";
		}
	}
	cout << endl;
	cout << "===================" << endl;
	cout << "Masukkan data fandi" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> fandi[i];
	}

}
void selectionsort() {
	int AA;
	int B;
	int temp;
	for (int i = 0; i < n - 1; i++)
		B = i;
	for (AA = i + 1; AA < n; AA++) {
		if (fandi[AA] < fandi[B]) {
			B = AA;
		}
	}
	temp = fandi[B];
	fandi[B] = fandi[i];
	fandi[i] = temp;

}
void display() {
	cout << endl;
	cout << "\n============================" << endl;
	cout << "Data fandi yang telah tersusun" << endl;
	cout << "\n============================" << endl;
}