#include <iostream>
using namespace std;

int tambah(int a, int b)
{
	return a + b;
}

int kurang(int a, int b)
{
	return a - b;
}

int kali(int a, int b)
{
	return a * b;
}

int bagi(int a, int b)
{
	return a / b;
}

int modul(int a, int b)
{
	return a % b;
}


int main()
{
	int a,b,jml,pil;
	
	cout << "Selamat datang di Kalkulator Sederhana"<<endl;
	cout << "Silahkan pilih operasi aritmatika yang ingin dilakukan"<<endl;
	cout << "\t1.Penjumlahan\n\t2.Pengurangan\n\t3.Perkalian\n\t4.Pembagian\n\t5.Sisa bagi\n";
	cout << "Masukkan pilihan: ";
	cin >> pil;
	system("cls");
	cout << "Masukkan bilangan pertama : ";
	cin >> a;
	cout << "Masukkan bilangan kedua : ";
	cin >> b;
	
	switch(pil)
		{
			case 1:
				{
					jml = tambah(a,b);
					cout << "Jumlah " << a << " + " << b <<" = "<< jml;
					break;
				}
			case 2:
				{
					jml = kurang(a,b);
					cout << "Jumlah " << a << " - " << b <<" = "<< jml;
					break;
				}
			case 3:
				{
					jml = kali(a,b);
					cout << "Jumlah " << a << " xc" << b <<" = "<< jml;
					break;
				}
			case 4:
				{
					jml = bagi(a,b);
					cout << "Jumlah " << a << " : " << b <<" = "<< jml;
					break;
				}
			case 5:
				{
					jml = modul(a,b);
					cout << "Jumlah " << a << " mod " << b <<" = "<< jml;
					break;
				}
		}
}
