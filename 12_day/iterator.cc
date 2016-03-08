///---------------------------------------///
/// @file is the iterator.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-08 17:07:49
///------------------------------------------///
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int sz[9] = {2, 1, 3, 5, 4, 6, 3, 5, 6};    //定义int型数组，数组名相当于指针（迭代器）
    set<int> A(sz, sz + 9);             //将迭代器区间作为参数创建容器对象A
    cout << A.size() << endl;           //输出A中元素个数

    set<int>::iterator it = A.begin();  //创建set<int>::iterator迭代器it，指向A头部
    while (it != A.end())               //输出全部元素
    {
        cout << (*it) << "  ";
        it++;
    }
    cout << endl;

    getchar();
    return 0;
}

