 ///---------------------------------------///
 /// @file is the computer.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-02-26 18:49:37
 ///------------------------------------------///
#include <iostream>
using namespace std;

class computer
{
    private:
            char _brand[20];
            float _price;
    public:
            void prit();
            void SetBrand(char* sz);
            void SetPrice(float pr);
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
    computer com1;
    com1.SetPrice(4000);
    com1.SetBrand("Mac");
    com1.prit();
    return 0;
}
