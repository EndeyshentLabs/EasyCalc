#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string operation;
    long double result;
    cout << "Calculator by CIP_ \nAvailable operations: + - / * ^ ! s(for squarr root) cos sin tan" << endl;
    cout << "Enter operation: ";
    cin >> operation;

    if (operation == "+")
    {
        long double summand1;
        long double summand2;

        cout << "Enter number 1: ";
        cin >> summand1;

        cout << "Enter number 2: ";
        cin >> summand2;

        result = summand1 + summand2;
        cout << result;
    } else if (operation == "-")
    {
        long double min1;
        long double min2;

        cout << "Enter number 1(minuend): ";
        cin >> min1;

        cout << "enter number 2(subtrahend): ";
        cin >> min2;
        
        result = min1 - min2;
        cout << result;
    } else if (operation == "/")
    {
        long double div1;
        long double div2;

        cout << "Enter number 1(dividend): ";
        cin >> div1;

        cout << "Enter number 2(divisor): ";
        cin >> div2;

        result = div1 / div2;
        cout << result;
    } else if (operation == "*")
    {
        long double multiplier1;
        long double multiplier2;

        cout << "Enter number 1: ";
        cin >> multiplier1;

        cout << "Enter number 2: ";
        cin >> multiplier2;

        result = multiplier1 * multiplier2;
        cout << result;
    } else if (operation == "^")
    {
        long double num1;
        long double num2;

        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        result = pow(num1, num2);
        cout << result;
    } else if (operation == "!")
    {
        int num;
        long double fac = 1.0;

        cout << "Enter POSITIVE number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "ERROR! Please enter POSITIVE number." << endl;
        } else
        {
            for (int i = 1; i <= num; ++i)
            {
                fac *= i;
            }

            cout << fac;
        }
        
    } else if (operation == "s")
    {
        int num;

        cout << "Enter POSITIVE WHOLE number: ";
        cin >> num;
        if (num < 0)
        {
            cout << "ERROR! Please enter POSITIVE number." << endl;
        } else
        {
            result = sqrt(num);

            cout << result;
        }

    } else if (operation == "cos")
    {
    long double num;

    cout << "Enter number: ";
    cin >> num;

    result = cos(num);
    cout << result;
    } else if (operation == "sin")
    {
        long double num;

        cout << "Enter number: ";
        cin >> num;

        result = sin(num);
        cout << result;
    } else if (operation == "tan")
    {
        long double num;

        cout << "Enter number: ";
        cin >> num;

        result = tan(num);
        cout << result;
    }


    cout << endl;
    return 0;
}

