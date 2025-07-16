#include <iostream>
using namespace std;

int count_coin_combinations(int total) {
    int count = 0;
    for (int c = 0; c <= total / 5; ++c) {
        int remain_after_5 = total - 5 * c;
        for (int b = 0; b <= remain_after_5 / 2; ++b) {
            int a = remain_after_5 - 2 * b;
            if (a >= 0) {
                count++;
                cout << "(a=" << a << ", b=" << b << ", c=" << c << ")" << endl;
            }
        }
    }
    return count;
}

int main() {
    int total;
    cout << "Nhập n: ";
    cin >> total;
    int result = count_coin_combinations(total);
    cout << "Tổng số cách chọn đồng xu để được " << total << ": " << result << endl;
    return 0;
}
