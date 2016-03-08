 ///---------------------------------------///
 /// @file is the iterator1.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-08 20:41:07
 ///------------------------------------------///
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    pair<int,string>ch(9,"On,you");//pair<int,string>模板类的使用方法。
    std::cout << ch.first<<" "<<ch.second<<endl<< std::endl;//打印关键字和值
    pair<int,string>ch1[4]={ pair<int,string>(9,"On,me"),pair<int,string>(8,"oh,who"),
        pair<int,string>(7,"oh,what"),pair<int,string>(10,"oh,while")};
    map<int,string>ohM(ch1,ch1+4);//用迭代器区间构造ohM
    std::cout << ohM.size() << std::endl;//输出ohM中的元素个数
    map<int,string>::iterator it = ohM.begin();//创造map<int,string>模板的迭代器，指向OhM的头部
    while(it!=ohM.end())//按照顺序逐个输出oHM中的元素
    {
        std::cout << (*it).first<<":"<<(*it).second << std::endl;
        it++;
    }
    getchar();
    return 0;
}



