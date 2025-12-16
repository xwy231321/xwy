#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    vector<int> red_balls;
    set<int> unique_red_balls;
    while (unique_red_balls.size() < 6)
    {
        int random_red = rand() % 33 + 1;
        unique_red_balls.insert(random_red);
    }
    for (auto ball : unique_red_balls)
    {
        red_balls.push_back(ball);
    }
    int blue_ball = rand() % 16 + 1;
    cout << "red:";
    for (size_t i = 0; i < red_balls.size(); ++i)
    {
        cout << red_balls[i] << (i == red_balls.size() - 1 ? "" : " ");
    }
    cout << " blue:" << blue_ball << std::endl;
    return 0;
}
