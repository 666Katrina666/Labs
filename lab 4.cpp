#include <iostream>
using namespace std;
#include <math.h>

#define pi 3.14;

int main()
{
    
    cout << "№1" << endl;
    float a;
    float b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "S = " << S << ", P = " << P << endl;

    cout << endl << "№2" << endl;
    cout << "d =";
    float d;
    cin >> d;
    float L = d * pi;
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
    cout << "sum = " << (pow(a, 2) + pow(b,2)) << ", difference = " << abs(pow(a, 2) - pow(b, 2)) << ", multiplication = " << (pow(a, 2) * pow(b, 2)) << ", private = " << (pow(a, 2) / pow(b, 2)) << endl;

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
