 ///---------------------------------------///
 /// @file is the singleton1.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-02-29 16:13:48
 ///------------------------------------------///
#include <iostream>
using namespace std;
class ST
{
    private:
        static ST * pT;
        int x;
        int y;
        ST(int x = 0,int y = 0)
        {
            this ->x = x;
            this ->y = y;
            std::cout << "含参构造函数被调用" << this <<std::endl;
        }
    public:
        static ST * GetInstance (int x = 0 , int y = 0)
        {
            if (pT == NULL)
            {
                pT = new ST(x,y);
            }
            return pT;
        }
        void print() const
        {
            std::cout << "("<<this->x<<","<<this->y<<")" << std::endl;
        }
};
ST * ST ::pT = NULL;
int main ()
{
    ST *p1 = ST::GetInstance(5,6);
    ST *p2 = ST::GetInstance(2,6);
    ST *p3 = ST::GetInstance(3,6);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    p1->print();
    p2->print();
    p3->print();
}
