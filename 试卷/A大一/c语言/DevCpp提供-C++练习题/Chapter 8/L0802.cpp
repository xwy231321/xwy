#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> Food;
    vector<string>::iterator FoodIterator;

    Food.insert(Food.end(), "---food list---");
    Food.insert(Food.end(), "    milk");
    Food.insert(Food.end(), "    bluemerry");
    Food.insert(Food.end(), "    banana");
    Food.insert(Food.end(), "    avocado");
    Food.insert(Food.end(), "--------------");

    for (FoodIterator = Food.begin(); FoodIterator != Food.end(); ++FoodIterator) {
        cout << *FoodIterator << endl;
    }

    return 0;
}