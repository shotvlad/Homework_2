#include <iostream>

using namespace std;

//НОК.Найдите наименьшее общее кратное двух натуральных чисел.

int main()
{
    int number1 = 0, number2 = 0, NOK = 1;

    cout << "Enter 1 number: " << endl;
    cin >> number1;
    cout << "Enter 2 number: " << endl;
    cin >> number2;

    if ((number1 <= 0) or (number2 <= 0))
    {
        return -1;
    } else {}

    while (true)
    {
        if ((NOK % number1 == 0) and (NOK % number2 == 0))
        {
            cout << "NOK numbers: " << NOK << endl;
            break;
        }
        else {}

        NOK++;
    }

    return 0;
}
