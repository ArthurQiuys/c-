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
        Point()
            :_ix(0)
             ,_iy(0)
    {}
        Point(const Point & rhs);

        void print();

    private:
        const int _ix;
        const int _iy;

};

    Point::Point(int ix ,int iy)
    : _ix(ix)
      , _iy(iy)
{   
   cout << "Point(int,int)" << endl;
}
    Point::Point(const  Point & rhs)
    : _ix(rhs._ix)
      ,_iy(rhs._iy)
{
    cout << "Point(int ,int )" << endl;
}
void Point::print()
{
    cout << "(" << endl;
    cout << "," << endl;
    cout << ")" << endl;
}

class Line
{
    public:
        Line(int x1,int y1,int x2,int y2);
        Line(const Line&rhs);
        void down();
    private:
        Point _pt1;
        Point _pt2;
};
    Line::Line(int x1, int y1 ,int x2,int y2)
    :_pt1(x1,y1)
     ,_pt2(x2,y2)
{
    std::cout << "Line(int,int,int,int)" << std::endl;
}
    Line::Line(const Line & rhs)
    :_pt1(rhs._pt1)
     ,_pt2(rhs._pt2)
{
    std::cout << "Line (const Line &)" << std::endl;
}

int main ()
{
}
