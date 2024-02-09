#include<iostream>
using namespace std;

int main() {

	int num;
	cout << "enter the number: ";
	cin >> num;
	int last1 = (num % 10);
	num = num / 10;
	int last2 = (num % 10);
	num = num / 10;
	int last3 = (num % 10);
	int sum = last1 + last2 + last3;
	cout << sum;

}

