#include<iostream>
using namespace std;
//加号运算符重载
class Persion
{
public:
    //1. 成员函数重载
    // Persion operator+(Persion &p)
    // {
    //     Persion temp;
    //     temp.m_A = this ->m_A + p.m_A;
    //     temp.m_B = this ->m_B + p.m_B;
    //     return temp;
    // }
   
    int m_A;
    int m_B;
};
 //2. 全局函数重载
Persion operator+(Persion &p1, Persion &p2)
{
    Persion temp;
        temp.m_A = p1.m_A + p2.m_A;
        temp.m_B = p1.m_B + p2.m_B;
        return temp;
}
void test01()
{
    Persion p1;
    Persion p2;
    p1.m_A = 10;
    p1.m_B = 10;
    p2.m_A = 10;
    p2.m_B = 10;
    Persion p3 = p1+p2;
    cout << "p3.m_A = " << p3.m_A << endl;
    cout << "p3.m_B = " << p3.m_B << endl;

}
int main()
{

    test01();
    return 0;
}