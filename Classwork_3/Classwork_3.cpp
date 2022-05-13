#include <iostream>
#include <Windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    enum MONTH { JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULE, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

    int month, season;
    cin >> month >> season;

    if (month < 12 && month>1)
    {
        if (month == 1) cout << "";
        else if (month == 2) cout << "";
        else if (month == 3) cout << "";
        else if (month == 4) cout << "";
        else if (month == 5) cout << "";
        else if (month == 6) cout << "";
        else if (month == 7) cout << "";
        else if (month == 8) cout << "";
        else if (month == 9) cout << "";
        else if (month == 10) cout << "";
        else if (month == 11) cout << "";
        else if (month == 12) cout << "";

    }
    else
        cout << "";

    switch (month)
    {
    case JANUARY:
        cout << "Январь\n";
        break;
    case FEBRUARY:
        cout << "Февраль\n";
        break;
    case MARCH:
        cout << "Март\n";
        break;
    case APRIL:
        cout << "Апрель\n";
        break;
    case MAY:
        cout << "Май\n";
        break;
    case JUNE:
        cout << "Июнь\n";
        break;
    case JULE:
        cout << "Июль\n";
        break;
    case AUGUST:
        cout << "Август\n";
        break;
    case SEPTEMBER:
        cout << "Сентябрь\n";
        break;
    case OCTOBER:
        cout << "Октябрь\n";
        break;
    case NOVEMBER:
        cout << "Ноябрь\n";
        break;
    case DECEMBER:
        cout << "Декабрь\n";
        break;
    default:
        cout << "Нет такого месяца";
        break;
    }
    switch (season)
    {
    case DECEMBER:
    case JANUARY:
    case FEBRUARY:
        cout << "Зима";
        break;
    case MARCH:
    case APRIL:
    case MAY:
        cout << "Весна";
        break;
    case JUNE:
    case JULE:
    case AUGUST:
        cout << "Лето";
        break;
    case SEPTEMBER:
    case OCTOBER:
    case NOVEMBER:
        cout << "Осень";
        break;
    default:
        cout << "Выбран неверный месяц";
        break;

    }
}

