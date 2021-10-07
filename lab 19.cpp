#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "№1" << endl;
    vector<int> a = {};
    cout << "N = ";
    int N, s;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> s;
        a.push_back(s);
    }
    int t = 0;
    for (int i = N - 1; i > 0; i--) {
        if (a[i] == a[i - 1]) {
            for (int j = i; j < a.size() - 1; j++) {
                a[i - 1] = i - 1;
                a[j] = a[j + 1];
            }
            i--;
            a.pop_back();
        }
    }
    for (int i = 0; i < a.size(); i++) {
        cout << "a[" << i << "] = " << a[i];
        if (i != N - 1) {
            cout << ", ";
        }
        else {
            cout << "" << endl;
        }
    }

    cout << endl << "№2" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> q = {};
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> s;
        q.push_back(s);
    }
    for (int i = q.size() - 1; i > 0; i--) {
        s = 0;
        N = q[i];
        for (int j = q.size() - 1; j >= 0; j--) {
            if (q[i] == q[j]) {
                s++;
            }
        }
        if (s == 2) {
            for (int i = q.size() - 1; i > 0; i--) {
                if (q[i] == N) {
                    for (int j = i; j < q.size() - 1; j++) {
                        q[j] = q[j + 1];
                    }
                    q.pop_back();
                }
            }
        }
    }
    cout << "size = " << q.size() << ", ";
    for (int i = 0; i < q.size(); i++) {
        cout << "a[" << i << "] = " << q[i];
        if (i != q.size() - 1) {
            cout << ", ";
        }
        else {
            cout << "" << endl;
        }
    }

    cout << endl << "№3" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> w = {};
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> s;
        w.push_back(s);
    }
    int min = 0;
    int max = 0;
    for (int i = 0; i < N; i++) {
        if (w[i] > w[max]) {
            max = i + 1;
        }
        if (w[i] < w[min]) {
            min = i;
        }
    }
    if (max > min + 1) {
        auto iter = w.cbegin();
        w.insert(iter + max, 0);
        auto ite = w.cbegin();
        w.insert(ite + min, 0);
    }
    else {
        auto iter = w.cbegin();
        w.insert(iter + min, 0);
        auto ite = w.cbegin();
        w.insert(ite + max, 0);
    }
    for (int i = 0; i < w.size(); i++) {
        cout << "a[" << i << "] = " << w[i];
        if (i != w.size() - 1) {
            cout << ", ";
        }
        else {
            cout << "" << endl;
        }
    }

    cout << endl << "№4" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> x = {};
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> s;
        x.push_back(s);
    }
    auto it = x.cbegin();
    for (int i = 0; i < x.size(); i++) {
        if (x[i] < 0) {
            x.insert(it + 1 + i, 0);
            i++;
        }
    }
    for (int i = 0; i < x.size(); i++) {
        cout << "a[" << i << "] = " << x[i];
        if (i != x.size() - 1) {
            cout << ", ";
        }
        else {
            cout << "" << endl;
        }
    }

    cout << endl << "№5" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> z = {};
    for (int i = 0; i < N; i++) {
        cout << "a[" << i << "] = ";
        cin >> s;
        z.push_back(s);
    }
    auto tr = z.cbegin();
    int d;
    for (int i = z.size() - 1; i >= 0; i--) {
        if (z[i] > 0) {
            d = i;
            z.insert(tr + d, 0);
        }
    }
    for (int i = 0; i < z.size(); i++) {
        cout << "a[" << i << "] = " << z[i] << ", ";
    }

    return 0;
}