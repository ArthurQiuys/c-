///---------------------------------------///
/// @file is the alone_derivativec.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 20:49:02
///------------------------------------------///
#include <iostream>
using namespace std;

class Baseclass
{
    private :
             int a;
    public:
             //Baseclass()//用于检测基类的缺省的无参构造函数是否被自动调用
             //      {
             //          cout<<"default base"<<endl;
             //      }
};
class Derivedclass : public Baseclass
{
    public:
        Derivedclass()
        {
            cout<<"default"<<endl;
        }
        Derivedclass(int i)
        {
            cout<<"constructing"<<endl;
        }
};
int main()
{
    Derivedclass x1(5);
    Derivedclass x2;
    return 0;
}

