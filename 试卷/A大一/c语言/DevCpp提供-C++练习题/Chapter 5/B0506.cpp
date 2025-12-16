#include<bits/stdc++.h>
using namespace std;
class HArray{
private:
    int a[3];
public:
    HArray(int x,int y,int z){
        a[0] = x;
        a[1] = y;
        a[2] = z;
    }
    int operator[](int i){
        if(i >= 0 && i < 3)
        {
            return a[i] * a[i];
        }
        else return 0;
    }
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    HArray h1(a,b,c);
    int d=h1[0]+h1[2];
    cout<<d<<endl;
    return 0;
} 
