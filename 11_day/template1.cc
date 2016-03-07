 ///---------------------------------------///
 /// @file is the template1.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 19:54:57
 ///------------------------------------------///
#include <iostream>
#include <string>
using namespace std;
template <typename T>
T add(const T &a,const T  &b)
{
    return a+b;
}

int main()
{
    std::cout << add(10,20) << std::endl;
    std::cout << add(10.15,52.6) << std::endl;
 //   std::cout << add(50.5,20) << std::endl;
    string x("hello"),y("world");
    std::cout << add(x,y) << std::endl;
    return 0;
}
