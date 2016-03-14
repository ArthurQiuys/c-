 ///---------------------------------------///
 /// @file is the derivativec1.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-14 16:59:10
 ///------------------------------------------///
#include <iostream>
using namespace std;
class CA
{
private:
    int x;
protected:
    int y;
public:
    int z;
};

class CB : private CA   //protected  private
{
public:
    void fun()
    {
        z = 7;
        y = 3;
//      x = 4;
        cout << z << endl;
    }
};

int main()
{
    CB b;
//  b.z = 10;
//  b.y = 3;
//  b.x  = 4;
    return 0;
}

//总结如下:
//1. public继承方式的时候，在子类中不能访问基类的私有成员，可以访问基类的公有成员和保护成员
//   定义的子类对象，不能访问基类的私有成员和保护成员，可以访问基类的公有成员
//2. protected继承方式的时候，在子类中不能访问基类的私有成员，可以访问基类的公有成员和保护成员
//   定义的子类对象，不能访问基类的任何成员
//3. private继承方式的时候，在子类中不能访问基类的私有成员，可以访问基类的公有成员和保护成员
//   定义的子类对象，不能访问基类的任何成员

