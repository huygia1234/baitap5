// baitap6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main() {
	int so1, so2, thuong;
	cout << "CHUONG TRINH TÍNH THUONG\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu hai";
	cin >> so2;
	if (so2 != 0) {
		thuong = (float)so1/so2;
		cout << so1 << "/" << so2 << "=" << thuong << endl;
	}
	else {
		cout << "khong the chia" << so1 << "cho0\n";
	}
	return 0;
}