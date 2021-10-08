#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n , M, N, K;
    float t, s, q, w, x, c, v, b, sum, mul;
    cout << "choose a task = ";
    cin >> n;
    vector<vector<int>> a;
    switch (n) {
    case 1:
        cout << "M = ";
        cin >> M;
        if (M % 2 == 0) { //если вдруг случайно четное вместо нечетного впишу
            M--;
        }
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
        //вывод матрицы для удобства отслеживания правильности работы программы
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        /* 
           q и w - проверка на центр массива
           x - столбцы справа 
           c - строки с низу
           v - столбцы слева
           b - строки сверху
        */
        t = M / 2 + 1;
        q = 0;
        w = 0;
        x = 0;
        c = M - 1;
        v = M - 1;
        b = 0;
        while (q != t && w != t) {
            for (int i = b; i <= c; i++) {
                    cout << a[i][x] << " ";
                    q = x;
                    w = i;
                }
            x++;
            for (int i = x; i <= v; i++) {
                    cout << a[c][i] << " ";
                    q = i;
                    w = c;
                }
            c--;
            for (int i = c; i >= b; i--) {
                    cout << a[i][v] << " ";
                    q = i;
                    w = v;
                }
            v--;
            for (int i = v; i >= x; i--) {
                    cout << a[b][i] << " ";
                    q = b;
                    w = i;
                }
            b++;
        }
        break;
    case 2:
        cout << "M = ";
        cin >> M;
        cout << "N = ";
        cin >> N;
        cout << "K = ";
        cin >> K;
        a.resize(M);
        for (int i = 0; i < M; i++) {
            a[i].resize(N);
            for (int j = 0; j < N; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> s;
                a[i][j] = s;
            }
        }
        sum = 0;
        mul = 1;
        for (int i = 0; i < N; i++) {
            sum = sum + a[K - 1][i];
            mul = mul * a[K - 1][i];
        }
        cout << endl;
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].size(); j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
        cout << endl << "sum = " << sum << ", mul = " << mul;
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
        mul = 1;
        w = 0;
        for (int i = 0; i < M; i++) {
            mul = mul * a[i][0];
        }
        for (int i = 1; i < N; i++) {
            sum = 1;
            for (int j = 0; j < M; j++) {
                sum = sum * a[j][i];
            }
            if (sum < mul) {
                mul = sum;
                w = i;
            }
        }
        cout << w << " - col, " << mul << " - multiplication";
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
        for (int i = 0; i < N; i++) {
            x = 0;
            c = 0;
            b = 0;
            for (int j = 0; j < M; j++) {
                x = x + a[j][i];
                c++;
            }
            v = x / c;
            for (int j = 0; j < M; j++) {
                if (a[j][i] > v) {
                    b++;
                }
            }
            cout << b << " ";
        }
        break;
    case 5:
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
        x = 0;
        v = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (a[j][i] >= 0) {
                    x = 0;
                    break;
                }
                else {
                    x = 1;
                }
                if (x == 1 && j == M - 1) {
                    b = i + 1;
                    v = 1;
                }
            }
            if (v == 1) {
                break;
            }
        }
        if (x == 0) {
            cout << 0;
        }
        else {
            cout << b;
        }
        break;
    default:
        cout << "this task doesn't exist";
        break;
    }

    return 0;
}