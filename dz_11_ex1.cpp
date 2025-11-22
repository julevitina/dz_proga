#include <iostream>
using namespace std;

void fillArrayTriangle(int arr[], int n) {
    arr[0] = 1;
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] + 2;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[1000];  // масив для значень

    fillArrayTriangle(arr, n); // <<< Ось виклик першої функції

    cout << "Array values:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
