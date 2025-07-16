#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

double simulate_probability(int n_balls, int n_boxes, int simulations = 100000) {
    int count_empty = 0;
    srand(time(0));

    for (int t = 0; t < simulations; ++t) {
        vector<int> boxes(n_boxes, 0);
        for (int i = 0; i < n_balls; ++i) {
            int box = rand() % n_boxes;
            boxes[box]++;
        }
        bool has_empty = false;
        for (int b : boxes) {
            if (b == 0) {
                has_empty = true;
                break;
            }
        }
        if (has_empty)
            count_empty++;
    }

    return static_cast<double>(count_empty) / simulations;
}

int main() {
    int n_balls;
    cout << "Nhập số lượng bóng: ";
    cin >> n_balls;

    int n_boxes;
    cout << "Nhập số lượng hộp: ";
    cin >> n_boxes;

    cout << "Xác suất ít nhất một hộp trống: " << simulate_probability(n_balls, n_boxes) << endl;
    return 0;
}
