#include<iostream>
using namespace std;
#include <fstream>
#include <string>
//二进制文件 读文件
class Person
{
public:  
    char m_Name[64]; //姓名
    int m_Age; // 年龄
};
void test01()
{
    // 1. 包含头文件
    // 2. 创建流对象
    ifstream ifs;
    // 3. 打开文件 判断文件是否打开成功

    ifs.open("person.txt", ios::in | ios::binary);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    
    // 4. 读文件
    Person p;

    ifs.read((char *)&p , sizeof(Person));

    cout << p.m_Name << endl;
    cout << p.m_Age << endl;

    // 5. 关闭
    ifs.close();
}

int main()
{
    test01();
    return 0;
}