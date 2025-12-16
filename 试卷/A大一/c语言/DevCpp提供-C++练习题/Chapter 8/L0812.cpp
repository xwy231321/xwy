#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    int numberOfStudents;

    cout << "Number of students:";
    cin >> numberOfStudents;

    list<int> Scores;

    cout << "Please input the scores:" << endl;
    for (int i = 0; i < numberOfStudents; ++i) {
        int score;
        cin >> score;
        Scores.push_back(score);
    }

    int NumberOf100Scores = count(Scores.begin(), Scores.end(), 100);

    cout << "Number of 100 is " << NumberOf100Scores << endl;

    return 0;
}