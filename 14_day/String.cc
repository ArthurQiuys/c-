 ///---------------------------------------///
 /// @file is the String.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-11 09:56:34
 ///------------------------------------------///
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
class String
{
    public:
        String()
        {
            std::cout << "String()" << std::endl;
                _pstr = new char[1];
        }
        String(const char *pstr)
        {
            std::cout << "string(const char *)" << std::endl;
            _pstr = new char [strlen(pstr)+1];
            strcpy(_pstr,pstr);
        }
        String(const String & rhs)
            {
                std::cout << "String(const string &)" << std::endl;
                _pstr = new char [strlen( &rhs._pstr)+1];
        strcpy(_pstr,rhs._pstr);
            };
            String & operator=(const String & rhs);
            {
                std::cout << "operator = " << std::endl;
                if(this ! = &rhs)
                {
                    delete [] _pstr;
                    _pstr = new char [strlen(rhs._pstr)+1];
                    strcpy(_pstr,rhs._pstr);
                }
                return *this;
            }
            ~String()
            {
                std::cout << "~string()" << std::endl;
                delete [] _pstr;
            }
    private:
        char *_pstr;
};

int main()
{
    vector<String> verStr;
    verStr.push_back("hello,world");

    return 0;
}
