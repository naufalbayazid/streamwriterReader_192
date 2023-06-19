#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal program" << endl;
	try {
		array<int, 3> data = { 1, 2, 3 };
		cout << data.at(4) << endl;

	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
	cout << "baris program yang terakhir" << endl;
	return 0;
}
	
