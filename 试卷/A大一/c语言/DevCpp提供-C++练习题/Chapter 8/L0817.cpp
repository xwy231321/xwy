#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        pq.push(num);
    }
    cout << "Priority_queue..." << endl;
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
    return 0;
}