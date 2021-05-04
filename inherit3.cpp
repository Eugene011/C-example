#include<iostream>
using namespace std;
//继承中的对象模型
class base
{
private:
    /* data */
public:
    base(/* args */);
    ~base();
};

base::base(/* args */)
{
    cout << "Base 的构造函数" << endl;
}

base::~base()
{
    cout << "Base 的析构函数" << endl;
}

class Son : public base
{
private:
    /* data */
public:
    Son (/* args */);
    ~Son();
};

Son::Son(/* args */)
{
    cout << "Son 的构造函数" << endl;
}

Son::~Son()
{
    cout << "Son 的析构函数" << endl;
}

void test01()
{
   Son s;
}
int main()
{
    test01();
    return 0;
}