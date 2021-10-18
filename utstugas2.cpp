#include <iostream>
#include <string>

using namespace std;

/* g++ utstugas2.cpp -o

	jadinih

*/

	int main()
	{

		cout << "Tes Kebugaran" << endl ;

		int usia, tes1, tes2, skor1 ;
		char kelamin ;
		float skor2, hasil ;
		string jenis = "" ;

		cout << "Masukkan usia Anda: " ;
		cin >> usia ;
		cout << "Masukkan jenis kelamin (L/P): " ;
		cin >> kelamin ;
		cout << "Hasil tes 1: " ;
		cin >> tes1 ;
		cout << "Hasil tes 2: " ;
		cin >> tes2 ;


		if (usia >= 20 && usia <= 30)
		{
			if (kelamin == 'L' || kelamin == 'l')
			{
				// Buat kolom C
				if (tes1 >= 38 && tes1 <= 40)
				{
					skor1 = 3 ;
				}
				if (tes1 > 35 && tes1 <= 37)
				{
					skor1 = 2 ;
				}
				if (tes1 <= 35)
				{
					skor1 = 1 ;
				}

				//buat kolom E
				if (tes2 >= 14 && tes2 <= 16)
				{
					skor2 = 3 ;
				}
				if (tes2 > 11 && tes2 <= 13)
				{
					skor2 = 2 ;
				}
				if (tes2 <= 11)
				{
					skor2 = 1 ;
				}

				jenis = "Laki-laki" ;

				cout << "Umur Anda adalah " << usia << endl ;
				cout << "Jenis kelamin Anda adalah " << jenis << endl ;

				hasil = (skor1 + skor2)/2 ;
				cout << "Tingkat kebugaran Anda adalah " << hasil << ", dengan hasil tes 1 = " << skor1 << " dan hasil tes 2 = " << skor2 << endl ;
			}
			if (kelamin == 'P' || kelamin == 'p')
			{
				// Buat kolom C
				if (tes1 >= 34 && tes1 <= 36)
				{
					skor1 = 3 ;
				}
				if (tes1 >= 32 && tes1 < 34)
				{
					skor1 = 2 ;
				}
				if (tes1 <= 31)
				{
					skor1 = 1 ;
				}

				//buat kolom E
				if (tes2 > 10 && tes2 <= 13)
				{
					skor2 = 3 ;
				}
				if (tes2 >= 8 && tes2 <= 10)
				{
					skor2 = 2 ;
				}
				if (tes2 < 8)
				{
					skor2 = 1 ;
				}

				jenis = "Perempuan" ;

				cout << "Umur Anda adalah " << usia << endl ;
				cout << "Jenis kelamin Anda adalah " << jenis << endl ;

				hasil = (skor1 + skor2)/2 ;
				cout << "Tingkat kebugaran Anda adalah " << hasil << ", dengan hasil tes 1 = " << skor1 << " dan hasil tes 2 = " << skor2 << endl ;
			}
		}
		else if (usia > 30 && usia <= 40)
		{
			if (kelamin == 'L' || kelamin == 'l')
			{
				// Buat kolom C
				if (tes1 > 35 && tes1 <= 37)
				{
					skor1 = 3 ;
				}
				if (tes1 > 32 && tes1 <= 35)
				{
					skor1 = 2 ;
				}
				if (tes1 >= 30 && tes1 <= 32)
				{
					skor1 = 1 ;
				}

				//buat kolom E
				if (tes2 >= 38 && tes2 <= 30)
				{
					skor2 = 3 ;
				}
				if (tes2 > 25 && tes2 <= 27)
				{
					skor2 = 2 ;
				}
				if (tes2 < 25)
				{
					skor2 = 1 ;
				}

				jenis = "Laki=laki" ;

				cout << "Umur Anda adalah " << usia << endl ;
				cout << "Jenis kelamin Anda adalah " << jenis << endl ;

				hasil = (skor1 + skor2)/2 ;
				cout << "Tingkat kebugaran Anda adalah " << hasil << ", dengan hasil tes 1 = " << skor1 << " dan hasil tes 2 = " << skor2 << endl ;
			}
			if (kelamin == 'P' || kelamin == 'p')
			{
				// Buat kolom C
				if (tes1 > 30 && tes1 <= 32)
				{
					skor1 = 3 ;
				}
				if (tes1 >= 28 && tes1 <= 30)
				{
					skor1 = 2 ;
				}
				if (tes1 < 28)
				{
					skor1 = 1 ;
				}

				//buat kolom E
				if (tes2 > 22 && tes2 <= 24)
				{
					skor2 = 3 ;
				}
				if (tes2 >= 20 && tes2 <= 22)
				{
					skor2 = 2 ;
				}
				if (tes2 < 20)
				{
					skor2 = 1 ;
				}

				jenis = "Perempuan" ;

				cout << "Umur Anda adalah " << usia << endl ;
				cout << "Jenis kelamin Anda adalah " << jenis << endl ;

				hasil = (skor1 + skor2)/2 ;
				cout << "Tingkat kebugaran Anda adalah " << hasil << ", dengan hasil tes 1 = " << skor1 << " dan hasil tes 2 = " << skor2 << endl ;
			}
		}
		else
		{
			cout << "Tidak termasuk rentang usia" << endl ;
		}
			
		cout << "Program Selesai" << endl ;

		return 0;
	}
