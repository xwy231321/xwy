#include<iostream>
using namespace std;
class Sample{
public:
    Sample(){}
    ~Sample(){cout<<'*';}
};
int main(){
    Sample temp[2],*pTemp[2];
    return 0;
}
