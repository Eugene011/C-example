#include<iostream>
using namespace std;
//深拷贝与浅拷贝
class Person
{
public:
    Person()
    {
        cout << "person 的默认构造函数调用" << endl;
    }
    Person(int age, int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "person 的有参构造函数调用" << endl;
    }
    ~Person()
    {
        //将堆区开辟的数据进行释放
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person 析构函数的调用" << endl;
    }

    int m_Age;
    int *m_Height; //身高
};

void test01()
{
    Person pr(18, 160);
    cout << "pr的年龄为: " << pr.m_Age << "身高为： "<< *pr.m_Height << endl;

    Person p2(pr);

    cout << "p2的年龄为: " << p2.m_Age << "身高为： "<< *p2.m_Height << endl;
}

int main()
{
    test01();

    return 0;
}