 ///---------------------------------------///
 /// @file is the lvalue_rvalue.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-11 10:11:00
 ///------------------------------------------///
#include <iostream>
#include <vector>
using namespace std;

int  main(void)
{
    int a = 10;
    int b = 123;
    int *pflag = &a;
    std::vector<int>vctTmp;
    vctTmp.push_back(1);
    std:: string str1 = "hello";
    std::string str2 = "world";
    const int & m = 1;
    &a;
    &b;
    //&(a+b);
}
