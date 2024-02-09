#include<iostream>
using namespace std;

int main() {

	double n1, n2, n3, n4, n5;
	cout << "enter 5 numbers";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	double avg = (n1 + n2 + n3 + n4 + n5) / 5;
	double sum = (n1 + n2 + n3) / (n4 + n5);
	double avg2 = ((n1 + n2 + n3) / 3) / ((n4 + n5) / 2);
	cout << avg << "\n";
	cout << sum << "\n";
	cout << avg2 << "\n";
}

