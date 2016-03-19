 ///---------------------------------------///
 /// @file is the factory.cpp
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-19 11:24:22
 ///------------------------------------------///
 
#ifndef FACTORY_H
#define FACTORY_H

class Product
{
    public:
        Product(){}
        virtual ~ Product(){}
};

class ConcreatrProduct
:public Product
{
    public:
        ConcreatrProduct();
        virtual ~ConcreatrProduct();
};

class Creator
{
    public:
        Creator(){}
        virtual ~Creator(){}
        void AnOperation();
    protected:
        virtual Product * FactoryMathod()=0;
};

class ConcreateCreator
:public Creator
    {
        ConcreateCreator();
        virtual ~ConcreateCreator();
protected:
    virtual Product*FactoryMathod();
    };

#endif
