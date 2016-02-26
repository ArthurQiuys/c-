///---------------------------------------///
/// @file is the memory.cc
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-02-26 10:24:30
///------------------------------------------///
#include <iostream>
#include<stdio.h>
using namespace std;
int a= 0;
char *p1;
int main(int argc, const char *argv[])
{
    int b;
    char s[] ="123456";
    char *p2;//在内存的指针所占用的空间与机器字与系统有关，与类型无关
    char *p3 ="123456";
    static int c =0;
    p1 = new char [10];
    strcpy(p1,"123456");
    std::cout << "&a ="<< &a << std::endl;
    std::cout << "&p1 = "<< &p1 << std::endl;
    std::cout << "p1 = "<< p1 << std::endl;
    std::cout << "&b = "<< &b << std::endl;
    std::cout << "&p2 = " << &p2<< std::endl;
    std::cout << "p3 = "<< p3 << std::endl;
    std::cout << "&p3 = "<< &p3 << std::endl;
    std::cout << "&c = "<< &c << std::endl;
    return 0;
}
