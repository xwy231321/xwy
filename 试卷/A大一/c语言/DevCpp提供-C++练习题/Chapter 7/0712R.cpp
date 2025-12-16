#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("0712R.txt");
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }
    inputFile.close();
    return 0;
}