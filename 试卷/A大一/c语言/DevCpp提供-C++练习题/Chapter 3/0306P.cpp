#include<bits/stdc++.h>
using namespace std;
class Cuboid {
private:
    float length;
    float width;
    float height;
    float area;
    float volume;

public:
    void set_value(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    void count_area() {
        area = 2 * (length * width + width * height + height * length);
    }

    void count_volume() {
        volume = length * width * height;
    }

    void show() {
        //cout << "area=" << fixed << setprecision(2) << area << ",volume=" << fixed << setprecision(3) << volume << endl;
        cout << "area=" << area << ",volume=" << volume << endl;
    }
};

int main() {
    Cuboid cc;
    float a, b, c;
    cin >> a >> b >> c;
    cc.set_value(a, b, c);
    cc.count_area();
    cc.count_volume();
    cc.show();
    return 0;
}