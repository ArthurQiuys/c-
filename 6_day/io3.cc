 ///---------------------------------------///
 /// @file is the io3.cc
 /// @arthor is the arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-02 10:55:23
 ///------------------------------------------///
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
    fstream fs("f1.dat",std::ios::in|std::ios::out);
    if(!fs.good())
    {
        std::cout << "fstream open error" << std::endl;
        return -1;
    }
   // std::cout << "execute" << std::endl;
     int ival;
   for(int idx = 0;idx !=10;++idx)
   {
        std::cin>>ival;
        fs<< ival << ' ';

   }
    
   std::cout << fs.tellp() << std::endl;
}

    
