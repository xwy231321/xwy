#include<iostream>
using namespace std;
class Small_cat{
    public:
        Small_cat(double w);
        void display();
        static void total_disp();
    private:
        double weight;
        static double total_weight;
        static double total_number;
};
Small_cat::Small_cat(double w)
{
    weight=w;
    total_weight+=w;
    total_number++;
}
void Small_cat::display()
{
    cout<<"This cat's weight:"<<weight<<"kg\n";
}
void Small_cat::total_disp()
{
    cout<<total_number<<" cat's weights are:";
    cout<<total_weight<<"kg"<<endl;
}
double Small_cat::total_weight=0;
double Small_cat::total_number=0;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    Small_cat w1(a),w2(b),w3(c);
    w1.display();
    w2.display();
    w3.display();
    Small_cat::total_disp();
    return 0;
}
