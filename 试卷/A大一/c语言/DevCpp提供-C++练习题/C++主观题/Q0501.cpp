#include<iostream>
using namespace std;
class CArray {
private:
    int size;
    int *ptr;
public:
    CArray() : size(0), ptr(nullptr){ } // 构造函数
    CArray(int initsize) : size(initsize), ptr(nullptr)
    {
        if (size > 0)
        {
            ptr = new int[size];
        }
    }
    ~CArray() //析构函数
    {
        delete[] ptr;
        ptr = nullptr;
        size = 0;
    }
    CArray(const CArray& other) : size(other.size), ptr(nullptr) //拷贝构造函数
    {
        if (size > 0)
        {
            ptr = new int[size];
            for (int i = 0; i < size; ++i)
            {
                ptr[i] = other.ptr[i];
            }
        }
    }
    CArray& operator=(const CArray& other) //赋值运算符重载
    {
        if (this == &other)
        {
            return *this;
        }
        delete[] ptr;
        size = other.size;
        ptr = nullptr;
        if (size > 0)
        {
            ptr = new int[size];
            for (int i = 0; i < size; ++i) {
                ptr[i] = other.ptr[i];
            }
        }
        return *this;
    }
    void push_back(int value)
    {
        int new_size = size + 1;
        int* new_ptr = new int[new_size];
        for (int i = 0; i < size; ++i) {
            new_ptr[i] = ptr[i];
        }
        new_ptr[size] = value;
        delete[] ptr;
        ptr = new_ptr;
        size = new_size;
    }
    int& operator[](int index)
    {
        return ptr[index];
    }
    const int& operator[](int index) const
    {
        return ptr[index];
    }
    int length() const
    {
        return size;
    }
};
int main()
{
    CArray a;
    for(int i=0; i<5; ++i)    a.push_back(i*i);
    for(int i=0; i<5; ++i) cout<<a[i]<<" ";
    cout<<endl;

    CArray a2(3);
    a2[0]=20; a2[1]=21; a2[2]=22;
    for(int i=0; i<a2.length(); ++i) cout<<a2[i]<<" ";
    cout<<endl;

    a2=a;
    for(int i=0; i<a2.length(); ++i) cout<<a2[i]<<" ";
    cout<<endl;

    CArray a3;
    a2=a3;
    cout<<a2.length()<<endl;

    a[3]=100;
    CArray a4(a);
    for(int i=0; i<a4.length(); ++i) cout<<a4[i]<<" ";
    cout<<endl;

    return 0;
}