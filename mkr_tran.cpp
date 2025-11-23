#include <iostream>
#include <cmath>
using namespace std;

// === 1 ===
// Функція, що рахує кількість цілих x ∈ [a; b], для яких cos(x) > 0
int countPositiveCos(int a, int b) {
    int cnt = 0;
    for (int x = a; x <= b; x++) {
        if (cos(x) > 0) cnt++;
    }
    return cnt;
}

// === 2 ===
// Сума елементів масиву, які менші за свій індекс
double sumLessThanIndex(double a[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < i) s += a[i];
    }
    return s;
}

// === 3 ===
// Функція, що перевіряє наявність символу '_'
bool containsUnderscore(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '_') return true;
    }
    return false;
}

// === 4 ===
// Заповнити масив значеннями C(n + k, 2k), k = 1..n
// Без вкладених циклів !!!
long long Cnk(int n, int k) {
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void fillArray(long long a[], int n) {
    for (int k = 1; k <= n; k++) {
        int nn = n + k;
        int kk = 2 * k;

        long long r = 1;
        // Обчислюємо C(nn, kk) одним циклом
        for (int i = 1; i <= kk; i++) {
            r = r * (nn - i + 1) / i;
        }

        a[k - 1] = r;
    }
}

// === 5 ===
// Найдовший відрізок, де сусідні числа відрізняються на 3
void longestDiff3(int a[], int n, int &start, int &len) {
    start = 0;
    len = 1;

    int curStart = 0;
    int curLen = 1;

    for (int i = 1; i < n; i++) {
        if (abs(a[i] - a[i - 1]) == 3) {
            curLen++;
        } else {
            curStart = i;
            curLen = 1;
        }

        if (curLen > len) {
            len = curLen;
            start = curStart;
        }
    }
}

////////////////////////////////////////////////////////
// ======================= MAIN =======================
////////////////////////////////////////////////////////

int main() {
    // === Завдання 1 ===
    int a, b;
    cout << "1) Введіть a і b: ";
    cin >> a >> b;
    cout << "Кількість x, де cos(x) > 0: " << countPositiveCos(a, b) << "\n\n";

    // === Завдання 2 ===
    int n;
    cout << "2) Введіть n: ";
    cin >> n;
    double arr2[100];
    cout << "Введіть " << n << " дійсних чисел:\n";
    for (int i = 0; i < n; i++) cin >> arr2[i];
    cout << "Сума елементів, менших за їх індекс: " 
         << sumLessThanIndex(arr2, n) << "\n\n";

    // === Завдання 3 ===
    char s[200];
    cout << "3) Введіть рядок (без пробілів): ";
    cin >> s;
    cout << "Містить '_' ? " << (containsUnderscore(s) ? "так" : "ні") << "\n\n";

    // === Завдання 4 ===
    int m;
    cout << "4) Введіть m: ";
    cin >> m;
    long long arr4[100];
    fillArray(arr4, m);
    cout << "Масив C(n+k, 2k):\n";
    for (int i = 0; i < m; i++) cout << arr4[i] << " ";
    cout << "\n\n";

    // === Завдання 5 ===
    int k;
    cout << "5) Введіть k: ";
    cin >> k;
    int arr5[200];
    cout << "Введіть " << k << " цілих чисел:\n";
    for (int i = 0; i < k; i++) cin >> arr5[i];

    int start, len;
    longestDiff3(arr5, k, start, len);
    cout << "Початок найдовшого відрізка: " << start << "\n";
    cout << "Довжина: " << len << "\n";

    return 0;
}
