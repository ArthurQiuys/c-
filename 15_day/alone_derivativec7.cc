///---------------------------------------///
/// @file is the alone_derivativec7.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 22:58:19
///------------------------------------------///
#include <iostream>
using namespace std;

class CBase
{
    protected:
        char *m_pszData;
    public:
        CBase(const char *pszData)                          //1
        {
            m_pszData=new char[strlen(pszData)+1];
            strcpy(m_pszData,pszData);
        }
        CBase(const CBase &base)                            //3
        {
            m_pszData=new char[strlen(base.m_pszData)+1];
            strcpy(m_pszData,base.m_pszData);
        }
        CBase &operator =(const CBase &base)                //4
        { 
            if(this==&base)
                return *this;
            delete []this->m_pszData;
            m_pszData=new char[strlen(base.m_pszData)+1];
            strcpy(m_pszData,base.m_pszData);
            return *this;
        }
        ~CBase(){delete []m_pszData;}
};
class CDerived:public CBase
{
    public:
        CDerived(const char *pszData):CBase(pszData){}      //2
};
int main()
{
    CDerived d1("Hello!");
    CDerived d2=d1;     //派生类使用缺省的拷贝构造函数、基类调用用户定义的拷贝构造函数
    d1=d2;      //派生类使用缺省的赋值操作，基类调用用户重载的赋值运算符
}

