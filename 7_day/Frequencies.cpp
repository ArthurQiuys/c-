///---------------------------------------///
/// @file is the Frequencies.cpp
/// @arthor is the arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-02 19:48:02
///------------------------------------------///
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <regex>
#include <stdio.h>
#include <string>
#include <fstream>
using namespace std;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;
typedef struct WordNode
{
    string word;
    int num;
    struct WordNode * _next;
}WOR, *pWR;//储存数据的结构体，word 储存词语 num 储存词频

void WordLine_order_insert(pWR * phead,pWR * ptail,string word)//尾插法
{
    pWR pnew,pcur,ppre;
    pnew =new WOR;
    pnew->word = word;
    pnew->num = 1;
    pnew->_next=NULL;

    pcur = *phead;
    ppre = pcur;
    if(pcur == NULL)//开始时链表为空
    {
        *phead = pnew;
        *ptail = pnew;
    }
    else if(pcur->word>pnew->word)//插到头部
    {
        pnew->_next=*phead;
        *phead = pnew;
    }
    else
    {
        while(pcur!=NULL)//插入中间
        {
            if(pcur->word==pnew->word)//如果有和他相同的单词，count++
            {
                pcur->num++;
                break;
            }
            else if(pcur->word>pnew->word)//如果没有就会插到合适的位置
            {
                ppre->_next=pnew;
                pnew->_next=pcur;
                break;
            }
            ppre=pcur;
            pcur=pcur->_next;
        }
        if(pcur==NULL)

        {
            (*ptail)->_next = pnew;
            *ptail = pnew;
        }

    }

}

/*void Wordline_linetop(pWR phead)
  {

  int a[10];//存放10个词频最大的单词的词频
  char b[10][20];//存放10个词频最大的单词
  int i,j;
  pWR pcur;
  pcur=phead;
  memset(a,0,10);
  memset(b,0,sizeof(b));
  while(pcur->_next!=NULL)
  {
  for(i=0;i<10;i++)//遍历检查10个存储的词频
  {
  if(a[i]<pcur->num)//如果有词频大于存储的10
  {
  for(j=9;j>i;j--)
  {
  a[j]=a[j-1];
  strcpy(b[j],b[j-1]);
  }
  a[i]=pcur->num;
  strcpy(b[i],pcur->word);
  break;
  }
  }
  pcur=pcur->_next;
  }
  for(i=0;i<10;i++)
  {
  std::cout << ":"<<b[i]<<":"<<a[i]<< std::endl;
  }
  }
  */

class WordStatic
{
    public:
        void read_file(std::string filename);
        void write_file(std::string filename);
    private:
        pWR _phead;
        pWR _ptail;
};

void WordStatic::read_file(std::string filename)
{
    _phead = NULL;
    _ptail = NULL;
    ifstream fs(filename.data());
    if(!fs.good())
    {
        cout<<"fstream open error"<<endl;
        return;
    }
    string s1;
    while(fs>>s1)
    {
        if(s1[0]>'0'&&s1[0]<'9')
            continue;
        else
        {
            WordLine_order_insert(&_phead,&_ptail,s1);
        }
    }
    pWR pnew;
    pnew = new WOR;
    pnew = _phead;
    while(pnew != NULL)
    {
        pnew = pnew ->_next;
    }
}

void WordStatic::write_file(std::string filename)
{
    ofstream fd("test.txt");
    pWR pnew;
    pnew = _phead;
    while(pnew!=NULL)
    {
        fd << pnew->word<<':'<<pnew->num<<endl;
       pnew= pnew->_next;
    }
}
int main(int argc, const char *argv[])
{
    WordStatic fd;
    fd.read_file(argv[1]);
    fd.write_file("123");
    return 0;
}
