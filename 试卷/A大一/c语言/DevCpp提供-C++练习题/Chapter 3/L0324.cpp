#include<bits/stdc++.h>
using namespace std;
class Myclass{
public:
    void set(int i, int j) 
    {
        a = i;
        b = j;
    }

    void show()
    {
        cout << a << " " << b << endl;
    }
private:
    int a, b;
};

int main() {
    Myclass o1, o2;
    int a,b;
    cin >> a >> b;
    o1.set(a, b);
    o2 = o1;
    o1.show();
    o2.show();
    return 0;
}