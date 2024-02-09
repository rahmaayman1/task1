#include<iostream>
using namespace std;

int main() {

	int x, y, z, max = 0;
	cin >> x >> y >> z;
	if (x < 100 || y < 100 || z < 100) {
		if (x<100 && x>max) {
			max = x;
		}
		if (y<100 && y>max) {
			max = y;
		}
		if (z<100 && z>max) {
			max = z;
		}
		cout << max;
	}
	else {
		cout << "-1";
	}
}

