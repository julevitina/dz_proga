#include<iostream>
using namespace std;
int main() {
    int n=3, m=5;
    cout << --n + ++m << endl;
    cout << n++ + m-- << endl;
    cout << n << " " << m << endl;
    return 0;
}