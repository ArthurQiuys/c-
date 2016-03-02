 ///---------------------------------------///
 /// @file is the io4.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-02 11:12:33
 ///------------------------------------------///
#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;
using std::istringstream;
using std::ostringstream;
string int2string(int ival)
{
    ostringstream oss;
    oss << ival;
    return oss.str();
}
int main(void)
{
    int ival = 521;
    int ival2 = 1024;
    stringstream ss;
    ss << "ival= " << ival << ",ival2= "<< ival2 << endl;
    string s = ss.str();
    cout << s << endl;
    std::cout << "int2string"<< int2string(ival) << std::endl;
    int a,b;
    string s1;
    string s2;
    ss>>s1>>a>>s2>>b;
    std::cout << "s1: "<< s1 << std::endl;
    std::cout << "s2: "<< s2 << std::endl;
    std::cout << "a = "<< a << std::endl;
    std::cout << "b = "<< b <<std::endl;
    return 0;
}
