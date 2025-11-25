#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decode(string s) {
    string result = "";
    string word = "";

    for (char c : s) {
        if (c != ' ') {
            word += c;
        } else {
            reverse(word.begin(), word.end());
            result += word + " ";
            word.clear();
        }
    }

    // final word
    reverse(word.begin(), word.end());
    result += word;

    return result;
}

int main() {
    string s;
    cout << "Enter the encoded message:\n";
    getline(cin, s);

    cout << "Decoded message:\n";
    cout << decode(s) << endl;

    return 0;
}

