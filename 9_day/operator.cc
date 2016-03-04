 ///---------------------------------------///
 /// @file is the operator.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-04 11:15:53
 ///------------------------------------------///
#include <iostream>
using namespace std;

class CharArr
{
    public:
        CharArr(int sz);
        ~CharArr();
        int length();

        char & operator[](int idx);

    private:
        int _ilen;
        char * _pstr;
};

CharArr::CharArr(int sz)
:_ilen(sz)
    ,_pstr(new char[_ilen])
{
    cout<< "CharArr"<< endl;
}
CharArr::~CharArr()
{
    delete [] _pstr;
    std::cout << "~CharArr" << std::endl;
}
int CharArr::length()
    {
        return _ilen;
    }
char & CharArr::operator=[](int idx)
{
}
int main(int argc, const char *argv[])
{
    
    return 0;
}

