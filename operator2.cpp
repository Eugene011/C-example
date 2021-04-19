#include<iostream>
using namespace std;
//左移运算符重载
class Persion
{
public:
    // 不用成员函数重载<< 运算符，因为无法实现cout 在左侧。 p.operator<<(cout) p << cout
    int m_A;
    int m_B;
};
// 只能用全局函数来重载<< 运算符。
ostream &operator<<(ostream &cout,Persion &p)
{
    cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
    return cout;
}
void test01()
{
    Persion p1;
    p1.m_A = 10;
    p1.m_B = 10;
    cout << p1 << endl;
}
int main()
{
    test01();
    return 0;
}