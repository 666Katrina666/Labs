#include <iostream>
using namespace std;
#include <math.h>

#define pi 3.14;

int main()
{
    cout << "№1" << endl;
    float a;
    cout << "a = ";
    cin >> a;
    cout << "a = " << a / (180 / pi) << " radian" << endl;

    cout << endl << "№2" << endl;
    cout << "give me corner wihout pi, a = ";
    cin >> a;
    cout << "a = " << a * 180 << "◦" << endl;

    cout << endl << "№3" << endl;
    float X, A, Y;
    cout << "X = ";
    cin >> X;
    cout << "A = ";
    cin >> A;
    cout << "Y = ";
    cin >> Y;
    cout << "1 kg costs " << X / A << "rub, " << Y << " kg costs " << (X / A) * Y << "rub" << endl;

    cout << endl << "№4" << endl;
    float V1, V2, S, T;
    cout << "V1 = ";
    cin >> V1;
    cout << "V2 = ";
    cin >> V2;
    cout << "S = ";
    cin >> S;
    cout << "T = ";
    cin >> T;
    cout << "S = " << abs(V1 - V2) * T + S << "km" << endl;

    cout << endl << "№5" << endl;
    float B, x;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    x = -B / A;
    cout << "x = " << x << endl;

    cout << endl << "№6" << endl;
    float A1, A2, y, B1, B2, C1, C2;
    cout << "A1 = ";
    cin >> A1;
    cout << "A2 = ";
    cin >> A2;
    cout << "B1 = ";
    cin >> B1;
    cout << "B2 = ";
    cin >> B2;
    cout << "C1 = ";
    cin >> C1;
    cout << "C2 = ";
    cin >> C2;
    x = (C1 - C2 * B2 / B1) / (A2 - A1 * B2 / B1);
    y = (C1 - A1 * x) / B1;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
