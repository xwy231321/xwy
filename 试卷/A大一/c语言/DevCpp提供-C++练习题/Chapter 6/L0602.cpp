#include <iostream>

using namespace std;

template <typename T>
T sum(T array[], int size = 0) {
    T total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    return total;
}

int int_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double double_array[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

int main() {
    int itotal = sum(int_array, 10);
    double dtotal = sum(double_array, 10);
    cout << "SUM(int) is " << itotal << endl;
    cout << "SUM(double) is " << dtotal << endl;
    return 0;
}