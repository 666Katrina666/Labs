#include <iostream>
using namespace std;

int main()
{
    cout << "№1" << endl;
    float x1, x2;
    float y1, y2;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "distance = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << endl;

    cout << "№2" << endl;
    float x3, AC, BC;
    cout << "A: x1 = ";
    cin >> x1;
    cout << "B: x2 = ";
    cin >> x2;
    cout << "C: x3 = ";
    cin >> x3;
    AC = abs(x1 - x3);
    BC = abs(x2 - x3);
    cout << "AC = " << AC << ", BC = " << BC << ", AC + BC = " << AC + BC << endl;

    cout << "№3" << endl;
    cout << "A: x1 = ";
    cin >> x1;
    cout << "B: x2 = ";
    cin >> x2;
    cout << "C: x3 = ";
    cin >> x3;
    AC = abs(x1 - x3);
    BC = abs(x2 - x3);
    cout << "AC * BC = " << AC * BC << endl;

    cout << "№4" << endl;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = " << endl;
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "perimeter = " << 2 * (abs(x1 - x2) + abs(y1 - y2)) << ", square = " << abs(x1 - x2) * abs(y1 + y2) << endl;

    cout << "№5" << endl;
    float y3;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;
    cout << "perimeter = " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) + sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)) + sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    cout << ", square = " << 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) << endl;

    return 0;
}