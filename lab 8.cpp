#include <iostream>
using namespace std;

int main()
{
	cout << "№1" << endl;
	cout << "file size in bytes = ";
	float a, c;
	cin >> a;
	c = a / 1024;
	int h = c;
	if (c > h)
	{
		h += 1;
	}
	cout << "file size in kilobytes = " << h << endl;

	cout << endl << "№2" << endl;
	int A, B;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "B in A = " << A / B << endl;

	cout << endl << "№3" << endl;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "without B in A = " << A % B << endl;

	cout << endl << "№4" << endl;
	int x, b;
	cout << "x = ";
	cin >> x;
	a = x / 10;
	b = x % 10;
	cout << b << a << endl;

	cout << endl << "№5" << endl;
	int n, m, l;
	cout << "n = ";
	cin >> n;
	m = n / 100;
	l = n % 100;
	cout << l << m << endl;
	
	return 0;
}