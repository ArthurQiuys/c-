///---------------------------------------///
/// @file is the alone_derivativec2.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 21:27:47
///------------------------------------------///
#include <iostream>
using namespace std;
class Baseclass
{
    private :
        int a;
    public:
        Baseclass()     //用于检测基类的是否被自动调用
        {
            cout<<"default base"<<endl;
        }
        Baseclass(int i)
        {
            cout<<"constructing base"<<endl;
        }
};
class Derivedclass : public Baseclass
{
    public:
        Derivedclass(int i)  //自动调用基类的默认构造函数
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

