#include <iostream>
using namespace std;

int main()
{
    cout << endl << "№1" << endl;
    int A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    for (int i = A; i <= B; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << "" << endl;
    }

    cout << endl << "№2" << endl;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    while (A >= B) {
        A = A - B;
    }
    cout << A << endl; 

    cout << endl << "№3" << endl;
    int N, K, sum;
    cout << "N = ";
    cin >> N;
    sum = 0;
    K = 1;
    while (sum < N) {
        sum = sum + K;
        K = K + 1;
    }
    K--;
    cout << "K = " << K << ", sum = " << sum << endl;

    cout << endl << "№4" << endl;
    float S, P;
    S = 1000;
    cout << "P = ";
    cin >> P;
    P = P / 100 + 1;
    K = 0;
    while (S < 1100) {
        S = S * P;
        K++;
    }
    cout << "K = " << K << ", S = " << S << endl;
    
    cout << endl << "№5" << endl;
    bool q = 0;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    int c;
    if (B > A) {
        c = A;
        A = B;
        B = c;
    }
    while (q == false) {
        if (A % B == 0) {
            cout << B << endl;
            q = 1;
        }
        else {
            while (A > B) {
                A = A - B;
            }
            c = A;
            A = B;
            B = c;
        }
    }

    cout << endl << "№6" << endl;
    int n;
    cout << "N = ";
    cin >> N;
    B = 2;
    q = 0;
    n = 3;
    A = 1;
    while (q == false) {
        if (B == N) {
            cout << "K = " << n << endl;
            q = 1;
        }
        else {
            n++;
            c = B;
            B = B + A;
            A = c;
        }
    }


    return 0;
}