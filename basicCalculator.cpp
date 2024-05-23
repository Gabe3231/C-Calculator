#include <iostream>

using namespace std;

void addition(int value, int value2, int result);
void subtraction(int value, int value2, int result);
void division(int value, int value2, int result);
void multiplcation(int value, int value2, int result);

int main()
{
    int value;
    int value2;
    char operation; 
    int result;

    cout << "Enter value one: " << endl;
    cin >> value;

    cout << "Enter value two: " << endl;
    cin >> value2;

    cout << "Select Operation +, -, /, *" << endl;
    cin >> operation;

    if (operation == '+')
    {
        addition(value, value2, result);
    }
    else if (operation == '-')
    {
        subtraction(value, value2, result);
    }
    else if (operation == '/')
    {
        division(value, value2, result);
    }
    else if (operation == '*')
    {
        multiplcation(value, value2, result);
    }
    
    return 0;
}

void addition(int value, int value2, int result)
{
    result = value + value2;
    cout << result;
}

void subtraction(int value, int value2, int result)
{
    result = value - value2;
    cout << result;
}

void division(int value, int value2, int result)
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

void multiplcation(int value, int value2, int result)
{
    result = value * value2;
    cout << result;  
}
