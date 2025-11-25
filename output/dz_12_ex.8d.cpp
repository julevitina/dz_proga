#include <iostream>
#include <string>
using namespace std;

int lastLongestWordPos(string s) {
    int bestLen = 0, bestPos = -1;
    int curLen = 0, curPos = 0;

    s += " "; // add sentinel to handle last word

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != ' ' && s[i] != '\t') {
            if (curLen == 0) curPos = i; 
            curLen++;
        } else {
            if (curLen >= bestLen) {
                bestLen = curLen;
                bestPos = curPos;
            }
            curLen = 0;
        }
    }
    return bestPos;
}

int main() {
    string s;
    cout << "Enter string : ";
    getline(cin, s);

    int pos = lastLongestWordPos(s);
    cout << "Position of the last longest word: " << pos << endl;

    return 0;
}
