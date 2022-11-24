#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string operation;
    long double result;
    cout << "Calculator by CIP_" << endl;
    cout << "Available operations: + - / * ^ ! sqrt cos sin tan(tg) ctan(cotan)" << endl;
    cout << "Enter operation: ";
    cin >> operation;

    if (operation == "+" || operation == "plus")
    {
        long double summand1;
        long double summand2;

        cout << "Enter number 1: ";
        cin >> summand1;

        cout << "Enter number 2: ";
        cin >> summand2;

        result = summand1 + summand2;
        cout << result;
    } else if (operation == "-" || operation == "minus")
    {
        long double min1;
        long double min2;

        cout << "Enter number 1(minuend): ";
        cin >> min1;

        cout << "enter number 2(subtrahend): ";
        cin >> min2;
        
        result = min1 - min2;
        cout << result;
    } else if (operation == "/" || operation == "divide")
    {
        long double div1;
        long double div2;

        cout << "Enter number 1(dividend): ";
        cin >> div1;

        cout << "Enter number 2(divisor): ";
        cin >> div2;

        result = div1 / div2;
        cout << result;
    } else if (operation == "*" || operation == "multiply")
    {
        long double multiplier1;
        long double multiplier2;

        cout << "Enter number 1: ";
        cin >> multiplier1;

        cout << "Enter number 2: ";
        cin >> multiplier2;

        result = multiplier1 * multiplier2;
        cout << result;
    } else if (operation == "^" || operation == "**" || operation == "power")
    {
        long double num1;
        long double num2;

        cout << "Enter number 1: ";
        cin >> num1;

        cout << "Enter number 2: ";
        cin >> num2;

        result = pow(num1, num2);
        cout << result;
    } else if (operation == "!" || operation == "factorial")
    {
        int num;
        long double fac = 1.0;

        cout << "Enter POSITIVE number: ";
        cin >> num;
        if (num < 0)
        {
            cerr << "[ERROR]: Please enter POSITIVE number." << endl;
			return 1;
        } else
        {
            for (int i = 1; i <= num; ++i)
            {
                fac *= i;
            }

            cout << fac;
        }
        
    } else if (operation == "sqrt" || operation == "root" || operation == "square root")
    {
        int num;

        cout << "Enter POSITIVE WHOLE number: ";
        cin >> num;
        if (num < 0)
        {
            cerr << "[ERROR]: Please enter POSITIVE number." << endl;
			return 1;
        } else
        {
            result = sqrt(num);

            cout << result;
        }

    } else if (operation == "cos" || operation == "cosine")
    {
    long double num;

    cout << "Enter number: ";
    cin >> num;

    result = cos(num);
    cout << result;
    } else if (operation == "sin" || operation == "sine")
    {
        long double num;

        cout << "Enter number: ";
        cin >> num;

        result = sin(num);
        cout << result;
    } else if (operation == "tan" || operation == "tg" || operation == "tangens" || operation == "tangent")
    {
        long double num;

        cout << "Enter number: ";
        cin >> num;

        result = tan(num);
        cout << result;
    } else if (operation == "cotan" || operation == "ctan" || operation == "cotangens" || operation == "cotangent")
    {
        long double num;

        cout << "Enter number: ";
        cin >> num;

        result = cos(num) / sin(num);
        cout << result;
    } else
    {
        cerr << "[ERROR]: Please enter valid operation!" << endl;
        return 1;
    }


    cout << endl;
    return 0;
}

