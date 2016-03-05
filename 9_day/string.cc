///---------------------------------------///
/// @file is the string.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-04 21:21:25
///------------------------------------------///
#include <iostream>
#include <string>
using namespace std;
class String {
    public:
        String();
        String(const char *);
        String(const String&);
        ~String();
        String &operator=(const String &);
        String &operator=(const char *);
        String &operator+=(const String &);
        String &operator+=(const char *);
        char &operator[](std::size_t index);
        const char &operator[](std::size_t index) const;
        std::size_t size() const;
        const char* c_str() const;
        friend bool operator==(const String &, const String &);
        friend bool operator!=(const String &, const String &);
        friend bool operator<(const String &, const String &);
        friend bool operator>(const String &, const String &);
        friend bool operator<=(const String &, const String &);
        friend bool operator>=(const String &, const String &);
        friend std::ostream &operator<<(std::ostream &os, const String &s);
        friend std::istream &operator>>(std::istream &is, String &s);

    private:
        char *pstr_;
};
String::String()
{
    std::cout << "无参构造函数" << std::endl;
    pstr_ = new char[1];
}
String::String(const char * pstr)
{
    std::cout << "char型参数构造函数" << std::endl;
    size_t len = strlen(pstr);
    pstr_ = new char[len+1];
    strcpy(pstr_,pstr);
}
    String::String(const String & rhs)
:pstr_(rhs.pstr_)
{
    std::cout << "String型构造函数" << std::endl;
}
String::~String()
{
    std::cout << "析构函数" << std::endl;
    delete [] pstr_;
}
std::size_t String::size() const
{
    std::cout << "size_t" << std::endl;
    return strlen(pstr_);
}
const char * String::c_str() const
{
    return this->pstr_;
}
String & String::operator=(const String &a)
{

    std::cout << "String::operator=(const String &)" << std::endl;
    if(this != &a)
    {
        std::cout << "复制构造函数 :删除原有字符串申请的空间" << std::endl;
        delete [] pstr_;
        pstr_ = a.pstr_;
    }
    return *this;
}
String & String::operator=(const char*a)
{
    if(this != &a)
    {
        std::cout << "String::operator=(const char*)" << std::endl;
        delete [] pstr_;
        size_t len = strlen(a);
        pstr_ = new char(len + 1);
        strcpy(pstr_,a);
    }
    return *this;
}
String & String::operator+=(const String &rhs)
{
    strcat(pstr_,rhs.c_str());
    return *this;
}

String & String::operator+=(const char* rhs)
{
    strcat(pstr_,rhs);
    return *this;

}
String operator+(const String &a, const String &b)
{
    String c;
    c+=a;
    c+=b;
    return c;
}
String operator+(const String &a, const char *b)
{

}
String operator+(const char *a, const String &b)
{

}
bool operator==(const String &a,const String &b)
{
    if(strcmp(a.c_str(),b.c_str()))
        return true;
    else
        return false;
}

bool operator!=(const String &a,const String &b)
{
    if(!strcmp(a.c_str(),b.c_str()))
        return true;
    else
        return false;
}
bool operator<(const String &a,const String &b)
{
    if(-1==strcmp(a.c_str(),b.c_str()))
        return true;
    else
        return false;
}
bool operator>(const String &a,const String &b)
{
    if(1==strcmp(a.c_str(),b.c_str()))
        return true;
    else
        return false;
}
bool operator<=(const String &a,const String &b)
{
    if(strcmp(a.c_str(),b.c_str())!=-1)
        return true;
    else
        return false;
}
bool operator>=(const String &a,const String &b)
{
    if(strcmp(a.c_str(),b.c_str())!=1)
        return true;
    else
        return false;
}
char & String::operator[](std::size_t index)const
{
    return pstr_[index];
}

std::ostream &operator<<(std::ostream &os, const String &s);
{
    os<<s.pstr_;
    return os;
}
std::istream &operator>>(std::istream &is, String &s);
{
    is>>s.pstr_;
    return s.pstr_;
}
int main(int argc, const char *argv[])
{
    return 0;
}
