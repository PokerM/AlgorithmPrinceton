#include "quickfind.h"
#include <iostream>
using namespace std;

/* 
构造函数:申请空间,初始化数组和数组大小
 */
QuickFind::QuickFind(int s){
    this->array = new int[s];
    for(int i;i<s;i++)array[i]=i;
    this->size = s;
}

/* 
根据数组值是否相同判断是否为连接
 */
bool QuickFind::isConnected(int p,int q){
    if(p<size&&q<size){
        return array[p]==array[q];
    }
    return false;
}

/* 
连接两个子union,需要将其中一个子union的值全部改变
 */
void QuickFind::qf_union(int p, int q){
    if(p<size&&q<size){
        if(array[p]!=array[q]){
            int temp = array[p];
            for(int i=0;i<size;i++)
                if(array[i]==temp)array[i]=array[q];
        }
    }
}

void QuickFind::printqf(){
    for(int i=0;i<size;i++)cout<<array[i]<<" ";
    cout<<endl;
}

QuickFind::~QuickFind(){
    delete[] array;
}