 ///---------------------------------------///
 /// @file is the template2.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 19:59:52
 ///------------------------------------------///
#include <iostream>
#include <string>
using namespace std;
template<typename T,int NUM>
T fun(T a)
{
    return a*NUM;
}
int mian()
{
    std::cout<< fun<int,4>(3)<<std::endl;
    return 0;
}
