#include <iostream>
#include <deque>
#include <iomanip>
using namespace std;
int main() {
    deque<double> nums;
    double num;
    for (int i = 0; i < 6; ++i) {
        cin >> num;
        if (i % 2 == 0) {
            nums.push_back(num);
        } else {
            nums.push_front(num);
        }
    }

    for (int i = 0; i < nums.size(); ++i) {
        cout << "nums[" << i << "]=" << nums[i] << endl;
    }

    return 0;
}