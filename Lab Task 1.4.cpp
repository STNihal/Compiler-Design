#include<iostream>

using namespace std;

int main() {
    int number, factorial;
    cout << "Enter a number: ";
    cin >> number;
    factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
