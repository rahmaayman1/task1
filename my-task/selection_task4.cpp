#include<iostream>
using namespace std;

int main() {

	int x, n1, n2, n3, n4, n5;
	cin >> x >> n1 >> n2 >> n3 >> n4 >> n5;
	int num = 0;
	num += (x >= n1);
	num += (x >= n2);
	num += (x >= n3);
	num += (x >= n4);
	num += (x >= n5);
	cout << num << " " << 5 - num;
}

