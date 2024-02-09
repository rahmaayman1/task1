#include<iostream>
using namespace std;

int main() {

	int n1;
	cout << "enter the number: ";
	cin >> n1;
	bool even1 = (n1 % 2 == 0);
	cout << even1 << "\n";
	double n2 = (double)n1 / 2.0;
	n2 = n2 - (int)n2;
	bool even2 = (n2 == 0);
	cout << even2 << "\n";
	int last_num = n1 % 10;
	bool even3 = last_num == 2 || last_num == 4 || last_num == 6 || last_num == 8;
	cout << even3;

}

