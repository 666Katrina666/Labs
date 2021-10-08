#include <iostream>
using namespace std;

int main()
{
    cout << "choose a task = ";
    int n, t;
    char a;
    string s, S, l;
    cin >> n;
    switch (n) {
    case 1:
        cout << "a = ";
        cin >> a;
        cout << "prev = " << char(a - 1) << ", next = " << char(a + 1);
        break;
    case 2:
        cout << "s = ";
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            cout << s[i] << " ";
        }
        break;
    case 3:
        cout << "s = ";
        cin >> s;
        t = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                t++;
            }
        }
        cout << t;
        break;
    case 4:
        cout << "a = ";
        cin >> a;
        cout << "s = ";
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == a) {
                cout << s[i] << s[i];
            }
            else {
                cout << s[i];
            }
        }
        break;
    case 5:
        cout << "S = ";
        cin >> S;
        cout << "s = ";
        cin >> s;
        t = 0;
        for (int i = 0; i <= S.length() - s.length(); i++) {
            l.clear();
            for (int j = 0; j < s.length(); j++) {
                l = l + S[i + j];
            }
            if (l == s) {
                t++;
            }
        }
        cout << t;
        break;
    default:
        cout << "this task doesn't exist";
    }

    return 0;
}