 ///---------------------------------------///
 //
 /// @file is the factory.cpp
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-19 11:31:55
 ///------------------------------------------///
#include "factory.h"
#include <iostream>
using namespace std;
ConcreateProduct::ConcreateProduct()
{
    std::cout << "ConcreateProduct of ConcreateProduct" << std::endl;
}
ConcreateProduct::~ConcreateProduct()
{
    std::cout << "destruction of ConcreateProduct()" << std::endl;
}
void Creator::AnOperation()
{
    Product *p = FactoryMathod();
    std::cout << "an opertion of product" << std::endl;
}

ConcreaxteCreator::ConcrateCreator()
{
    std::cout << "construction of ConcreateCreaator()" << std::endl;
}
ConcreateCreator::~ConcreateCreator()
{
    std::cout << "destruction of ConcreateCreator()" << std::endl;
}
Product * ConcreateCreator::FactoryMathod()
{
    return new ConcreateProduct();
}
