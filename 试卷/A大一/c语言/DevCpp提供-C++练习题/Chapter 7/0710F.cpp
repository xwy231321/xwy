#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    ofstream outFile("0710F.dat");
    outFile << input;
    outFile.close();
    return 0;
}