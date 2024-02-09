#include<iostream>
using namespace std;

int main() {

	int x, y;
	cin >> x >> y;
	cout << (x % y) << "\n";
	int res = x - (x / y) * y;
	cout << res;

}

