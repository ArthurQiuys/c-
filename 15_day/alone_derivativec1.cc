///---------------------------------------///
/// @file is the alone_derivativec1.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 21:25:59
///------------------------------------------///
#include <iostream>
using namespace std;

class Baseclass
{
    private :
        int a;
    public:
        Baseclass()//必须有
        {
            cout<<"default base"<<endl;
        }
        Baseclass(int i)//此时有参的构造函数没有任何作用
        {
            cout<<"constructing base"<<endl;
        }
};
class Derivedclass : public Baseclass
{
};
int main()
{
    Derivedclass x1;
    return 0;
}

