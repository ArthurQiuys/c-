///---------------------------------------///
/// @file is the test1.cc
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-02-25 23:30:25
///------------------------------------------///
#include <iostream>
using std::cout;
using std::endl;
int & func()
{
    int a =3 ;
    return a;
}
int main()
{
    int b = 0;
    int & a = b;
    a=func();
    cout << a << endl;
    cout << b << endl;
}
