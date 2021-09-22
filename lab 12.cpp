#include <iostream>
#include <locale.h> // библиотека для подключения русского языка
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // подключение русского языка
    
    cout << endl << "№1" << endl;
    int n;
    int m;
    cout << "number of the day = ";
    cin >> n;
    cout << "number of the month = ";
    cin >> m;
    switch (n) {
    case 1:
        cout << "первое "; break;
    case 2: 
        cout << "второе "; break;
    case 3: 
        cout << "третье "; 
        break;
    case 4: 
        cout << "четвертое "; 
        break;
    case 5: 
        cout << "пятое "; 
        break;
    case 6: 
        cout << "шестое "; 
        break;
    case 7: 
        cout << "седьмое "; 
        break;
    case 8: 
        cout << "восьмое "; 
        break;
    case 9: 
        cout << "девятое "; 
        break;
    case 10: 
        cout << "десятое "; 
        break;
    case 11: 
        cout << "одиннадцатое "; 
        break;
    case 12: 
        cout << "двенадцатое "; 
        break;
    case 13: 
        cout << "тренадцатое "; 
        break;
    case 14: 
        cout << "четырнадцатое "; 
        break;
    case 15: 
        cout << "пятнадцатое "; 
        break;
    case 16: 
        cout << "шеснадцатое "; 
        break;
    case 17: 
        cout << "семнадцатое "; 
        break;
    case 18: 
        cout << "восемнадцатое "; 
        break;
    case 19: 
        cout << "девятнадцатое "; 
        break;
    case 20: 
        cout << "двадцатое "; 
        break;
    case 21: 
        cout << "двадцать первое "; 
        break;
    case 22: 
        cout << "двадцать второе "; 
        break;
    case 23: 
        cout << "двадцать третье "; 
        break;
    case 24: 
        cout << "двадцать четвертое "; 
        break;
    case 25: 
        cout << "двадцать пятое "; 
        break;
    case 26: 
        cout << "двадцать шестое "; 
        break;
    case 27: 
        cout << "двадцать седьмое "; 
        break;
    case 28: 
        cout << "двадцать восьмое "; 
        break;
    case 29: 
        cout << "двадцать девятое "; 
        break;
    case 30: 
        cout << "тридцатое "; 
        break;
    case 31: 
        cout << "тридцать первое "; 
        break;
    }
    switch (m) {
    case 1:
        cout << "января" << endl; 
        break;
    case 2: 
        cout << "февраля" << endl;
        break;
    case 3:
        cout << "марта" << endl; 
        break;
    case 4:
        cout << "апреля" << endl; 
        break;
    case 5:
        cout << "мая" << endl; 
        break;
    case 6:
        cout << "июня" << endl; 
        break;
    case 7:
        cout << "июля" << endl; 
        break;
    case 8: 
        cout << "августа" << endl; 
        break;
    case 9: 
        cout << "сентября" << endl; 
        break;
    case 10: 
        cout << "октября" << endl; 
        break;
    case 11:
        cout << "ноября" << endl; 
        break;
    case 12:
        cout << "декабря" << endl; 
        break;
    }

    cout << endl << "№2" << endl;
    int N, c;
    cout << "command = ";
    cin >> N;
    cout << "direction (Cевер = 1, Восток = 2, Юг = 3, Запад = 4) = "; // как принимать русские строки? есть код для принятия, но он не работает (прикреплю в конце в /**/)
    cin >> c;
    switch (N) {
    case -1:
        c++;
        break;
    case 0:
        break;
    case 1:
        c--;
        break;
    }
    if (c == 5) {
        c = 1;
    }
    if (c == -1) {
        c = 4;
    }
    switch (c) {
    case 1:
        cout << "север" << endl;
        break;
    case 2:
        cout << "восток" << endl;
        break;
    case 3:
        cout << "юг" << endl;
        break;
    case 4: 
        cout << "запад" << endl;
        break;
    }

    cout << endl << "№3" << endl;
    cout << "give me a number = ";
    string a, s;
    string C;
    cin >> N;
    switch (N) {
    case 10:
        C = "десять";
        a = "ых";
        s = "ий";
        break;
    case 11:
        C = "одиннадцать";
        a = "ых";
        s = "ий";
        break;
    case 12:
        C = "двенадцать";
        a = "ых";
        s = "ий";
        break;
    case 13:
        C = "тринадцать";
        a = "ых";
        s = "ий";
        break;
    case 14:
        C = "четырнадцать";
        a = "ых";
        s = "ий";
        break;
    case 15:
        C = "пятнадцать";
        a = "ых";
        s = "ий";
        break;
    case 16:
        C = "шеснадцать";
        a = "ых";
        s = "ий";
        break;
    case 17:
        C = "семнадцать";
        a = "ых";
        s = "ий";
        break;
    case 18:
        C = "восемнадцать";
        a = "ых";
        s = "ий";
        break;
    case 19:
        C = "девятнадцать";
        a = "ых";
        s = "ий";
        break;
    case 20:
        C = "двацать";
        a = "ых";
        s = "ий";
        break;
    case 21:
        C = "двадцать одно";
        a = "ое";
        s = "ие";
        break;
    case 22:
        C = "двадцать два";
        a = "ых";
        s = "ия";
        break;
    case 23:
        C = "двадцать три";
        a = "ых";
        s = "ия";
        break;
    case 24:
        C = "двадцать четыре";
        a = "ых";
        s = "ия";
        break;
    case 25:
        C = "двадцать пять";
        a = "ых";
        s = "ий";
        break;
    case 26:
        C = "двадцать шесть";
        a = "ых";
        s = "ий";
        break;
    case 27:
        C = "двадцать семь";
        a = "ых";
        s = "ий";
        break;
    case 28:
        C = "двадцать восемь";
        a = "ых";
        s = "ий";
        break;
    case 29:
        C = "двадцать девять";
        a = "ых";
        s = "ий";
        break;
    case 30:
        C = "тридцать";
        a = "ых";
        s = "ий";
        break;
    case 31:
        C = "тридцать одно";
        a = "ое";
        s = "ие";
        break;
    case 32:
        C = "трицать два";
        a = "ых";
        s = "ия";
        break;
    case 33:
        C = "тридцать три";
        a = "ых";
        s = "ия";
        break;
    case 34:
        C = "тридцать четыре";
        a = "ых";
        s = "ия";
        break;
    case 35:
        C = "тридцать пять";
        a = "ых";
        s = "ий";
        break;
    case 36:
        C = "тридцать шесть";
        a = "ых";
        s = "ий";
        break;
    case 37:
        C = "тридцать семь";
        a = "ых";
        s = "ий";
        break;
    case 38:
        C = "тридцать восемь";
        a = "ых";
        s = "ий";
        break;
    case 39:
        C = "тридцать девять";
        a = "ых";
        s = "ий";
        break;
    case 40:
        C = "сорок";
        a = "ых";
        s = "ий";
        break;
    }
    cout << C << " учебн" << a << " задан" << s << endl;

    cout << endl << "№4" << endl;
    cout << "give me a number = ";
    cin >> N;
    int q, w, e;
    q = N / 100;
    N = N % 100;
    w = N / 10;
    e = N % 10;
    switch (q) {
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "пятьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "девятьсот ";
        break;
    }
    if (w == 1) {
        switch (e) {
        case 0:
            cout << "десять";
            break;
        case 1:
            cout << "одиннадцать";
            break;
        case 2:
            cout << "двенадцать";
            break;
        case 3:
            cout << "тринадцать";
            break;
        case 4:
            cout << "четырнацать";
            break;
        case 5:
            cout << "пятнадцать";
            break;
        case 6:
            cout << "шеснадцать";
            break;
        case 7:
            cout << "семнадцать";
            break;
        case 8:
            cout << "восемнацать";
            break;
        case 9:
            cout << "девятнадцать";
            break;
        }
    }
    else {
        switch (w) {
        case 0:
            cout << "";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяносто ";
            break;
        }
    }
    if (w != 1) {
        switch (e) {
        case 0:
            cout << "";
            break;
        case 1:
            cout << "один";
            break;
        case 2:
            cout << "два";
            break;
        case 3:
            cout << "три";
            break;
        case 4:
            cout << "четыре";
            break;
        case 5:
            cout << "пять";
            break;
        case 6:
            cout << "шесть";
            break;
        case 7:
            cout << "семь";
            break;
        case 8:
            cout << "восемь";
            break;
        case 9:
            cout << "девять";
            break;
        }
    }
    cout << "" << endl;

    cout << endl << "№5" << endl;
    cout << "give me number of the year = ";
    cin >> N;
    cout << "год ";
    if (N >= 1984) {
        n = N - 1984;
        while (n >= 60) {
            n = n - 60;
        }
        if ((n >= 0 * 12) && (n < 1 * 12)) {
            cout << "зелен";
            switch (n) {
            case 0:
                cout << "ой крысы";
                break;
            case 1:
                cout << "ой коровы";
                break;
            case 2:
                cout << "ого тигра";
                break;
            case 3:
                cout << "ого зайца";
                break;
            case 4:
                cout << "ого дракона";
                break;
            case 5:
                cout << "ой змеи";
                break;
            case 6:
                cout << "ой лошади";
                break;
            case 7:
                cout << "ой овцы";
                break;
            case 8:
                cout << "ой обезьяны";
                break;
            case 9:
                cout << "ой курицы";
                break;
            case 10:
                cout << "ой собаки";
                break;
            case 11:
                cout << "ой свиньи";
                break;
            }
        }
        else if ((n >= 1 * 12) && (n < 2 * 12)) {
            cout << "красн";
            while (n >= 12) {
                n = n - 12;
            }
            switch (n) {
            case 0:
                cout << "ой крысы";
                break;
            case 1:
                cout << "ой коровы";
                break;
            case 2:
                cout << "ого тигра";
                break;
            case 3:
                cout << "ого зайца";
                break;
            case 4:
                cout << "ого дракона";
                break;
            case 5:
                cout << "ой змеи";
                break;
            case 6:
                cout << "ой лошади";
                break;
            case 7:
                cout << "ой овцы";
                break;
            case 8:
                cout << "ой обезьяны";
                break;
            case 9:
                cout << "ой курицы";
                break;
            case 10:
                cout << "ой собаки";
                break;
            case 11:
                cout << "ой свиньи";
                break;
            }
        }
        else if ((n >= 2 * 12) && (n < 3 * 12)) {
            cout << "желт";
            while (n >= 12) {
                n = n - 12;
            }
            switch (n) {
            case 0:
                cout << "ой крысы";
                break;
            case 1:
                cout << "ой коровы";
                break;
            case 2:
                cout << "ого тигра";
                break;
            case 3:
                cout << "ого зайца";
                break;
            case 4:
                cout << "ого дракона";
                break;
            case 5:
                cout << "ой змеи";
                break;
            case 6:
                cout << "ой лошади";
                break;
            case 7:
                cout << "ой овцы";
                break;
            case 8:
                cout << "ой обезьяны";
                break;
            case 9:
                cout << "ой курицы";
                break;
            case 10:
                cout << "ой собаки";
                break;
            case 11:
                cout << "ой свиньи";
                break;
            }
        }
        else if ((n >= 3 * 12) && (n < 4 * 12)) {
        cout << "бел";
            while (n >= 12) {
                n = n - 12;
            }
            switch (n) {
            case 0:
                cout << "ой крысы";
                break;
            case 1:
                cout << "ой коровы";
                break;
            case 2:
                cout << "ого тигра";
                break;
            case 3:
                cout << "ого зайца";
                break;
            case 4:
                cout << "ого дракона";
                break;
            case 5:
                cout << "ой змеи";
                break;
            case 6:
                cout << "ой лошади";
                break;
            case 7:
                cout << "ой овцы";
                break;
            case 8:
                cout << "ой обезьяны";
                break;
            case 9:
                cout << "ой курицы";
                break;
            case 10:
                cout << "ой собаки";
                break;
            case 11:
                cout << "ой свиньи";
                break;
            }
        }
        else{
        cout << "черн";
            while (n >= 12) {
                n = n - 12;
            }
            switch (n) {
            case 0:
                cout << "ой крысы";
                break;
            case 1:
                cout << "ой коровы";
                break;
            case 2:
                cout << "ого тигра";
                break;
            case 3:
                cout << "ого зайца";
                break;
            case 4:
                cout << "ого дракона";
                break;
            case 5:
                cout << "ой змеи";
                break;
            case 6:
                cout << "ой лошади";
                break;
            case 7:
                cout << "ой овцы";
                break;
            case 8:
                cout << "ой обезьяны";
                break;
            case 9:
                cout << "ой курицы";
                break;
            case 10:
                cout << "ой собаки";
                break;
            case 11:
                cout << "ой свиньи";
                break;
            }
        }
    }
    else if (N < 1984) {
    n = 1984 - N;
    while (n >= 60) {
        n = n - 60;
    }
    n = 60 - n;
    if ((n >= 0 * 12) && (n < 1 * 12)) {
        cout << "зелен";
    }
    else if ((n >= 1 * 12) && (n < 2 * 12)) {
        cout << "красн";
    }
    else if ((n >= 2 * 12) && (n < 3 * 12)) {
        cout << "желт";
    }
    else if ((n >= 3 * 12) && (n < 4 * 12)) {
    cout << "бел";
    }
    else {
        cout << "черн";
    }
    while (n >= 12) {
        n = n - 12;
    }
    switch (n) {
    case 0:
        cout << "ой крысы";
        break;
    case 1:
        cout << "ой коровы";
        break;
    case 2:
        cout << "ого тигра";
        break;
    case 3:
        cout << "ого зайца";
        break;
    case 4:
        cout << "ого дракона";
        break;
    case 5:
        cout << "ой змеи";
        break;
    case 6:
        cout << "ой лошади";
        break;
    case 7:
        cout << "ой овцы";
        break;
    case 8:
        cout << "ой обезьяны";
        break;
    case 9:
        cout << "ой курицы";
        break;
    case 10:
        cout << "ой собаки";
        break;
    case 11:
        cout << "ой свиньи";
        break;
    }
}

    return 0;
}

/*
cout << endl << "№2" << endl;
    int N, t;
    char c;
    cout << "command = ";
    cin >> N;
    cout << "direction (Cевер = с, Восток = в, Юг = ю, Запад = з) = ";
    cin >> c;
    if (c == 'c') {
        t = 1;
    }
    else if (c == 'в') {
        t = 2;
    }
    else if (c == 'ю') {
        t = 3;
    }
    else if (c == 'з') {
        t = 4;
    }
    switch (N) {
    case -1:
        t++;
        break;
    case 0:
        break;
    case 1:
        t--;
        break;
    }
    if (t == 5) {
        t = 1;
    }
    if (t == -1) {
        t = 4;
    }
    switch (t) {
    case 1:
        cout << "север" << endl;
        break;
    case 2:
        cout << "восток" << endl;
        break;
    case 3:
        cout << "юг" << endl;
        break;
    case 4: 
        cout << "запад" << endl;
        break;
    }
*/
