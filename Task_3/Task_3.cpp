#include <iostream>

using namespace std;

//ЦИФРА. Распечатайте первую цифру из дробной части вещественного положительного числа.

int main()
{
    double number = 0.0;
    int digit = 0;

    cout << "Enter a real number: ";
    cin >> number;

    if (number < 0)
    {
        return -1;
    } 
    else {}

    digit = (number * 10);

    cout << "The first digit of the fractional part of a real positive number is " << digit % 10 << endl;

    return 0;
}
