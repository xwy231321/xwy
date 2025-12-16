#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    map<int,string> days;
    days[1] = "Monday";
    days[2] = "Tuesday";
    days[3] = "Wednesday";
    days[4] = "Thursday";
    days[5] = "Friday";
    days[6] = "Saturday";
    days[7] = "Sunday";

    int day_number;
    cin >> day_number;

    if (days.count(day_number)) {
        cout << days[day_number] << endl;
    } else {
        cout << "Error!" << endl;
    }

    return 0;
}