#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {
    long long n;
    cin >> n;

    if (n == 1) { cout << 3; return 0; }
    if (n == 2) { cout << 7; return 0; }
    if (n == 3) { cout << -2; return 0; }
    if (n == 4) { cout << 9; return 0; }

    long long r1 = 3;   
    long long r2 = 7;   
    long long r3 = -2;   
    long long r4 = 9;    

    for (long long i = 5; i <= n; i++) {
        long long nextR = ( (r4 * r1) % MOD - (2LL * r3 % MOD) * r2 % MOD ) % MOD;

        if (nextR < 0) nextR += MOD;

        r1 = r2;
        r2 = r3;
        r3 = r4;
        r4 = nextR;
    }

    cout << r4;
    return 0;
}
