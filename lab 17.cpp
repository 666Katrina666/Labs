#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "№1" << endl;
    int N, K, L, q;
    float s = 0;
    float sum = 0;
    vector<int> a = {};
    cout << "N = ";
    cin >> N;
    cout << "K = ";
    cin >> K;
    cout << "L = ";
    cin >> L;
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> q;
        a.push_back(q);
    }
    for (int w = K - 1; w <= L - 1; w++) {
        sum = sum + a[w];
        s++;
    }
    float g = sum / s;
    cout << g << endl;

    cout << endl << "№2" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> e = {};
    for (int i = 0; i < N; i++) {
        cout << "e[" << i << "] = ";
        cin >> q;
        e.push_back(q);
    }
    int y = 0;
    for (int i = 1; i < N - 1; i++) {
        K = i - 1;
        L = i + 1;
        if (e[i] - e[K] == e[L] - e[i]) {
            y = e[i] - e[K];
        }
        else {
            y = 0;
            break;
        }
    }
    cout << y << endl;
    
    cout << endl << "№3" << endl;
    cout << "N = ";
    cin >> N;
    int min;
    vector<int> A = {};
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> q;
        A.push_back(q);
    }
    min = A[2];
    for (int i = 2; i < N - 1; i += 2) {
        if (min > A[i]) {
            min = A[i];
        }
    }
    cout << min << endl;

    cout << endl << "№4" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> z = {};
    for (int i = 0; i < N; i++) {
        cout << "z[" << i << "] = ";
        cin >> q;
        z.push_back(q);
    }
    q = 0;
    for (int i = 1; i < N - 1; i++) {
        K = i - 1;
        L = i + 1;
        if ((z[i] > z[K]) && (z[i] > z[L])) {
            q = i;
        }
    }
    cout << q << endl;

    cout << endl << "№5" << endl;
    cout << "N = ";
    cin >> N;
    bool k = 0;
    vector<int> x = {};
    for (int i = 0; i < N; i++) {
        cout << "x[" << i << "] = ";
        cin >> q;
        x.push_back(q);
    }
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (x[i] == x[j]) {
                K = i;
                L = j;
                k = 1;
                break;
            }
        }
        if (k == true) {
            break;
        }
    }
    cout << K << " " << L << endl;

    return 0;
}