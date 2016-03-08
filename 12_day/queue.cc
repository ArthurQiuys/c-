///---------------------------------------///
/// @file is the queue.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-08 10:03:42
///------------------------------------------///
#include <iostream>
#include <string>
using namespace std;
#define size 3
template  <class T>
class deque
{
    public:
        deque()
        {
            front = end = number = 0;
        }
        T ru_dui(T x)
        {
            if(number == size)
            {
                std::cout << "已满无法擦入" << std::endl;
            return;
            }
            else
            {
                number++;
                a[end]= x;
                end = (end +1)%size;
            }
        }
        T chu_dui()
        {
            if(number == 0)
            {
                std::cout << "队列空" << std::endl;
                return;
            }
            else
            {
                number--;
                std::cout << "出队元素是：" << std::endl;
                front=(front+1)%size;
            }
        }
        T show()
        {
            std::cout << "队列中的元素的个数是：" << std::endl;
        }
    private:
        T front;
        T end;
        T number;
        T a[size];
};
int main()
{
    deque<int> que1;
    string str1;
    cout<<"输入y入队，输入n出队，输入k查看队列元素个数，输入x退出"<<endl;
    cin>>str1;
    while(str1[0]!='x')
    {
        if(str1[0]=='y')
        {
            int c;
            cout<<"输入入队列元素"<<endl;
            cin>>c;
            que1.ru_dui(c);
        }
        else if(str1[0]=='n')
            que1.chu_dui();
        else if(str1[0]=='k')
            que1.show();
        else;
        cout<<"输入y入队，输入n出队，输入k查看队列元素个数，输入x退出"<<endl;
        cin>>str1;
    }
    return 0;
}
