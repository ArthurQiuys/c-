 ///---------------------------------------///
 /// @file is the auto.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-11 20:29:16
 ///------------------------------------------///
#include <iostream>
#include <memory>

int main(void)
{
    double *pd = new double(77.77);
    std::auto_ptr<double> apd(pd);
    std::cout << "*apd = " << *apd << std::endl;
    //std::cout << "apd = " << apd << std::endl;
    std::cout << "apd.get() = " << apd.get() << std::endl;//get()方法返回auto_ptr对象中的基础指针


    int *pi = new int(7);
    std::auto_ptr<int> api_1(pi);
    std::auto_ptr<int> api_2(api_1);//进行复制的时候

    //std::cout << "*api_1 = " << *api_1 << std::endl;//Error,segment default
    std::cout << "*api_2 = " << *api_2 << std::endl;


    float *pf = new float(static_cast<float>(0.77));
    std::auto_ptr<float> apf;
    //apf = pf;
    apf.reset(pf);//只能调用reset方法来改变指针

    std::cout << "*apf = " << *apf << std::endl;

    return 0;
}
