#include <iostream>
#include <string>
using namespace std;

bool isIdentifier(string s) {
    if (s.empty()) {
        cout << "String is empty" << endl;
        return false;
    }

    char c1 = s[0];
    if (isdigit(c1)) {
        cout << "Identifier cannot start with a number" << endl;
        return false;
    }

    for (char c : s) {
        if (!isalnum(c) && c != '_') {
            cout << "Invalid character '" << c << "' in the identifier" << endl;
            return false;
        }
    }

    if (s == "int" || s == "double" || s == "long" || s == "bool" || s == "float" ||
        s == "short" || s == "string" || s == "if" || s == "else" || s == "asm" ||
        s == "new" || s == "switch" || s == "case" || s == "auto" || s == "operator" ||
        s == "template" || s == "break" || s == "enum" || s == "public" || s == "private" ||
        s == "this" || s == "protected" || s == "for" || s == "do" || s == "while" ||
        s == "static" || s == "try" || s == "catch" || s == "throw" || s == "sizeof" ||
        s == "virtual" || s == "const" || s == "void" || s == "signed" || s == "default" ||
        s == "continue" || s == "goto" || s == "unsigned" || s == "return" || s == "char" ||
        s == "extern" || s == "enum" || s == "struct" || s == "friend" || s == "inline" ||
        s == "volatile" || s == "class" || s == "register" || s == "typedef" || s == "union") {
        cout << "Identifier cannot be a keyword" << endl;
        return false;
    }

    cout << "Valid identifier" << endl;
    return true;
}

int main() {
    for (int i = 0; i < 3; ++i) {
        string s;
        cout << "Enter an identifier: ";
        getline(cin, s);
        isIdentifier(s);
        cout << endl;
    }
    return 0;
}
