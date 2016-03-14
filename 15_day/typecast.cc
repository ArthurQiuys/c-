///---------------------------------------///
/// @file is the typecast.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 11:21:36
///------------------------------------------///
#include <iostream>
using namespace std;

class Point
{
    public:
        Point(int ix =0 ,int iy =0)
            :_ix (ix)
             ,_iy (iy)
    {
        std::cout << "Point(int,int)" << std::endl;
    }
        int getx()const
        {
            return _ix;
        }
        int gety()const
        {
            return _iy;
        }
        void print()

        {
            std::cout << "(" << getx()
                <<","<< gety()
                <<")"<<std::endl;
        }
    private:
        int _ix;
        int _iy;
};
class Point3D : public Point
{
    public:
        Point3D(int x,int y,int z)
            :Point(x,y)
             ,_iz(z)
    {
        std::cout << "Point3D" << std::endl;
    }
        void print3D()
        {
            std::cout << "(" << getx()
                <<","<<gety()
                <<","<<_iz
                <<")"<<endl;
        } 
    private:
        int _iz;
}

int main(void)
{
}
    return 0;
}
