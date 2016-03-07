 ///---------------------------------------///
 /// @file is the template5.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 20:34:30
 ///------------------------------------------///
#include <iostream>
using namespace std;
template<class T>
T MAX(T x,T y,T z)
{
    return x>y?(x>z?x:z):(y>z?y:z);
}
template<class T>
T MAX(T x,T y)
{
    return x>y?x:y;
}
int main()
{
    int intX=1;
    int intY=2;
    int intZ=3;
    double dblX = 2.5;
    double dblY = 3.5;
    std::cout << MAX(intX,intY) << std::endl;
    std::cout << MAX(intX,intY,intZ) << std::endl;
    std::cout << MAX(dblX,dblY) << std::endl;
    return 0;
}
