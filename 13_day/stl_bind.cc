///---------------------------------------///
/// @file is the stl_bind.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-10 22:46:39
///------------------------------------------///
#include <iostream>
using namespace std;
#include < functional>

int Func(int x, int y);
auto bf1 = std::bind(Func, 10, std::placeholders::_1);
bf1(20); ///< same as Func(10, 20)

class A
{
    public:
        int Func(int x, int y);
};

int main(void)
{
    A a;
    auto bf2 = std::bind(&A::Func, a, std::placeholders::_1, std::placeholders::_2);
    bf2(10, 20); ///< same as a.Func(10, 20)

    std::function< int(int)> bf3 = std::bind(&A::Func, a, std::placeholders::_1, 100);
    bf3(10); ///< same as a.Func(10, 100)
}


