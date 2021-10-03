#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "№1" << endl;
    vector<int> a = {};
    vector<int> b = {};
    int N, s;
    cout << "N = ";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> s;
        a.push_back(s);
        cout << "B[" << i << "] = ";
        cin >> s;
        b.push_back(s);
    }
    for (int i = 0; i < N; i++) {
        s = a[i];
        a[i] = b[i];
        b[i] = s;
    }
    cout << "A = ";
    for (int i = 0; i < N; i++) {
        cout << a[i] << ", ";
    }
    cout << "  B = ";
    for (int i = 0; i < N; i++) {
        cout << b[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№2" << endl;
    cout << "N = ";
    cin >> N;
    float n, f;
    vector<int> c = {};
    vector<float> d = {};
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> s;
        c.push_back(s);
    }
    for (int i = 0; i < N; i++) {
        s = 0;
        n = 0;
        for (int j = 0; j <= i; j++) {
            s += c[j];
            n++;
        }
        f = s / n;
        d.push_back(s/n);
    }
    cout << "B = ";
    for (int i = 0; i < N; i++) {
        cout << d[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№3" << endl;
    cout << "N = ";
    cin >> N;
    f = 0;
    vector<int> e = {};
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> s;
        e.push_back(s);
    }
    for (int i = N - 1; i >= 0; i--) {
        if (e[i] % 2 != 0) {
            f = 1;
            s = e[i];
            break;
        }
    }
    if (f == 1) {
        for (int i = N - 1; i >= 0; i--) {
            if (e[i] % 2 != 0) {
                e[i] += s;
            }
        }
    }
    cout << "A = ";
    for (int i = 0; i < N; i++) {
        cout << e[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№4" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> g = {};
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> s;
        g.push_back(s);
    }
    int min = g[0];
    int m = 0;
    int M = 0;
    int max = g[0];
    for (int i = 0; i < N; i++) {
        if (g[i] > max) {
            max = g[i];
            M = i;
        }
        if (g[i] < min) {
            min = g[i];
            m = i;
        }
    }
    if (m > M) {
        for (int i = M + 1; i < m; i++) {
            g[i] = 0;
        }
    }
    else {
        for (int i = M - 1; i > m; i--) {
            g[i] = 0;
        }
    }
    cout << "A = ";
    for (int i = 0; i < N; i++) {
        cout << g[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№5" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> h = {};
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "] = ";
        cin >> s;
        h.push_back(s);
    }
    s = h[0];
    for (int i = 1; i < N; i++) {
        if (s >= h[i]) {
            m = i;
        }
    }
    for (int i = 0; i < m; i++) {
        h[i] = h[i + 1];
    }
    h[m] = s;
    cout << "A = ";
    for (int i = 0; i < N; i++) {
        cout << h[i] << ", ";
    }
    cout << "" << endl;

    return 0;
}