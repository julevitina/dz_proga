#include<iostream>
#include<format>
using namespace std;
int n=1, m=9;
int main() {
   while (n<m) {
    cout << n << ' ' << m << "|\n";
    ++n;
    if (n %5==1) {
        break;
    }
   }
   n=+2;
    cout << n << ' ' << m << "|\n";
    return 0;
}