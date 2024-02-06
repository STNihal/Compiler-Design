#include <iostream>
#include <sstream>
using namespace std;

bool isNumericConstant(const string & input) {
    std::stringstream ss(input);
    double value;
    char remaining;
    if (!(ss >> value) || ss.get(remaining)) {
        return false;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter input: ";
    getline(cin,input);

    if (isNumericConstant(input)) {
        cout << "Numeric constant\n";
    } else {
        cout << "Not numeric\n";
    }

    return 0;
}
