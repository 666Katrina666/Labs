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
    for (int i = 0; i < 365; i++) {
        a[i] = i + 1;
        while (a[i] > 6) {
            a[i] = a[i] - 7;
        }
    }
    cout << a[K - 1] << " day of week" << endl;

    cout << endl << "№3" << endl;
    int K;
    cout << "K = ";
    cin >> K;
    cout << "N = ";
    cin >> N;
    int q[365];
    q[0] = N;
    for (int j = 0; j < 365; j++) {
        q[j] = j + 1 + N;
        while (q[j] > 7) {
            q[j] = q[j] - 7;
        }
    }
    cout << q[K - 1] << " day of week" << endl;

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
