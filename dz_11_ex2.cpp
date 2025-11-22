#include <iostream>
using namespace std;

void fillBinomialRow(long long arr[], int n) {
    arr[0] = 1;
    for (int k = 1; k <= n; k++) {
        arr[k] = arr[k - 1] * (n - k + 1) / k;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long arr[1000];

    fillBinomialRow(arr, n); 

    cout << "C(n,k) row:\n";
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
