 ///---------------------------------------///
 /// @file is the template6.cc
 /// @arthor is the Arthur(qiuyuanshun@yeah.net)
 /// @date:2016-03-07 20:49:09
 ///------------------------------------------///
#include <iostream>
using namespace std;

class StackA
{
private:
    int point;
    int size;
    int *sz;
public:
    StackA(int iNum = 1)
    {
        point = 0;
        size = iNum;
        sz = new int[size];
    }
    ~StackA()
    {
        delete []sz;
    }
    bool isEmpty() {return point == 0;}
    bool isFull() {return point == size;}
    int &GetPos() {return point;}
    bool push(const int & obj);
    bool pop(int & obj);
};
bool StackA::push(const int & obj)
{
    if (isFull())
        return false;
    else
    {
        sz[point++] = obj;
        return true;
    }
}
bool StackA::pop(int & obj)
{
    if (isEmpty())
        return false;
    else
    {
        obj = sz[--point];
        return true;
    }
}
int main()
{
    StackA st(10);          //普通类, int类型
//  StackA<int> st(10);         //模版类, int类型
    cout << "开始时st是否为空？ " << st.isEmpty() << endl;
    st.push(5);         //压入元素5
    cout << "此时st是否为空？ " << st.isEmpty() << endl;
    for (int i = 1; i < 10; i++)
    {
        st.push(i);     //压入9个元素
    }
    cout << "此时st是否已满？" << st.isFull() << endl;
    int rec = 0;
    while (st.pop(rec))
        cout << rec << "  "<<endl;
    cout << endl;    
    return 0;
}
