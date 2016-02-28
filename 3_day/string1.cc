///---------------------------------------///
/// @file is the string1.h
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-02-28 19:47:49
///------------------------------------------///
#include <iostream>
#include <string.h>
using namespace std;
class String
{
    private:
        char *_str;
        //const 类型就必须在初始化的时候进行复制
    public:
        String()//构造函数，当没有写的时候系统默认调用隐式构造函数
        {
            int len = strlen("0");
            _str = new char [len +1];
            strcpy(_str,"0");
            std::cout << "string" << std::endl;

        }
        String(const char *str)
        {
            int len = strlen(str);
            _str = new char [len + 1];
            strcpy(_str,str); 
            //const的要用new新空间进行copy。
        }
        String(const String & rhs)
          //  :_str(rhs._str)
        {
            int len = strlen(rhs._str);
            _str = new char [len +1];
            strcpy(_str,rhs._str);
        }
        String & operator = ( const String & rhs)
            //两个引用不能少
        {
            if(this == &rhs)
            {
                return *this;
            }
           delete[] _str;
            int  len = strlen(rhs._str);
            _str = new char[len +1];
            strcpy(_str,rhs._str);
           // delete[] _str;//必须在之前，默认构造函数的时候就进行删除，不然会造成内存
           // 泄露，在这里进行删除的时候就会使调用析构函数的时候发生错误。
            return *this;
        }
        ~String()
        {
            delete [] _str;
            //调用析构函数要进行删除申请的空间。
            std::cout << "delete" << std::endl;
        }
        void print()
        {
            std::cout <<_str << std::endl;
        }
};

int main ()
{
    String str1
    String str2 = " Hello,world";
    String str3 = " wangdao";
    str2 = str3;
    String str4 = str3;

    str1.print();
    str2.print();
    str3.print();
    str4.print();
}
