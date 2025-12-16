#include <iostream>
using namespace std;
class Tr {
public:
    Tr(int n):i(n){}

    void set_i(int n)
    { 
        i = n;
    }
    int get_i()
    { 
        return i; 
    }

private:
    int i;
};

void sqr_it(Tr* ob)
{
    ob->set_i(ob->get_i() * ob->get_i());
    cout << "In sqr_it, the value of i in the formal perameter object ob is:" << ob->get_i() << endl;
}
int main()
{
    Tr obj(10);
    cout << "Before running sqr_it,the value of i in the actual perameter object obj is:";
    cout << obj.get_i() << endl;

    sqr_it(&obj);
    cout << "After running sqr_it,the value of i in the actual perameter object obj is:";
    cout << obj.get_i() << endl;
    return 0;
}