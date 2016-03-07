 ///---------------------------------------///
 /// @file is the template7.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 21:10:30
 ///------------------------------------------///
#include <iostream>
using namespace std;
template<class T,int num>
class Stack
{
    private:
        T sz[num];
        int point;
    public:
        Stack()
        {
            point=0;
        }

        bool isEmpty();
        bool isFull();
        bool push(const T&);
        bool pop(T&);
        int & GetPos()
        {
            return point;
        }
};

template<class T,int num>
bool Stack<T,num>::isEmpty()
{
    return point==0;
}

template<class T,int num>
bool Stack<T,num>::isFull()
{
    return point ==num;
}

template<class T,int num>
bool Stack<T,num>::push(const T & a)
{
    if(isFull())
        return false;
    else
    {
        sz[point]=a;
        point++;
        return true;
    }
}
template<class T,int num>
bool Stack<T,num>::pop(T & a)
{
    if(isEmpty())
    return false;
    else
    {
        point--;
        a=sz[point];
        return true;
    }
}


int main()
{
    Stack<int,10>st;
    std::cout << "判断是否为空"<<st.isEmpty()<< std::endl;
    st.push(5);
    std::cout << "判断是否为空"<<st.isEmpty() << std::endl;
    for(int i=0;i<10;i++)
    {
        st.push(i);
    }
    std::cout << "判断是否为满"<<st.isFull() << std::endl;
    int b=0;
    while(st.pop(b))
        cout<<b<<" "<<endl;
    cout<<endl;
    return 0;
}
