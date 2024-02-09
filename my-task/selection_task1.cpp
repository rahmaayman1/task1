#include<iostream>
using namespace std;

int main() {

	int A, B;
	cin >> A >> B;
	if (A % 2 != 0 && B % 2 != 0) {
		cout << A * B;
	}
	else if (A % 2 == 0 && B % 2 == 0) {
		if (B != 0)
			cout << A / B;
		else
			cout << "B=0";
	}
	else if (A % 2 != 0 && B % 2 == 0) {
		cout << A + B;
	}
	else if (A % 2 == 0 && B % 2 != 0) {
		cout << A - B;
	}

}

