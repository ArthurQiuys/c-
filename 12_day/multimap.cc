 ///---------------------------------------///
 /// @file is the multimap.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-08 21:01:24
 ///------------------------------------------///
#include <map>
#include <string>
#include <iostream>
using namespace std;
//multimap容器的使用：关键字允许重复，按照关键字排序。

int main()
{
    //pair<int,string>模版类的用法
    pair<int,string> t(9,"Asia");
    cout << t.first << " " << t.second << endl << endl;

    //创建part<int,string>型数组
    pair<int,string> sz[4] = { pair<int,string>(9,"Asia"), pair<int,string>(4,"Africa"),
                               pair<int,string>(1,"Euro"), pair<int,string>(4,"America") };
    multimap<int,string>ohM(sz,sz+4);
    std::cout << ohM.size() << std::endl;
    multimap<int,string>::iterator it = ohM.begin();
    while(it!=ohM.end())
    {
        std::cout << (*it).first <<":"<<(*it).second << std::endl;
        it++;
    }
    getchar();
    return 0;
}
