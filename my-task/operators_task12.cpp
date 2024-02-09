#include<iostream>
using namespace std;

int main() {

	int age;
	cin >> age;
	int years = age / 360;
	int months = (age - years * 360) / 30;
	int days = age - years * 360 - months * 30;
	cout << years << " " << months << " " << days;


}

