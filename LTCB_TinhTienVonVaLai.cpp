#include <iostream>
using namespace std;

int main() {
	float T;
	cout << "Nhap so tien gui (trieu dong) : "; cin >> T;

	float von = T;
	for (int i = 1; i <= 10; ++i) {
		float lai = von * 0.07; // Lãi sau mỗi năm
		von += lai;
		cout << "Nam " << i << ": VON = " << von << " trieu dong,LAI = " << lai << " trieu dong " << endl;
	}
	return 0;
}


