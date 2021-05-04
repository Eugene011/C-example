#include<iostream>
using namespace std;
//继承的基本语法
// 页面内容，只有中间的content不同，其他都相同

// 不用继承写
//Java页面
class Java
{
public:
    void header()
    {
        cout << "首页，公开课，登陆，证明" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、。。。" << endl;
    }
    void left()
    {
        cout <<"java 、python ...." << endl;
    }
    void content()
    {
        cout << "Java视频" << endl;
    }

};
// python 页面
class Python
{
public:
    void header()
    {
        cout << "首页，公开课，登陆，证明" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、。。。" << endl;
    }
    void left()
    {
        cout <<"java 、python ...." << endl;
    }
    void content()
    {
        cout << "python视频" << endl;
    }

// };
//继承代码

// 公共页面

class BasePage
{
    public:
    void header()
    {
        cout << "首页，公开课，登陆，证明" << endl;
    }
    void footer()
    {
        cout << "帮助中心、交流合作、。。。" << endl;
    }
    void left()
    {
        cout <<"java 、python ...." << endl;
    }
};
// java 页面

class Java: public BasePage
{
public:
    void content()
    {
        cout << "Java视频" << endl;
    }
};
class Python: public BasePage
{
public:
    void content()
    {
        cout << "python视频" << endl;
    }
};

void test01()
{
    cout << "java 下载视频页面如下： " << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "python 下载视频页面如下： " << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.content();
}

int main()
{
    test01();
    return 0;
}