///---------------------------------------///
/// @file is the vector.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-03 08:48:28
///------------------------------------------///
#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

typedef struct WordNode
{
    string word;
    int num;
    struct WordNode *_next;
}WOR,*pWR;

class WordStatis
{
    public:
        void read_file(std::string filename);
        void write_file();
        void wordlin_file(std::string s1);
    private:
        std::vector<WordNode> verNode;
};

void WordStatis::read_file(std::string filename)
{
    ifstream fd(filename.data());
    string s1;
    while(fd>>s1)
    {
        if(s1[0]>'0'&&s1[0]<'9')
            continue;
        else
        {
            wordlin_file(s1);
        }
    }
}
void WordStatis::wordlin_file(std::string s1)
{
    WordNode new1;
    WordNode new2;
    new1.word="----------------";
    new2.word=s1;
    verNode.push_back(new1);
    int flag = 1;
    for(auto & elem:verNode)
    {
        if(elem.word == new2.word)
        {
            ++elem.num;
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        verNode.push_back(new2);
    }
    //for(auto &elem:verNode)
    //{
    //   cout<<elem.word<<endl;
    //  cout<<elem.num<<endl;
    //}
    // strcpy(verNode[0].word, "hello");
    //verNode[0].num = 1;
    //cout<<verNode[0]; 
}
void WordStatis::write_file()
{
    ofstream fd("test.txt");
    for(auto elem:verNode)
    {
        fd<<elem.word<<":"<<elem.num<<endl;
    }
    fd.close();
}
int main(int argc, const char *argv[])
{
    WordStatis fd;
    fd.read_file(argv[1]);
    fd.write_file();
    return 0;
}
