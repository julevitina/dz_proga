#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cout << "Enter x: ";
    cin >> x;

    if (x < 0) {
        cout << "Error: square root of negative number is undefined.\n";
        return 0;
    }

    double eps = 1e-6;
    double y_prev = 1.0;
    double y_next;

    while (true) {
        y_next = 0.5 * (y_prev + x / y_prev);

        if (fabs(y_next - y_prev) < eps)
            break;

        y_prev = y_next;
    }

    cout << "sqrt(x) = " << y_next << endl;

    return 0;
}
