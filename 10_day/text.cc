 ///---------------------------------------///
 /// @file is the text.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-05 22:30:38
 ///------------------------------------------///
#include <string.h>
#include <iostream>
using namespace std;
class String
{
    friend std::ostream & operator<<(std::ostream & os,const String &  rhs);

    class CharPraxy
    {
        public:
            CharPraxy(String & theString, size_t idx);
            CharPraxy & operator=(const char & ch);

            operator char() const;
        private:
            String & theString_;
            size_t idx_;
    };
    public:
    String();
    String(const char * pstr);
    String(const String & rhs);
    String & operator= (const String & rhs);
    ~String();
    size_t size() const;
    size_t use_count() const;
    CharPraxy operator[](size_t idx);
    char & operator[](size_t idx) const;
    private:
    char * pstr_;
};
String::String()
{
    std::cout << "String::String()" << std::endl;
    pstr_=new char[2];
    pstr_[1]=1;
}

String::String(const char * pstr)
{
    std::cout << "String::String(const char *)" << std::endl;
    size_t len = strlen(pstr);
    pstr_ = new char[len +2];
    pstr_[len + 1]=1;
    strcpy(pstr_,pstr);
}

String::String(const String & rhs)
:pstr_(rhs.pstr_)
{
    std::cout << "String::String(const String & rhs)" << std::endl;
    ++pstr_[size()+1];
}

String::CharPraxy::CharPraxy(String & theString, size_t idx)
    :theString_(theString),
    idx_(idx)
{
    std::cout << "类中类构造" << std::endl;
}
String & String::operator=(const String & rhs)
{
    std::cout << "String::operator=(const String &)" << std::endl;
    if(this != &rhs)
    {
            delete [] pstr_;
    pstr_ = rhs.pstr_;
    ++pstr_[size() +1];
    }
return *this;
}
String::~String()
{
    if((--pstr_[size()+1])==0)
    {
        std::cout << "~String::~String()" << std::endl;
        delete []pstr_;
    }
}
inline size_t String::size() const
{
std::cout << "shrlen" << std::endl;
    return strlen(pstr_);
}
inline size_t String::use_count() const
{
    return pstr_[size()+1];
}
String::CharPraxy String::operator[](size_t idx)
{
    std::cout << "operator[]" << std::endl;
    return CharPraxy(*this, idx);
}
#if 0
char & String::operator[](size_t idx) const
{
    std::cout << "[char]" << std::endl;
    return pstr_[idx];
}
#endif
String::CharPraxy & String::CharPraxy::operator=(const char & ch)
{
    std::cout << "=" << std::endl;
    if(theString_.use_count()>1)
    {
        --theString_.pstr_[theString_.size()+1];
       char * ptmp = new char [theString_.size()+2];
        strcpy(ptmp,theString_.pstr_);
        theString_.pstr_=ptmp;
        theString_.pstr_[theString_.size()+1]=1;
    }
    theString_.pstr_[idx_]=ch;
    return *this ;
}
String::CharPraxy::operator char() const
{
    std::cout << "operator()" << std::endl;
    return theString_.pstr_[idx_];
}
std::ostream & operator<<(std::ostream & os,const String & rhs)
{
    os << rhs.pstr_;
    return os;
}

int main(void)
{
    String s1 = "hello,world";
    String s2 = s1;
    String s3 ;
    s3 = s2;
    std::cout << "use_count ="<< s1.use_count() << std::endl; 
    std::cout << "use_count ="<< s2.use_count() << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << s2[1] << std::endl;
    std::cout << "--------------" << std::endl;
    s2[1]='S';
    std::cout << "-------------" << std::endl;
    std::cout << "s1="<<s1 << std::endl;
    std::cout << "use_count ="<< s3.use_count() << std::endl;
    cout<<s1[6]<<endl;
    std::cout << "use_count:"<<s1.use_count() << std::endl;
    String s4;
    s4 = "helle";
    std::cout << "s4 = "<<s4 << std::endl;
    return 0;
}      
