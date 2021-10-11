#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    ifstream a("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.1_file.txt", ios::in);
    //ofstream b("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25_file.txt", ios::out);
    string d, h, g, v;
    if (!a.is_open())
        cout << "Файл не может быть открыт!" << endl << endl;
    else
    {
        a >> d;
        d.clear();
        while (!a.eof()) {
            a >> d;
            h = h + d + " ";
        }
        ofstream b("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.1_file.txt", ios::out);
        b << h;
        b.close();
        a.close();
    }

    ofstream A("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.2_file.txt", ios::out);
    int N, K;
    cout << "N = ";
    cin >> N;
    cout << "K = ";
    cin >> K;
    if (!A.is_open())
        cout << "Файл не может быть открыт!" << endl << endl;
    else {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < K; j++) {
                A << "*";
            }
            A << "\n";
        }
        A.close();
    }
    cout << endl;

    ifstream c("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.3.2_file.txt", ios::in);
    ifstream C("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.3.1_file.txt", ios::in);
    h.clear();
    d.clear();
    if (!c.is_open())
        cout << "Файл не может быть открыт!" << endl << endl;
    else {
        while (!c.eof()) {
            c >> d;
            h = h + d + " ";
        }
        while (!C.eof()) {
            C >> g;
            v = v + g + " ";
        }
        ofstream B("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.3.1_file.txt", ios::out);
        B << h << "\n" << v;
        c.close();
        C.close();
        B.close();
    }

    ifstream z("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.4_file.txt", ios::in);
    h.clear();
    d.clear();
    if (!z.is_open())
        cout << "Файл не может быть открыт!" << endl << endl;
    else {
        while (!z.eof()) {
            z >> d;
            h = h + d + " ";
        }
        ofstream Z("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.4_file.txt", ios::out);
        Z << h;
        z.close();
        Z.close();
    }
    
    ifstream x("C:\\Users\\Home\\source\\repos\\Labs\\lab 25\\25.5_file.txt", ios::in);
    char l;
    string m;
    int k = 0, n = 0;
    if (!x.is_open())
        cout << "Файл не может быть открыт!" << endl << endl;
    else {
        while (!x.eof()) {
            getline(x, m);
            for (int i = 0; i < 5; i++) {
                l = m[i];
                if (l == ' ') {
                    k++;
                }
                else {
                    k = 0;
                    break;
                }
            }
            if (k == 5) {
                n++;
            }
            else {
                k = 0;
            }
        }
        x.close();
    }
    cout << n << endl;

    return 0;
}