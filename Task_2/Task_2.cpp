#include <iostream>

using namespace std;

//ТРЕУГОЛЬНИК. Заданы три числа. 
//Выясните,  какого вида треугольник с такими длинами сторон: равносторонний, прямоугольный, равнобедренный или общего вида.

int main()
{
    double number1 = 0.0, number2 = 0.0, number3 = 0.0;

    cout << "Enter 1 side of the triangle: " << endl;
    cin >> number1;
    cout << "Enter 2 side of the triangle: " << endl;
    cin >> number2;
    cout << "Enter 3 side of the triangle: " << endl;
    cin >> number3;

    if ((number1 <= 0) or (number2 <= 0) or (number3 <= 0)) 
    {
        return -1;
    } else {}

    if ((number1 == number2) and (number2 == number3)) 
    {
        cout << "This triangle is equilateral." << endl;
    } 
    else if (round(pow(number1, 2)) == pow(number2, 2) + pow(number3, 2))
    {
        if (number2 == number3)
        {
            cout << "This triangle is isosceles and rectangular, where 1 side is the hypotenuse." << endl;
        } 
        else
        {
            cout << "This triangle is rectangular, where 1 side is the hypotenuse." << endl;
        }
    }
    else if (round(pow(number2, 2)) == pow(number3, 2) + pow(number1, 2))
    {
        if (number3 == number1)
        {
            cout << "This triangle is isosceles and rectangular, where 2 side is the hypotenuse." << endl;
        }
        else
        {
            cout << "This triangle is rectangular, where 2 side is the hypotenuse." << endl;
        }
    }
    else if (round(pow(number3, 2)) == pow(number1, 2) + pow(number2, 2))
    {
        if (number1 == number2)
        {
            cout << "This triangle is isosceles and rectangular, where 3 side is the hypotenuse." << endl;
        } 
        else 
        {
            cout << "This triangle is rectangular, where 3 side is the hypotenuse." << endl;
        }
    }
    else if ((number1 == number2) or (number2 == number3) or (number1 == number3))
    {
        cout << "This triangle is isosceles, where ";
        if (number1 == number2) 
        {
            cout << "3 side is the hypotenuse." << endl;
        }
        else if (number2 == number3)
        {
            cout << "1 side is the hypotenuse." << endl;
        } 
        else
        {
            cout << "2 side is the hypotenuse." << endl;
        }
    }
    else
    {
        cout << "This triangle is of the general form." << endl;
    }

    return 0;
}