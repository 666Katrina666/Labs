#include <iostream>
using namespace std;

int main()
{
   cout << "№1" << endl;
    int N, n, b;
    int c;
    cout << "N = ";
    cin >> N;
    if (N <= 60) {
        cout << N << " seconds" << endl;
    }
    else if ((N > 60) && (N < 60 * 60)) {
        n = N / 60;
        cout << N - n * 60 << " seconds" << endl;
    }
    else {
        n = N / (60 * 60);
        b = N - n * 60 * 60;
        c = b / 60;
        cout << b - c * 60 << " seconds" << endl;
    }

    cout << endl << "№2" << endl;
    int K;
    cout << "K = ";
    cin >> K;
    int a[365];
    a[0] = 1;
    for (int i = 1; i < 365; i++) {
        if (a[i - 1] < 6) {
            a[i] = a[i - 1] + 1;
        }
        else {
            a[i] = 0;
        }
    }
    cout << a[K] << " day of week" << endl;

    cout << endl << "№3" << endl;
    int K;
    cout << "K = ";
    cin >> K;
    cout << "N = ";
    cin >> N;
    int a[365];
    a[0] = N;
    for (int i = 1; i < 365; i++) {
        if (a[i - 1] < 7) {
            a[i] = a[i - 1] + 1;
        }
        else {
            a[i] = 1;
        }
    }
    cout << a[K] << " day of week" << endl;

    cout << endl << "№4" << endl;
    int A, B, C;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "C = ";
    cin >> C;
    b = A / C;
    c = B / C;
    cout << "number of squares = " << b * c << ", unoccupied area = " << ((A * B) - (pow(C, 2) * b * c)) << endl;

    cout << endl << "№5" << endl;
    cout << "number of the year = ";
    cin >> N;
    n = N / 100 + 1;
    if (N % 100 == 0) {
        n--;
    }
    cout << "number of the sentury = " << n << endl;

    return 0;
}
