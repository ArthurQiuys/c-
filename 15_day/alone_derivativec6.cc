///---------------------------------------///
/// @file is the alone_derivativec6.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 21:49:39
///------------------------------------------///
#include <iostream>
using namespace std;

class A                     //类A定义
{
    private:                    //private成员列表
        int x;

    public:                     //public成员列表
        A(int xp = 0)           //构造函数，带缺省参数
        {
            x=xp;
            cout<<"A的构造函数被执行"<<endl;
        }

        ~A()                    //析构函数
        {
            cout<<"A的析构函数被执行"<<endl;
        }

        void Print()            //显示成员变量x的值
        {
            cout << x << endl;
        }
};

class B:virtual public A    //类B由类A虚基派生而来
{
    public:
        B(int xp):A(xp)         //在初始化表中调用基类构造函数
    {
        cout<<"B的构造函数被执行"<<endl;
    }

        ~B()                    //析构函数
        {
            cout<<"B的析构函数被执行"<<endl;
        }
};

class C:virtual public A    //类C由类A虚基派生而来
{
    public:
        C(int xp):A(xp)         //在初始化表中调用基类构造函数
    {
        cout<<"C的构造函数被执行"<<endl;
    }

        ~C()                    //析构函数
        {
            cout<<"C的析构函数被执行"<<endl;
        }
};

class D:public B,public C   //类D由类B和类C共同派生而来
{
    public:
        D(int xp):B(xp),C(xp),A(xp) //初始化表中不仅要调用B类和C类的构造函数，还应调用共同虚基类的构造函数A(xp)
    {
        cout<<"D的构造函数被执行"<<endl;
    }

        ~D()                    //析构函数
        {
            cout<<"D的析构函数被执行"<<endl;
        }
};

int main()
{
    D d(2);         //声明D类对象d
    d.Print();      //结果为2。如果去掉类D的构造函数的初始化列表中的A(xp)，则结果为0。好好体会!!!!!!!!
    cout << endl;

    B b(3);
    b.Print();      //结果为3。如果去掉类B的构造函数的初始化列表中的A(xp)，则结果为0。好好体会!!!!!!!!
    cout << endl;

    return 0;       //main函数执行完毕退出后，d销毁，析构函数触发执行
}

