#include <iostream>
using namespace std;

int main ()
{
	try {
		cout << "Selamat belajar di Prodi TI UMY" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "pernyataan tidak akan dieksekusi" << endl;