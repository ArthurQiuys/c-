///---------------------------------------///
/// @file is the 多态.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-15 22:04:00
///------------------------------------------///
#include <iostream>
using namespace std;

class CWorm
{
    public:
        virtual void Draw()
        {
            cout<<"CWorm::Draw()"<<endl;
        }
        virtual void Draw1()
        {
            cout<<"CWorm::Draw1()"<<endl;
        }
};
class CAnt:public CWorm
{
    public:
        void Draw()
        {
            cout<<"CAnt::Draw()"<<endl;
        }
};
class CSpider:public CWorm
{
    public:
        void Draw()
        {
            cout<<"CSpider::Draw()"<<endl;
        }
};
void display(CWorm* p)  //display函数，以base指针为参数
{
    p->Draw();
}
int  main()
{
    CWorm *pWorm;
    CAnt ant;
    CSpider spider;
    pWorm=&ant;
    pWorm->Draw();
    pWorm=&spider;
    pWorm->Draw();
}

