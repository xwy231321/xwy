#include <bits/stdc++.h>
using namespace std;
template<typename T>
void input(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

template <typename T>
void sort(T arr[], int size) {
    
    sort(arr, arr + size, greater<T>());
}

template <typename T>
void output(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << setw(10) << arr[i];
    }
    cout << endl;
}

int main() {
    int a[5];
    float b[5];
    input<int>(a, 5);
    sort(a, 5);
    output<int>(a, 5);
    input<float>(b, 5);
    sort(b, 5);
    output<float>(b, 5);
    return 0;
}