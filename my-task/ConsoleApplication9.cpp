

#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8;
	cout << "enter 8 numbers: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
	int sum_even = n2 + n4 + n6 + n8;
	int sum_odd = n1 + n3 + n5 + n7;
	cout << "the sum of even places=" << sum_even<<endl;
	cout << "the sum of odd places=" << sum_odd;
	
}

