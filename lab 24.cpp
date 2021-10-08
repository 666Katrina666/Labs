#include <iostream>
#include <string>
#include <cstdlib>
#include <windows.h> // русский проблемный язык
using namespace std;

int main()
{
    // со switch или if   getline(cin, s) не работает
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n, l, t, min;
    string s, S, d, D, f, F, h;
    char a;
    cout << "s = ";
    getline(cin, s);
    l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
            l++;
        }
    }
    cout << l << endl << endl;
    
    cout << "s = ";
    getline(cin, S);
    t = 0;
    min = 1000000;
    for (int i = 0; i < S.length(); i++) {
        if (S[i] != ' ') {
            t++;
        }
        else if (S[i] == ' ') {
            if (t < min) {
                min = t;
            }
            t = 0;
        }
        if (S[i + 1] == '\n') {
            if (t < min) {
                min = t;
            }
        }
    }
    cout << min << endl << endl;

    cout << "s = ";
    getline(cin, d);
    a = d[0];
    for (int i = 1; i < d.length(); i++) {
        if (d[i] != ' ' && d[i] == a) {
            d[i] = '.';
        }
        else if (d[i] == ' ' && d[i + 1] != '\n') {
            a = d[i + 1];
            i++;
        }
    }
    cout << d << endl << endl;

    cout << "s = ";
    getline(cin, D);
    t = 0;
    for (int i = 0; i < d.length(); i++) {
        if (d[i] == 'у' || d[i] == 'е' || d[i] == 'а' || d[i] == 'ы' || d[i] == 'я' || d[i] == 'ю' || d[i] == 'э' || d[i] == 'и') {
            t++;
        }
    }
    cout << t << endl << endl;

    cout << "s = ";
    getline(cin, f);
    t = 0;
    for (int i = 0; i < f.length(); i++) { // как сделать с "\"
        if (f[i] != '/') {
            if (f[i] != '.') {
                if (t == 0) {
                    F = F + f[i];
                }
            }
            else {
                t = 1;
            }
        }
        else {
            F.clear();
            t = 0;
        }
    }
    cout << F << endl << endl;

    s.clear();
    S.clear();
    d.clear();
    cout << "s = ";
    getline(cin, s);
    l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '/' && s[i] != '.') {
            S = S + s[i];
        }
        else if (s[i] == '/') {
            l++;
            d.clear();
            d = S;
            S.clear();
        }
        else {
            break;
        }

    }
    if (l == 2) {
        cout << "/";
    }
    cout << d << endl << endl;

    s.clear();
    S.clear();
    d.clear();
    cout << "s = ";
    cin >> s;
    for (int i = 1; i <= s.length(); i++) {
        if (i % 2 == 0) {
            S = S + s[i - 1];
        }
        if (i % 2 != 0) {
            d = d + s[i - 1];
        }
    }
    cout << S;
    for (int i = d.length() - 1; i >= 0; i--) {
        cout << d[i];
    }

    return 0;
}