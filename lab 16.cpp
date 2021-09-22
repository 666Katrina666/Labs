#include <iostream>
#include<vector> // динамический массив чтобы создался наконец-то (с вектором удобнее)
using namespace std;

int main()
{
    cout << "№1" << endl;
    int N;
    cout << "N = ";
    cin >> N;
    vector<int> a = {};
    int i = 1;
    while (N > 0) {
        a.push_back(i);
        N--;
        i = i + 2;
    }
    for (i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№2" << endl;
    cout << "N = ";
    cin >> N;
    int A, D;
    cout << "A = ";
    cin >> A;
    cout << "D = ";
    cin >> D;
    vector<int> b = {};
    while (N > 0) {
        b.push_back(A);
        N--;
        A = A * D;
    }
    for (i = 0; i < b.size(); i++) {
        cout << b[i] << ", ";
    }
    cout << "" << endl;

    cout << endl << "№3" << endl;
    cout << "N = ";
    cin >> N;
    int B, sum;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    sum = A + B;
    vector<int> c = {A, B};
    while (N - 2 > 0) {
        c.push_back(sum);
        N--;
        sum = sum + sum;
    }
    for (i = 0; i < c.size(); i++) {
        cout << c[i] << ", ";
    }

    cout << endl << "№4" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> d = {};
    for (i = 0; i < N; i++) { 
        cout << "d[" << i << "] = ";
        cin >> B;
        d.push_back(B);
    }
    i = 0;
    N--;
    while (N >= i) {
        cout << d[i] << ", ";
        if (N == i) {
            break;
        }
        cout << d[N] << ", ";
        N--;
        i++;
    }
    cout << "" << endl;
    
    cout << endl << "№5" << endl;
    cout << "N = ";
    cin >> N;
    vector<int> e = {};
    for (i = 0; i < N; i++) {
        cout << "e[" << i << "] = ";
        cin >> B;
        e.push_back(B);
    }
    /* Нечетные, а потом четные элементы в порядке возрастания порядкогого номера делаю, если неправильно поняла условие не бейте
    Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров.
    Это очень непонятная формулировка*/
    for (i = 0; i < N; i++) {
        if (e[i] % 2 != 0) {
            cout << e[i] << ", ";
        }
    }
    cout << " ";
    for (i = N - 1; i > 0; i--) {
        if (e[i] % 2 == 0) {
            cout << e[i] << ", ";
        }
    }
    cout << "" << endl;

    return 0;
}