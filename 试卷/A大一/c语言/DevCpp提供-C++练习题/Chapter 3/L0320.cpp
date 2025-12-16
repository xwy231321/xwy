#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "ABC";
    string s2 = "DEF";
    string s3("GHI");
    string s4 = s1;;
    string s5;
    cout << "s4 is " << s4 << endl;
    s5 = s1 + s2;
    cout << "s1+s2 is " << s5 << endl;
    s5 = s1 + "ABC";
    cout << "s1+\"123\" is " << s1 + "123" << endl;
    if(s3 > s1)
    {
        cout << "s3>s1" << endl;
    }
    else cout << "s3<s1" << endl;
    if(s4 == s1)
    {
        cout << "s4==s1" << endl;
    }
    else cout << "s4<>s1" << endl;
    cin >> s5;
    cout << "s5 is " << s5 << endl;
    return 0;
}