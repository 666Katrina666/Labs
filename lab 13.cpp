#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    float c;
    cout << "price = ";
    cin >> c;
    float i = 0.1;
    while (i < 1.01) {
        cout << c * i << " price of " << i << " kg" << endl;
        i = i + 0.1;
    }

    cout << endl << "№2" << endl;
    int N, b;
    cout << "N = ";
    cin >> N;
    i = 1.1;
    c = 1;
    b = 0;
    while (b < N) {
        c = c * i;
        i = i + 0.1;
        b++;
    }
    cout << c << endl;

    cout << endl << "№3" << endl;
    cout << "N = ";
    cin >> N;
    c = 0;
    i = 1;
    while (i <= 2 * N - 1) {
        c = c + i;
        i = i + 2;
        cout << c << endl;
    }

    cout << endl << "№4" << endl;
    float A;
    cout << "N = ";
    cin >> N;
    cout << "A = ";
    cin >> A;
    i = 0;
    c = 0;
    while (i <= N) {
        c = c + pow(A, i);
        i++;
    }
    cout << c << endl;

    cout << endl << "№5" << endl;
    cout << "N = ";
    cin >> N;
    cout << "A = ";
    cin >> A;
    i = 0;
    c = 0;
    while (i <= N) {
        c = c + pow(-1, i) * pow(A, i);
        i++;
    }
    cout << c << endl;

    return 0;
}