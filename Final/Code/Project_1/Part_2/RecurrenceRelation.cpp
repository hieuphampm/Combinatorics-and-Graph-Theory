#include <iostream>
#include <vector>
using namespace std;

int recurrence(int n) {
    vector<int> a(n + 1);
    a[1] = 1;
    for (int i = 2; i <= n; ++i)
        a[i] = a[i - 1] + 2 * i - 1;
    return a[n];
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    cout << "a_" << n << " theo truy hồi = " << recurrence(n) << endl;
    cout << "Giá trị kỳ vọng (n^2) = " << n * n << endl;

    return 0;
}
