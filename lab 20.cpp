#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "number = ";
    int n;
    float N, s, x, z, L, K, y, m, Q, W, E, R, T, U;
    cin >> n;
    vector<int> a = {}; 
    vector<int> b = {};
    vector<int> c = {};
    vector<int> d = {};
    vector<int> e = {};
    vector<int> f = {};
    vector<int> g = {};
    vector<int> X = {};
    vector<int> Y = {};
    switch (n) {
    case 1:
        cout << "N = ";
        cin >> N, s;
        for (int i = 0; i < N; i++) {
            cout << "a[" << i << "] = ";
            cin >> s;
            a.push_back(s);
        }
        x = 1;
        for (int i = 0; i < a.size(); i++) {
            z = a[i];
            b.push_back(z);
            c.push_back(x);
            if (i == 0 && a[0] != a[1]) {
                c.pop_back();
            }
            if (i > 0 && a[i - 1] == a[i]) {
                x += 1;
                b.pop_back();
                c.pop_back();
                c.pop_back();
                c.push_back(x);
            }
            if (i > 0 && a[i - 1] != a[i]) {
                c.pop_back();
                x = 1;
                c.push_back(x);
            }
        }
        for (int i = 0; i < b.size(); i++) {
            cout << "c[" << i << "] = " << b[i];
            if (i != b.size() - 1) {
                cout << ", ";
            }
            else {
                cout << "" << endl;
            }
        }
        for (int i = 0; i < c.size(); i++) {
            cout << "b[" << i << "] = " << c[i];
            if (i != c.size() - 1) {
                cout << ", ";
            }
            else {
                cout << "" << endl;
            }
        }
        break;
    case 2:
        cout << "L = ";
        cin >> L;
        cout << "N = ";
        cin >> N;
        for (int i = 0; i < N; i++) {
            cout << "a[" << i << "] = ";
            cin >> s;
            d.push_back(s);
        }
        x = 1;
        z = 0;
        for (int i = d.size() - 2; i >= 0; i--) {
            if (d[i] == d[i + 1]) {
                x++;
                if (i == 0) {
                    z = 1;
                }
            }
            else if (x > L && d[d.size() - 1] != d[i + 1]) {
                d[i + 1] = 0;
                for (int g = 1; g <= x; g++) {
                    d[i + x - 1] = d[i + x + g - 1];
                }
                for (int g = 1; g <= x; g++) {
                    d.pop_back();
                }
                x = 1;
            }
            else if (x > L && d[d.size() - 1] == d[i + 1]) {
                for (int h = x; h > 0; h--) {
                    d.pop_back();
                }
                d.push_back(0);
            }
            else {
                x = 1;
            }
            if (z == 1) {
                d[0] = 0;
                for (int g = 1; g < x; g++) {
                    d[g] = d[x + g - 1];
                }
                for (int g = 1; g < x; g++) {
                    d.pop_back();
                }
            }
        }
        for (int i = 0; i < d.size(); i++) {
            cout << "a[" << i << "] = " << d[i];
            if (i != d.size() - 1) {
                cout << ", ";
            }
            else {
                cout << "" << endl;
            }
        }
        break;
    case 3:
        cout << "N = ";
        cin >> N;
        cout << "K = ";
        cin >> K;
        for (int i = 0; i < N; i++) {
            cout << "a[" << i << "] = ";
            cin >> s;
            e.push_back(s);
        }
        x = 1;
        for (int i = 0; i < e.size(); i++) {
            f.push_back(x);
            if (i == 0 && e[0] != e[1]) {
                f.pop_back();
            }
            if (i > 0 && e[i - 1] == e[i]) {
                x += 1;
                f.pop_back();
                f.pop_back();
                f.push_back(x);
            }
            if (i > 0 && e[i - 1] != e[i]) {
                f.pop_back();
                x = 1;
                f.push_back(x);
            }
        }
        z = e[e.size() - 1];
        for (int i = f[f.size() - 1]; i > 0; i--) {
            e.pop_back();
        }
        x = 0;
        for (int i = K; i < f.size(); i++) {
            x = x + f[i];
        }
        for (int i = x; i > 0; i--) {
            s = e[e.size() - 1];
            g.push_back(s);
            e.pop_back();
        }
        N = e[e.size() - 1];
        for (int i = f[K - 1]; i > 0; i--) {
            e.pop_back();
        }
        for (int i = f[f.size() - 1]; i > 0; i--) {
            e.push_back(z);
        }
        for (int i = g.size() - 1; i >= 0; i--) {
            e.push_back(g[i]);
        }
        for (int i = f[K - 1]; i > 0; i--) {
            e.push_back(N);
        }
        for (int i = 0; i < e.size(); i++) {
            cout << "a[" << i << "] = " << e[i];
            if (i != e.size() - 1) {
                cout << ", ";
            }
            else {
                cout << "" << endl;
            }
        }
        break;
    case 4:
        L = 1;
        cout << "N = ";
        cin >> N;
        s = 0;
        for (int i = 1; i <= N; i++) {
            cout << "x" << i << " = ";
            cin >> x;
            cout << "y" << i << " = ";
            cin >> y;
            if (x > 0 && y < 0) {
                z = pow(pow(x, 2) + pow(y, 2), 0.5);
                if (z > s) {
                    K = x;
                    m = y;
                    s = z;
                    L = 0;
                }
            }
        }
        if (L == 0) {
            cout << "(" << K << ";" << m << ")";
        }
        else {
            cout << "(0;0)";
        }
        break;
    case 5:
        cout << "N = ";
        cin >> N;
        s = 0;
        for (int i = 1; i <= N; i++) {
            cout << "x" << i << " = ";
            cin >> x;
            X.push_back(x);
            cout << "y" << i << " = ";
            cin >> y;
            Y.push_back(y);
        }
        for (int i = 0; i < N; i++) {
            z = 0;
            for (int j = 1; j < N; j++) {
                if (i != j) {
                    z = sqrt(pow(X[i] - X[j], 2) + pow(Y[i] - Y[j], 2));
                }
                for (int h = 2; h < N; h++) {
                    if (j != h && h != i) {
                        z += sqrt(pow(X[i] - X[h], 2) + pow(Y[i] - Y[h], 2));
                        z += sqrt(pow(X[h] - X[j], 2) + pow(Y[h] - Y[j], 2));
                        if (z > s) {
                            s = z;
                            Q = X[i];
                            W = Y[i];
                            E = X[j];
                            R = Y[j];
                            T = X[h];
                            U = Y[h];
                        }
                    }
                }
            }
        }
        cout << "sum = " << s << endl << "(" << Q << ";" << W << "), (" << E << ";" << R << "), (" << T << ";" << U << ")";
        break;
    }

    return 0;
}