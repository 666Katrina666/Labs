#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "choose a task = ";
    int n, M, N, q, w, e, sum;
    float s, min, max;
    cin >> n;
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<vector<int>> c;
    vector<int> d;
    switch (n) {
    case 1:
        cout << "M = ";
        cin >> M;
        cout << "N = ";
        cin >> N;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(N);
            for (int j = 0; j < N; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < N; i++) {
            min = a[0][i];
            max = a[0][i];
            q = 0;
            w = 0;
            for (int j = 0; j < M; j++) {
                if (a[j][i] > max) {
                    max = a[j][i];
                    q = j;
                }
                if (a[j][i] < min) {
                    min = a[j][i];
                    w = j;
                }
            }
            a[q][i] = min;
            a[w][i] = max;
        }
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        break;
    case 2:
        cout << "M = ";
        cin >> M;
        cout << "N = ";
        cin >> N;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(N);
            for (int j = 0; j < N; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        min = a[0][0];
        q = 0;
        max = a[0][0];
        w = 0;
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] > max) {
                    max = a[i][j];
                    q = j;
                }
                if (a[i][j] < min) {
                    min = a[i][j];
                    w = j;
                }
            }
        }
        for (int i = 0; i < M; i++) {
            e = a[i][q];
            a[i][q] = a[i][w];
            a[i][w] = e;
        }
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        break;
    case 3:
        cout << "M = ";
        cin >> M;
        cout << "N = ";
        cin >> N;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(N);
            for (int j = 0; j < N; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        q = M / 2;
        w = N / 2;
        b.resize(q);
        c.resize(w);
        for (int i = 0; i < q; i++) {
            b[i].resize(w);
            for (int j = 0; j < w; j++) {
                b[i][j] = a[i][j];
            }
        }
        for (int i = q; i < M; i++) {
            c[i - q].resize(w);
            for (int j = w; j < N; j++) {
                c[i - q][j - w] = a[i][j];
            }
        }
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < w; j++) {
                a[i][j] = c[i][j];
            }
        }
        for (int i = q; i < M; i++) {
            for (int j = w; j < N; j++) {
                a[i][j] = b[i - q][j - w];
            }
        }
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        break;
    case 4:
        cout << "M = ";
        cin >> M;
        cout << "N = ";
        cin >> N;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(N);
            for (int j = 0; j < N; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        for (int j = 1; j < M; j++) {
            for (int i = 0; i < M - 1; i++) {
                if (a[i] > a[i + 1]) {
                    d = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = d;
                }
            }
        }
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        break;
    case 5:
        cout << "M = ";
        cin >> M;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(M);
            for (int j = 0; j < M; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        // от левого нижнего угла
        w = 0;
        for (int l = M - 1; l >= 0; l--) {
            sum = 0;
            for (int i = 0; i <= l; i++) {
                if (i + w <= M - 1) {
                    sum = sum + a[i + w][i];
                }
            }
            w++;
            d.push_back(sum);
        }
        w = 0;
        for (int l = M - 2; l >= 0; l--) {
            sum = 0;
            for (int i = 0; i <= l; i++) {
                if (i + w <= M - 1) {
                    sum = sum + a[i][i + w];
                }
            }
            w++;
            d.push_back(sum);
        }
        for (int j = M - 1; j >= 0; j--) {
            cout << d[j] << " ";
        }
        for (int j = M; j < d.size(); j++) {
            cout << d[j] << " ";
        }
        break;
    default:
        cout << "this task doesn't exist";
    }

    return 0;
}
