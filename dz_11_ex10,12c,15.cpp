#include <iostream>
using namespace std;

void read_array(int a[], int &n) { //function to read array
    n = 8;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void print_array(int a[], int n) { //function to print array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void shiftRight(int a[], int n) { //  Task 10: Shift right
    if (n <= 1) return;
    int last = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;
}

int removeAllX(int a[], int n, int x) { // Task 12c: Remove all occurrences of x
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != x) {
            a[j++] = a[i];
        }
    }
    return j;
}

void task15(int a[], int &n, int x) { // Task 15: Insert 42 after each occurrence of x
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (n >= 10) return;
            for (int j = n; j > i + 1; j--) a[j] = a[j - 1];
            a[i + 1] = 42;
            n++;
            i++; 
        }
    }
}

int main() {
    int n, a[10];

    cout << "Enter 8 numbers (3 of them should be 42):" << endl;
    read_array(a, n);

    cout << "Original array:" << endl;
    print_array(a, n);

    // 2. Task 10
    shiftRight(a, n);
    cout << "After Task 10 (shift right):" << endl;
    print_array(a, n);

    // Task 12c — remove all 42
    n = removeAllX(a, n, 42);
    cout << "After Task 12c (remove all 42):" << endl;
    print_array(a, n);

    // Task 15 — insert 42 after each occurrence of 3
    task15(a, n, 3);               
    cout << "After Task 15 (insert 42 after each 3):" << endl;
    print_array(a, n);      

    return 0;
}
