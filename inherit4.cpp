#include<iostream>
using namespace std;
//继承中的对象模型
class base
{
public:
    base(/* args */)
    {
        m_A = 100;
    }
    int m_A;
};

class Son : public base
{
public:
    Son (/* args */)
    {
        m_A = 200;
    }
    int m_A;
};
void test01()
{
   Son s;
   cout << "son 中的 m_A = " << s.m_A << endl;
   cout << "base 中的 m_A = " << s.base::m_A << endl;
}
int main()
{
    test01();
    return 0;
}