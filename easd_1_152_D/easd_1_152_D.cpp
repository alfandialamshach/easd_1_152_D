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

	}

}