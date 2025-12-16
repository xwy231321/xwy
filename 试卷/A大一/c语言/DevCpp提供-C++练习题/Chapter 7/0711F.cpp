#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main() {
    int number;
    cin >> number;
    ofstream outputFile("0711F.dat");
    outputFile << number << " " << hex << number << " " << oct << number << std::endl;
    outputFile.close();
    return 0;
}