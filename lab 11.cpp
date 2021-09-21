#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    if (A == B) {
        A = 0;
        B = A;
    }
    else {
        if (A > B) {
            B = A;
        }
        else {
            A = B;
        }
    }
    cout << "A = " << A << ", B = " << B << endl;

    cout << endl << "№2" << endl;
    int C, sum;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    if ((A > C) && (B > C)) {
        sum = A + B;
    }
    else if ((A > B) && (C > B)) {
        sum = A + C;
    }
    else {
        sum = B + C;
    }
    cout << "sum = " << sum << endl;

    cout << endl << "№3" << endl;
    int x1, x2, x3, y1, y2, y3, AB, AC;
    cout << "A:" << endl;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "B:" << endl;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "C:" << endl;
    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;
    AB = sqrt(pow((x1 + x2), 2) + pow((y1 + y2), 2));
    AC = sqrt(pow((x1 + x3), 2) + pow((y1 + y3), 2));
    if (AB > AC) {
        cout << "B closer, AB = " << AB << endl;
    }
    else if (AC > AB) {
        cout << "C closer, AC = " << AC << endl;
    }
    else {
        cout << "AB = AC" << endl;
    }

    cout << endl << "№4" << endl;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    if ((x1 > 0) && (y1 > 0)) {
        cout << "I" << endl;
    }
    else if ((x1 > 0) && (y1 < 0)) {
        cout << "II" << endl;
    }
    else if ((x1 < 0) && (y1 > 0)) {
        cout << "III" << endl;
    }
    else if ((x1 < 0) && (y1 < 0)) {
        cout << "IV" << endl;
    }

    cout << endl << "№5" << endl;
    cout << "give me a number = ";
    string z, x;
    cin >> x1;
    if (x1 == 0) {
        z = "";
        x = "нулевое";
    }
    if (x1 > 0) {
        z = "положительное ";
    }
    else if (x1 < 0) {
        z = "отрицательное ";
    }
    if ((x1 % 2 == 0) && (x1 != 0)) {
        x = "четное ";
    }
    else if (x1 != 0) {
        x = "нечетное ";
    }
    cout << z << x << "число" << endl;

    cout << endl << "№6" << endl;
    cout << "give me a number = ";
    cin >> x1;
    if (x1 % 2 == 0) {
        z = "четное ";
    }
    else {
        z = "нечетное ";
    }
    if (x1 < 10) {
        x = "однозначное ";
    }
    else if (x1 < 100) {
        x = "двузначное ";
    }
    else {
        x = "трехзначное ";
    }
    cout << z << x << "число" << endl;

    return 0;
}