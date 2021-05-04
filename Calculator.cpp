#include<iostream>
using namespace std;
//普通写法
class Calculator
{
public:  
    int getresult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            /* code */
            return m_Num1 - m_Num2;
        }
         else if (oper == "*")
        {
            /* code */
            return m_Num1 * m_Num2;
        }
    }
    int m_Num1;
    int m_Num2;
};
void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getresult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getresult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getresult("*") << endl;
}
//多态写法
//实现一个计算机的抽象类
class AbstractCalculator
{
public: 
    virtual int getResult()
    {
        return 0;
    }
    int m_Num1;
    int m_Num2;
};

// 加法类 
class AddCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1+m_Num2;
    }
};
// 减法类 
class SubCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1-m_Num2;
    }
};
// 乘法类 
class MulCalculator :public AbstractCalculator
{
public:
    int getResult()
    {
        return m_Num1*m_Num2;
    }
};

void test02()
{
    AbstractCalculator *abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 10;
    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;
}
int main()
{
    test02();
    return 0;
}