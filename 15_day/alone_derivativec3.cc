///---------------------------------------///
/// @file is the alone_derivativec3.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 21:28:16
///------------------------------------------///
#include <iostream>
using namespace std;

class Baseclass
{
    private :
        int a;
    public:
        Baseclass(int i)
        {
            cout<<"constructing base"<<endl;
        }
};
class Derivedclass : public Baseclass
{
    public:
        Derivedclass(int i):Baseclass(i)  //自动调用基类的默认构造函数
    {
        cout<<"default derived"<<endl;
    }
        Derivedclass(int i,int j):Baseclass(j)  //此时显示调用基类有参构造函数
    {
        cout<<"constructing derived"<<endl;
    }
};
int main()
{
    Derivedclass x1(5,7);
    Derivedclass x2(5);
    return 0;
}

