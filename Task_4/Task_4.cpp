#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//УГАДАЙ ЧИСЛО. Разработайте игру: компьютер загадывает число и выдает подсказки ("больше-меньше") пользователю.

int main()
{
    srand(time(0));

    int computer = 0, rangeFrom = 1, rangeTo = 0, number = 0;

    cout << "Enter the range to which number to guess the number (> 1, but < 10000): ";
    cin >> rangeTo;

    if (rangeTo <= 1 or rangeTo > 10000)
    {
        return -1;
    }
    else {}

    computer = rand() % rangeTo + 1;
    cout << computer;
    cout << "Enter a number to guess the computer's number from 1 to " << rangeTo <<": ";
    cin >> number;

    while (true)
    {
        if (number < rangeFrom or number > rangeTo)
        {
            return -1;
        }
        else {}

        if (number == computer)
        {
            cout << "FANTASTIC! The number is guessed!!!" << endl;
            break;
        }
        else if (number < computer)
        {
            cout << "The number of the computer is greater." << endl;

            rangeFrom = number + 1;
        }
        else
        {
            cout << "The number of the computer is less." << endl;

            rangeTo = number - 1;
        }

        cout << "Enter a number to guess the computer's number from " << rangeFrom << " to " << rangeTo << ": ";
        cin >> number;
    }
    
    return 0;
}