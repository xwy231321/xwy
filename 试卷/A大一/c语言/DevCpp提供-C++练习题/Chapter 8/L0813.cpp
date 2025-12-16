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
    //cout << "Number of 100 is " << NumberOf100Scores << endl;

    int NumberOfPass = 0;
    for (int score : Scores) {
        if (score >= 60) {
            NumberOfPass++;
        }
    }

    cout << "Number of pass is " << NumberOfPass << endl;

    return 0;
}