#include<bits/stdc++.h>
using namespace std;
void input(string str[], int n) {
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
}
void sort(string str[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (str[i] > str[j]) { 
                string temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void output(string str[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << str[i] << endl;
    }
}

int main() {
    string str[5];
    int n = 5;

    input(str, n);
    sort(str, n);

    cout << "After sorting:" << endl;
    output(str, n);

    return 0;
}