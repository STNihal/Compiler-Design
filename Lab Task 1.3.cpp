#include <iostream>
using namespace std;

int main()
{
    string FirstName, LastName, result;

    cout << "Enter string FirstName: ";
    getline (cin, FirstName);

    cout << "Enter string LastName: ";
    getline (cin, LastName);

    result = FirstName + " " +LastName ;

    cout << "Final String = "<< result;

    return 0;
}
