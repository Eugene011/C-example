#include<iostream>
using namespace std;
//多态
// 动物类
class Animal
{
public:  
    //虚函数
    virtual void speak()
    {
        cout << "动物在说话" << endl;
    }
};
// 猫类
class Cat :public Animal
{
public:  
    void speak()
    {
        cout << "cat is speaking" << endl;
    }
};

// 执行说话的函数
void DoSpeak(Animal &animal)
{
    animal.speak();
}
void test01()
{
    Cat cat;
    DoSpeak(cat);
}
void test02()
{
    cout << " sizeof Animal = " << sizeof(Animal) << endl;
}
int main()
{
    test01();
    return 0;
}