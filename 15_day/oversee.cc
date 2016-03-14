 ///---------------------------------------///
 /// @file is the oversee.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-14 10:50:25
 ///------------------------------------------///
#include <iostream>
using namespace std;

class Base
{
    public:
        int func(int i)
        {
            std::cout << "basefun()" << std::endl;
            return _ix;
        }
  //  private:
     protected:
        int _ix;
};

class Dreiverd:public Base
{
    public:
        int func()
        {
            std::cout << "derive:func()" << std::endl;
            _ix = 9;
            Base::_ix = 22;
            return _ix;
        }
    private:
       int  _ix;
};


int main()
{
    Dreiverd d;
    //d.func(3);//隐藏，父子类之间发生，非虚函数，只要函数名相同.
    cout<<d.Base::func(3)<<endl;//如果要使用父类的同名函数，必须使用作用域限定符
    cout<<d.func()<<endl;
}
