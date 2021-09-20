#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    float a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "S = " << S << ", P = " << P << endl;

    cout << endl << "№2" << endl;
    float π = 3.14;
    cout << "d =";
    float d;
    cin >> d;
    float L = π * d;
    cout << "L = " << L << endl;

    cout << endl << "№3" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "average = " << (a + b) / 2 << endl;

    cout << endl << "№4" << endl << "give me first number: "; 
    cin >> a;
    cout << "give me second number: ";
    cin >> b;
    cout << "sum = " << (sqr(a) + sqr(b)) << ", difference = " << abs(sqr(a) - sqr(b)) << ", multiplication = " << (pow(a, 2) * pow(b, 2)) << ", private = " << (pow(a, 2) / pow(b, 2)) << endl;

    cout << endl << "№4" << endl << "give me first number: ";
    cin >> a;
    cout << "give me second number: ";
    cin >> b;
    a = abs(a);
    if (b < 0) {
        b *= -1;
    }
    cout << "sum = " << (a + b) << ", difference = " << abs(a - b) << ", multiplication = " << (a * b) << ", private = " << (a / b) << endl;

    return 0;
}
