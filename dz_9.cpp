#include<iostream>
#include<format>
using namespace std;
int i=6, n=8, m=4;
int main() {
   do {
    cout << i << ' ' << n << ' ' << m << "|\n";
    i += 1;
    n*= -i;
    m *= 2;
   }
    while (n<m);
    cout << i << ' ' << n << ' ' << m << "|\n";
    return 0;
}