 ///---------------------------------------///
 /// @file is the memory2.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-02-26 10:35:11
 ///------------------------------------------///
#include <iostream>
#include <stdio.h>
using namespace std;
int a = 0;
const int b = 10;//存放在读写区
int main(void)
{
    int c =20;
    const int d =30;//存放在栈区，会随着main的结束而被被释放，这个与const无关，这个只不过是特殊化得类型就是类型属性不同，不可以被改变。
    printf(" &a = %x\n", &a);
    printf(" &b = %x\n", &b);
    printf(" &c = %x\n", &c);
    printf(" &d = %x\n", &d);
    std::cout << "&b = "<< &b << std::endl;
    std::cout << "&d = "<< &d << std::endl;
}
