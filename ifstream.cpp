#include<iostream>
using namespace std;
#include <fstream> //头文件包含
#include <string>
//文本文件 读文件
void test01()
{
    // 1 包含头文件

    // 2 创建流对象
    ifstream ifs;
    // 3 打开文件 并判断是否打开成功
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }
    // 4 读数据

    /*第一种读取方式*/
    // char buf1[1024] = {0};
    // while (ifs >> buf1)
    // {
    //     cout << buf1 << endl;
    // }
    /*第二种读取方式*/
    // char buf2[1024] = {0};
    // while (ifs.getline(buf2, sizeof(buf2)))
    // {
    //     cout << buf2 << endl;
    // }
    /*第三种读取方式*/
    // string buf3;
    // while (getline(ifs, buf3))
    // {
    //     cout << buf3 << endl;
    // }

     /*第四种读取方式*/
     char c;
     while ((c = ifs.get()) != EOF) // EOF 是文件末尾
     {
         cout << c;
     }
    
    // 5 关闭数据
    ifs.close();
}
int main()
{
    test01();
    return 0;
}