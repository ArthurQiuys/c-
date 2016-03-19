 ///---------------------------------------///
 /// @file is the strategy.h
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-17 16:26:18
 ///------------------------------------------///
#ifndef _MY_STRATEGY_H__
#define _MY_STRATEGY_H__
#include <iostream>
class Strategy;
class Context
{
    public:
        Context(Strategy * strategy);
        ~Context();
        void ContextInterface();
    private:
        Strategy * _pStrategy;
};
class Strategy
{


using namespace std;
