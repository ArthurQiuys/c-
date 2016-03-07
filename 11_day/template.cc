 ///---------------------------------------///
 /// @file is the template.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 19:45:24
 ///------------------------------------------///
#include <iostream>
using namespace std;
template <typename T>
T MAX(T a,T b)
{
    return a>b?a:b;
}
int main()
{
    std::cout << MAX(30.5,35.5) << std::endl;
    std::cout << MAX(3,7) << std::endl;
    return 0;
}
