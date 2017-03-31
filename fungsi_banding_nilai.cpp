#include <iostream>
using namespace std;

int banding (int x, int y);

int main () {
	int nilai1, nilai2;
	cout << "Masukkan Nilai X : " ;
	cin >> nilai1;
	cout << "Masukkan Nilai Y : " ;
	cin >> nilai2;
	cout << "Nilai Maksimum adalah : " << banding (nilai1, nilai2);
}

int banding (int X, int Y) {
	return max (X,Y);
}
