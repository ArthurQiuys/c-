///---------------------------------------///
/// @file is the nestedclass.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-04 15:16:08
///------------------------------------------///
#include <iostream>
using namespace std;

class Line
{
    public:
        class Point
        {
            public:
                Point(int ix =0, int iy =0)
                    : _ix(ix)
                      ,_iy(iy)
            {
                std::cout << "Point()" << std::endl;
            }
                void printPoint();
            private:
                int _ix;
                int _iy;
        };
    public:
        Line(int x1,int y1, int x2, int y2)
            : _pt1(x1.y1)
              ,_pt2(x2,y1)
    {
        std::cout << "Line(intintintint)" << std::endl;
    }
        void printLine()
        {
            _pt1.printPoint();
            _pt2.printPoint();
        }
    private:
        Point _pt1;
        Point _pt1;
};

void Line::Point::printPoint()
{
}
