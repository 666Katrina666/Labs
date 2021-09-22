#include <iostream>
using namespace std;

int PowerA3(float A, float  B);
int Sign(float X);
float RingS(float R1, float R2);
int Quarter(float x, float y);
float Fact2(int N);

int main()
{
    cout << endl << "№1" << endl;
    for (int i = 1; i < 6; i++) {
        float A, B; // не совсем разобралась В обязательна к объявлению?
        cout << "A = ";
        cin >> A;
        B = 0; // и присваиванию? дальше буду делать также
        cout << "B = " << PowerA3(A, B) << endl;
    }

    cout << endl << "№2" << endl;
    float A, B;
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    cout << "X = " << Sign(A) + Sign(B) << endl;

    cout << endl << "№3" << endl;
    for (int i = 1; i < 4; i++) {
        cout << "R1 = ";
        cin >> A;
        cout << "R2 = ";
        cin >> B;
        cout << RingS(A, B) << endl;
    }

    cout << endl << "№4" << endl;
    float x, y;
    for (int i = 1; i < 4; i++) {
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        cout << Quarter(x, y) << endl;
    }

    cout << endl << "№5" << endl;
    int N;
    cout << "N = ";
    cin >> N;
    cout << Fact2(N) << endl;

    return 0;
}

int PowerA3(float A, float  B) {
    B = pow(A, 3);
    return B;
}
int Sign(float X) {
    if (X < 0) {
        return -1;
    }
    else if (X == 0) {
        return 0;
    }
    else {
        return 1;
    }
}
float RingS(float R1, float R2) {
    float pi = 3.14;
    pi = (pow(R1, 2) + pow(R2, 2)) * pi;
    return pi;
}
int Quarter(float x, float y) {
    string p;
    if ((x > 0) && (y > 0)) {
        return 1;
    }
    else if ((x > 0) && (y < 0)) {
        return 2;
    }
    else if ((x < 0) && (y > 0)) {
        return 3;
    }
    else {
        return 4;
    }

}
float Fact2(int N) {
    float S = 1;
    if (N % 2 == 0) {
        for (int i = 1; i <= N; i = i + 2) {
            S = S * i;
        }
    }
    else {
        for (int i = 2; i <= N; i = i + 2) {
            S = S * i;
        }
    }
}