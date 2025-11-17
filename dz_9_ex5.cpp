#include <iostream>
using namespace std;

// 5a: y! ≤ x
int maxY_factorial(int x) {
    int y = 1;
    long long fact = 1;

    while (fact * (y + 1) <= x) {
        y++;
        fact *= y;
    }
    return y;
}

// 5b: y ≤ 2^x
long long maxY_power2(int x) {
    return (1LL << x);
}

// 5c: 3^y ≤ x
int maxY_power3(int x) {
    int y = 0;
    long long p = 1;

    while (p * 3 <= x) {
        p *= 3;
        y++;
    }
    return y;
}

int main() {
    int x;
    cout << "Enter x: ";
    cin >> x;

    cout << "maxY| y! <= x: " << maxY_factorial(x) << endl;
    cout << "maxY| y <= 2^x: " << maxY_power2(x) << endl;
    cout << "maxY| 3^y <= x: " << maxY_power3(x) << endl;

    return 0;
}