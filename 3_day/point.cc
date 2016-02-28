 ///---------------------------------------///
 /// @file is the point.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-02-27 10:08:56
 ///------------------------------------------///
#include <iostream>
using namespace std;

class Point
{
    public:
        Point(int ix,int iy);

        Point(const Pint & rhs);

        void print();

    private:
        const int _ix;
        comst int _iy;

};

Point::Point(int ix ,int iy)
    : _ix(ix)
    , _iy(iy)
{   
    std::cout << "Point(int,int)" << std::endl;
}
Point::print(const  Point & rhs)
: _ix(rhs._ix)
    ,_iy(rhs.iy)
{
    std::cout << "Point(int ,int )" << std::endl;
}
void Point::print()
{
    std::cout << "(" << std::endl;
std::cout << "," << std::endl;
std::cout << ")" << std::endl;
}
