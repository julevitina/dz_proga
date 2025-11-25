#include <iostream>
#include <string>
using namespace std;

bool beginsWithERROR(string s) {
    return s.rfind("ERROR", 0) == 0;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    if (beginsWithERROR(s))
        cout << "String starts with ERROR.\n";
    else
        cout << "String doesn`t start with ERROR.\n";

    return 0;
}
