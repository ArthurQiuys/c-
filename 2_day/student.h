///---------------------------------------///
/// @file is the student.cc
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-02-26 19:20:39
///------------------------------------------///
#include <iostream>
using namespace std;

class point
{
    private:
        int xPos;
        int yPos;
    public:
        point()
        {
            std::cout << "没有参数的构造函数" << std::endl;
            xPos = 0;
            yPos = 0;
        }
        point(int x , int y)
            :xPos(x)
             ,yPos(y)
    {
        std::cout << "有参数的构造函数" << std::endl;
        std::cout << "point" << std::endl;
    }
        void printf()
        {
            std::cout << "xPos:"<<xPos<<"yPos:"<<yPos << std::endl;
        }
};
