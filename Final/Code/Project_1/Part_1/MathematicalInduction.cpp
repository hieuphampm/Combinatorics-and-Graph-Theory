#include <iostream>
using namespace std;

int sum_formula(int n) {
    return n * (n + 1) / 2;
}

int sum_loop(int n) {
    int total = 0;
    for (int i = 1; i <= n; ++i)
        total += i;
    return total;
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng 1 + 2 + ... + " << n << " = " << sum_formula(n) << endl;
    cout << "Tổng (lặp) = " << sum_loop(n) << endl;
    return 0;
}