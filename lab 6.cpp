#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    float A, B, c;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    c = A;
    A = B;
    B = c;
    cout << "A = " << A << ", B = " << B << endl;

    cout << endl << "№2" << endl;
    float C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    c = A;
    A = C;
    C = B;
    B = c;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    cout << endl << "№3" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    c = A;
    A = B;
    B = C;
    C = c;
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

    cout << endl << "№4" << endl;
    float x;
    cout << "x = ";
    cin >> x;
    cout << "y = " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7 << endl;

    cout << endl << "№5" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = " << 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2 << endl;

    cout << endl << "№6" << endl;
    cout << "A = ";
    cin >> A;
    c = pow(A, 6);
    cout << c * A * A << endl;

    cout << endl << "№7" << endl;
    cout << "A = ";
    cin >> A;
    c = pow(A, 6);
    x = pow(A, 5);
    cout << c * x * A * A * A * A << endl;
    
    return 0;
}