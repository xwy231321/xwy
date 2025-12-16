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
    cout<<"This cat's weight is:"<<weight<<"kg\n";
}
void Small_cat::total_disp()
{
    cout<<total_number<<" cats' weights are:";
    cout<<total_weight<<"kg"<<endl;
}
double Small_cat::total_weight=0;
double Small_cat::total_number=0;
int main()
{
    Small_cat w1(0.5),w2(0.6),w3(0.4);
    w1.display();
    w2.display();
    w3.display();
    Small_cat::total_disp();
    return 0;
}
