// lab 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    
    cout << "№1" << endl;
    float a;
    float b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "S = " << S << ", P = " << P << endl;

    cout << endl << "№2" << endl;
    float π = 3.14;
    cout << "d =";
    float d;
    cin >> d;
    float L = π * d;
    cout << "L = " << L << endl;

    cout << endl << "№3" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "average = " << (a + b) / 2 << endl;

    cout << endl << "№4" << endl << "give me first number: "; 
    cin >> a;
    cout << "give me second number: ";
    cin >> b;
    cout << "sum = " << (sqrt(a) + sqrt(b)) << ", difference = " << abs(sqrt(a) - sqrt(b)) << ", multiplication = " << (pow(a, 2) * pow(b, 2)) << ", private = " << (pow(a, 2) / pow(b, 2)) << endl;

    cout << endl << "№4" << endl << "give me first number: ";
    cin >> a;
    cout << "give me second number: ";
    cin >> b;
    a = abs(a);
    if (b < 0) {
        b *= -1;
    }
    cout << "sum = " << (a + b) << ", difference = " << abs(a - b) << ", multiplication = " << (a * b) << ", private = " << (a / b) << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
