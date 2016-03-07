//---------------------------------------///
 /// @file is the template3.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 20:17:44
 ///------------------------------------------///
#include <iostream>
using namespace std;

template<class T>
T Max(T x,T y);

int main()
{
    int intX = 1,intY = 2;
    double dblX=3.9,dblY=2.9;
    std::cout << Max(intX,intY) << std::endl;
    std::cout << Max<double>(dblX,dblY) << std::endl;
    return 0;
}

template<class T>
T Max(T x,T y)
{
    return (x>y?x:y);
}
