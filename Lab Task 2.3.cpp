#include <iostream>
using namespace std;

int main()
{
    string uInput;


    cout << "Enter a line: ";
    cin>>uInput;


    if (uInput.find("//") == 0)
    {
        cout << "Single line comment" << endl;
    }

    else if (uInput.find("/*") == 0 && uInput.find("*/"))
    {
        cout << "Multi line comment" << endl;
    }

    else
    {
        cout << "This is Not a comment" << endl;
    }

    return 0;
}


