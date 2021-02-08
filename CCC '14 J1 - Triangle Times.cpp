#include <iostream>

using namespace std; 

int main() {
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	if ((a1 + a2 + a3) != 180) {
		cout << "Error";
	} else if (a1 == a2 && a1 == a3) {
		cout << "Equilateral";
	} else if (a1 == a2 || a1 == a3 || a2 == a3) {
		cout << "Isosceles";
	} else {
		cout << "Scalene";
	}
}