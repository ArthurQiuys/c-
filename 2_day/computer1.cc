///---------------------------------------///
/// @file is the computer.cc
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-02-26 18:49:37
///------------------------------------------///
#include <iostream>
#include <cstring>
using namespace std;

class computer
{
    private:
        char* _brand;
        float _price;
    public:
        void prit();
        void SetBrand(char* sz);
        void SetPrice(float pr);
        computer(const char*sz,float p)
        {
            _brand = new char[strlen(sz)+1];
            strcpy(_brand,sz);
            _price = p;
        }
        computer(const computer & cp)
        {
            _brand = new char[strlen(cp._brand)+1];
            strcpy(_brand,cp._brand);
            _price = cp._price;
            std::cout << "复制函数" << std::endl;
        }
        ~computer()
        {
            delete[] _brand;
            _brand = NULL;
            std::cout << "清理现场" << std::endl;
        }
        computer operator = ( const computer &rs)
        {
            _brand = new char[strlen(rs._brand)+1];
            strcpy(_brand,rs._brand);
            _price = rs._price;
            std::cout << "1" << std::endl;
            return *this;

        }
};

void computer::prit()
{
    std::cout << "品牌："<< _brand << std::endl;
    std::cout << "价格：" << _price  <<std::endl;
}

void computer::SetBrand(char *sz)
{
    strcpy(_brand,sz);
}

void computer::SetPrice(float pr)
{
    _price = pr ;
}

int main ()
{
    //computer com1;
    //com1.SetPrice(4000);
    //com1.SetBrand("Mac");
    //com1.prit();
    computer com1("DELL",8000);
    computer com2("DQQQ",9000);
    com1 = com2;
    return 0;

}
