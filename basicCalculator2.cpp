#include <iostream>
#include <string>
#include "basicCalculator2.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int value;
    int value2;
    char operation; 
    int result;
    char userAnswer;
    calculator calculator;

    do
    {
        cout << "Enter equation with only two values (Example: 2 + 5): " << endl;
        cin >> value >> operation >> value2;

        switch(operation)
        {
        case '+':
            calculator.addition(value, value2, result);
            break;
        case '-':
            calculator.subtraction(value, value2, result);
            break;
        case '/':
            calculator.division(value, value2, result);
            break;
        case '*':
            calculator.multiplcation(value, value2, result);
            break;
        }

        cout << "\n Would you like to input another equation (Y/N): ";
        cin >> userAnswer;

    } while (userAnswer == 'Y' || userAnswer == 'y');

    return 0;
}

void calculator::addition(int value, int value2, int result)
{
    result = value + value2;
    cout << result;
}

void calculator::subtraction(int value, int value2, int result)
{
    result = value - value2;
    cout << result;
}

void calculator::division(int value, int value2, int result)
{
    if (value2 != 0)
    {
        result = value / value2;
        cout << result; 
    } 
    else
    {
        cout << "Error: Division By Zero" << endl;
    }
}

void calculator::multiplcation(int value, int value2, int result)
{
    result = value * value2;
    cout << result;  
}
