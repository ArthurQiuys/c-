///---------------------------------------///
/// @file is the inheritence.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-14 11:07:42
///------------------------------------------///
#include <iostream>
using namespace std;

class Eye
{
    public:
        void look()
        {
            std::cout << "eye.look()" << std::endl;
        }
};
class Noce
{
    public:
        void smell()
        {
            std::cout << "nose.smell()" << std::endl;
        }};

class Mouth
{
    public:
        void eat()
        {
            std::cout << "Mouth::eat()" << std::endl;
        }
};

class Ear
{
    public:
        void listen()
        {
            std::cout << "ear.listen()" << std::endl;
        }
};
class Head
: public Eye
    ,public Noce
    ,public Mouth
    ,public Ear
{
    public:
        void look()
        {
            _eye.look();
        }
        void smell()
        {
            _noce.smell();
        }
        void eat()
        {
            _mouth.eat();
        }
        void listen()
        {
            _ear.listen();
        }
    private:
        Eye _eye;
        Noce _noce;
        Mouth _mouth;
        Ear _ear;
};

int main(void)
{
    Head head;
    head.look();
    head.smell();
    head.eat();
    head.listen();
    return 0;
}
