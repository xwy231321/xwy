#include<bits/stdc++.h>
using namespace std;
class Score{
private:
    string Name;
    string No;
    float Computer;
    float English;
    float Math;
public:
    Score(string name1,string num,float com,float eng,float mat)
    {
        Name = name1;
        No = num;
        Computer = com;
        English = eng;
        Math = mat;
    }
    void show();
};
void Score::show()
{   cout << endl;
    cout << "Name:" << Name << endl;
    cout << "No:" << No << endl;
    cout << "Computer:" << Computer << endl;
    cout << "English:" << English << endl;
    cout << "Math:" << Math << endl;
    //cout << endl;
}
int main()
{
    Score S1("Li Xiaoming","990201",90,80,70);
    Score S2("Zhang Yongsheng","08150202",89,88,87);
    S1.show();
    S2.show();
    return 0;
}