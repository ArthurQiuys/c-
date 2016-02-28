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
        Point(int ix,int iy,double &z);

        Point(const Pint & rhs);

        void print();

    private:
         int _ix;
         int _iy;
         int & rhs;
         double & _rhs1;

};

Point::Point(int ix ,int iy,double &z)
    : _ix(ix)
    , _iy(iy)
    ,_rhs(_ix)
    ,_rhs1(&z)
{   
    std::cout << "Point(int,int)" << std::endl;
}
Point::print(const  Point & rhs)
:_ix(rhs._ix)
,_iy(rhs._iy)
,_rhs(rhs._rhs)
,_rhs1(rhs._rhs1)
{

    std::cout << "Point(int ,int )" << std::endl;
}
void Point::print()
{
    cout<< _ix<<
        << _iy<<
        << rhs<<
        << rhs1<<endl;
}

