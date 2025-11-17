#include <iostream>
using namespace std;

double getNumber() {
    double x;
    cin >> x;

    while (cin.fail() || x < -1000 || x > 1000) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Erorr! Enter number: [-1000;1000]: ";
        cin >> x;
    }
    return x;
}

int main() {
    cout << "Enter number: [-1000;1000]: ";
    double value = getNumber();
    cout << "Value: " << value << endl;
}
