#include <iostream>
using namespace std;

int main()
{
    string uInput;


    cout << "Enter an expression: ";
    cin>>uInput;


    cout << "Operators in the expression: ";
    for (char a : uInput)
    {
        if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%' || a == '=')
        {
            cout << a << " ";
        }

    }


    cout << endl;

    return 0;
}


