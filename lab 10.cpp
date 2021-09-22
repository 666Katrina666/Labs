#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    bool a = 0;
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    if ((A > 2) && (B <= 3)) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№2" << endl;
    int C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    a = 0;
    if ((A < B) && (B < C)) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№3" << endl;
    cout << "give me a number = ";
    cin >> A;
    a = 0;
    if ((A / 100 == 0) && (A % 2 == 0)) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№4" << endl;
    cout << "give me a number = ";
    cin >> A;
    int q[3];
    for (int i = 0; i < 3; i++) {
        q[i] = A % 10;
        A /= 10;
    }
    a = 0;
    if ((q[0] > q[1]) && (q[1] > q[2])) {
        a = 1;
    }
    else if ((q[0] < q[1]) && (q[1] < q[2])) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№5" << endl;
    cout << "give me a number = ";
    cin >> A;
    int w[4];
    for (int i = 0; i < 4; i++) {
        w[i] = A % 10;
        A /= 10;
    }
    a = 0;
    if ((w[0] == w[3]) && (w[1] == w[2])) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№6" << endl;
    cout << "a = ";
    cin >> A;
    cout << "b = ";
    cin >> B;
    cout << "c = ";
    cin >> C;
    a = 0;
    if ((pow(A, 2) + pow(B, 2) == pow (C, 2)) || (pow(A, 2) + pow(C, 2) == pow(B, 2)) || (pow(C, 2) + pow(B, 2) == pow(A, 2))) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    cout << endl << "№7" << endl;
    cout << "a = ";
    cin >> A;
    cout << "b = ";
    cin >> B;
    cout << "c = ";
    cin >> C;
    a = 0;
    if  ((A + B > C) && (A + C > B) && (C + B > A)) {
        a = 1;
    }
    cout << "comment is " << boolalpha << a << endl;

    return 0;
}
