#include <iostream>
#include <cmath>
using namespace std;

int count_arrangements(int n_balls, int n_boxes) {
    return pow(n_boxes, n_balls);
}

int main() {
    int n_balls;
    cout << "Nhập số lượng bóng: ";
    cin >> n_balls;

    int n_boxes;
    cout << "Nhập số lượng hộp: ";
    cin >> n_boxes;
    
    cout << "Tổng số cách đặt: " << count_arrangements(n_balls, n_boxes) << endl;
    return 0;
}