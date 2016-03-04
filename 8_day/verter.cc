///---------------------------------------///
//
/// @file is the verter.cc
/// @arthor is the Arthur(qiuyuanshun@yeah.net)
/// @date:2016-03-03 09:33:08
///------------------------------------------///
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef struct text
{
    int count;
    char word[20];
}text,*ptext;
int main()
{
    vector<text> vectext;
    //  text *ntext = new text;
    text ntext;
    strcpy(ntext.word,"hello");
    ntext.count=1;
    //  strcpy(vectext[0].word,"hello");
    //  vectext[0].count=1;

    vectext.push_back(ntext);
    for(auto elem: vectext)
    { 
        cout<<elem.word<<endl;
        cout<<elem.count<<endl;
    }
}                    
